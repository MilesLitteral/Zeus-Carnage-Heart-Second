#include <windows.h>
#include <stdlib.h>
#include <string.h>

static void zeus_set_cwd_if_exists(const char* path) {
    DWORD attr = GetFileAttributesA(path);
    if (attr != INVALID_FILE_ATTRIBUTES && (attr & FILE_ATTRIBUTE_DIRECTORY)) {
        SetCurrentDirectoryA(path);
    }
}

void zeus_set_asset_root(void)
{
    const char* env = getenv("ZEUS_ASSETS");
    if (env && *env) {
        zeus_set_cwd_if_exists(env);
        return;
    }

    // Fallback: ./assets relative to executable location
    {
        char exe_path[MAX_PATH] = {0};
        char* slash = NULL;
        if (GetModuleFileNameA(NULL, exe_path, MAX_PATH) != 0) {
            slash = strrchr(exe_path, '\\');
            if (slash) {
                *slash = '\0';
                lstrcatA(exe_path, "\\assets");
                zeus_set_cwd_if_exists(exe_path);
                return;
            }
        }
    }

    // Last resort: ./assets relative to current working dir
    zeus_set_cwd_if_exists("assets");
}
