#ifdef USE_SDL

#include <SDL.h>
#include <SDL_opengl.h>
#include <windows.h>
#include <stdint.h>
#include <stdlib.h>

// Globals from zeus.c
extern unsigned int DAT_004bf7a0; // held
extern unsigned int DAT_004bf7a4; // pressed
extern unsigned short* DAT_004bf7e0; // framebuffer

static SDL_Window* g_window = NULL;
static SDL_GLContext g_gl = NULL;
static GLuint g_tex = 0;
static int g_win_w = 640;
static int g_win_h = 480;
static int g_fb_w = 512;
static int g_fb_h = 240;

static uint32_t sdl_map_key(SDL_Scancode sc)
{
    switch (sc) {
        case SDL_SCANCODE_UP:    return 0x1000;
        case SDL_SCANCODE_RIGHT: return 0x2000;
        case SDL_SCANCODE_DOWN:  return 0x4000;
        case SDL_SCANCODE_LEFT:  return 0x8000;
        case SDL_SCANCODE_RETURN:
        case SDL_SCANCODE_SPACE:
        case SDL_SCANCODE_Z:     return 0x20;   // confirm
        case SDL_SCANCODE_ESCAPE:
        case SDL_SCANCODE_X:     return 0x40;   // cancel
        default: return 0;
    }
}

static void sdl_apply_key(uint32_t mask, int is_down, int is_repeat)
{
    if (mask == 0) return;
    if (is_down) {
        if (!is_repeat && (DAT_004bf7a0 & mask) == 0) {
            DAT_004bf7a4 |= mask; // newly pressed
        }
        DAT_004bf7a0 |= mask;
    } else {
        DAT_004bf7a0 &= ~mask;
        DAT_004bf7a4 &= ~mask;
    }
}

int sdl_backend_init(int win_w, int win_h)
{
    if (SDL_Init(SDL_INIT_VIDEO | SDL_INIT_EVENTS | SDL_INIT_GAMECONTROLLER) != 0) {
        return 0;
    }

    g_win_w = win_w;
    g_win_h = win_h;

    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 2);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 1);

    g_window = SDL_CreateWindow(
        "ZEUS Carnage Heart Second",
        SDL_WINDOWPOS_CENTERED,
        SDL_WINDOWPOS_CENTERED,
        g_win_w,
        g_win_h,
        SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN
    );

    if (!g_window) {
        return 0;
    }

    g_gl = SDL_GL_CreateContext(g_window);
    if (!g_gl) {
        return 0;
    }

    glViewport(0, 0, g_win_w, g_win_h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(0, 1, 1, 0, -1, 1);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    glEnable(GL_TEXTURE_2D);

    glGenTextures(1, &g_tex);
    glBindTexture(GL_TEXTURE_2D, g_tex);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MIN_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_MAG_FILTER, GL_NEAREST);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_S, GL_CLAMP);
    glTexParameteri(GL_TEXTURE_2D, GL_TEXTURE_WRAP_T, GL_CLAMP);

    // Allocate texture storage (RGB5551)
    glTexImage2D(GL_TEXTURE_2D, 0, GL_RGBA, g_fb_w, g_fb_h, 0, GL_RGBA, GL_UNSIGNED_SHORT_5_5_5_1, NULL);

    return 1;
}

int sdl_backend_prepare_framebuffer(void)
{
    if (!DAT_004bf7e0) {
        DAT_004bf7e0 = malloc(g_fb_w * g_fb_h * 2);
        if (!DAT_004bf7e0) {
            return 0;
        }
    }
    return 1;
}

void sdl_backend_shutdown(void)
{
    if (g_tex) {
        glDeleteTextures(1, &g_tex);
        g_tex = 0;
    }
    if (g_gl) {
        SDL_GL_DeleteContext(g_gl);
        g_gl = NULL;
    }
    if (g_window) {
        SDL_DestroyWindow(g_window);
        g_window = NULL;
    }
    SDL_Quit();

    if (DAT_004bf7e0) {
        free(DAT_004bf7e0);
        DAT_004bf7e0 = NULL;
    }
}

void sdl_backend_pump_input(void)
{
    SDL_Event e;
    while (SDL_PollEvent(&e)) {
        if (e.type == SDL_QUIT) {
            ExitProcess(0);
        } else if (e.type == SDL_KEYDOWN) {
            uint32_t mask = sdl_map_key(e.key.keysym.scancode);
            sdl_apply_key(mask, 1, e.key.repeat != 0);
        } else if (e.type == SDL_KEYUP) {
            uint32_t mask = sdl_map_key(e.key.keysym.scancode);
            sdl_apply_key(mask, 0, 0);
        }
    }
}

void sdl_backend_present(void)
{
    if (!g_window || !g_tex || !DAT_004bf7e0) return;

    int w, h;
    SDL_GetWindowSize(g_window, &w, &h);
    if (w != g_win_w || h != g_win_h) {
        g_win_w = w;
        g_win_h = h;
        glViewport(0, 0, g_win_w, g_win_h);
    }

    glClearColor(0, 0, 0, 1);
    glClear(GL_COLOR_BUFFER_BIT);

    glBindTexture(GL_TEXTURE_2D, g_tex);
    glTexSubImage2D(GL_TEXTURE_2D, 0, 0, 0, g_fb_w, g_fb_h, GL_RGBA, GL_UNSIGNED_SHORT_5_5_5_1, DAT_004bf7e0);

    glBegin(GL_QUADS);
    glTexCoord2f(0.0f, 0.0f); glVertex2f(0.0f, 0.0f);
    glTexCoord2f(1.0f, 0.0f); glVertex2f(1.0f, 0.0f);
    glTexCoord2f(1.0f, 1.0f); glVertex2f(1.0f, 1.0f);
    glTexCoord2f(0.0f, 1.0f); glVertex2f(0.0f, 1.0f);
    glEnd();

    SDL_GL_SwapWindow(g_window);
}

#endif // USE_SDL
