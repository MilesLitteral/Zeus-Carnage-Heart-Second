
#include "zeus.h"
#include <cstdint>

typedef struct _s_HandlerType _s_HandlerType, *P_s_HandlerType;
typedef struct _s_HandlerType HandlerType;
typedef struct TypeDescriptor TypeDescriptor, *PTypeDescriptor;
typedef int ptrdiff_t;

struct TypeDescriptor {
    void *pVFTable;
    void *spare;
    char name[0];
};

struct _s_HandlerType {
    uint adjectives;
    struct TypeDescriptor *pType;
    ptrdiff_t dispCatchObj;
    void *addressOfHandler;
};

typedef struct _s_UnwindMapEntry _s_UnwindMapEntry, *P_s_UnwindMapEntry;

typedef struct _s_UnwindMapEntry UnwindMapEntry;

typedef int __ehstate_t;

struct _s_UnwindMapEntry {
    __ehstate_t toState;
    void (*action)(void);
};

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion;

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct {
    dword OffsetToDirectory:31;
    dword DataIsDirectory:1;
};

union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion {
    dword OffsetToData;
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryStruct;
};

typedef struct _s_TryBlockMapEntry _s_TryBlockMapEntry, *P_s_TryBlockMapEntry;

struct _s_TryBlockMapEntry {
    __ehstate_t tryLow;
    __ehstate_t tryHigh;
    __ehstate_t catchHigh;
    int nCatches;
    HandlerType *pHandlerArray;
};

typedef struct _s_TryBlockMapEntry TryBlockMapEntry;

typedef struct CDialog CDialog, *PCDialog;

struct CDialog { // PlaceHolder Class Structure
};

typedef struct CWnd CWnd, *PCWnd;

struct CWnd { // PlaceHolder Class Structure
};

typedef struct CFrameWnd CFrameWnd, *PCFrameWnd;

struct CFrameWnd { // PlaceHolder Class Structure
};

typedef struct CLIENT_ID CLIENT_ID, *PCLIENT_ID;

struct CLIENT_ID {
    void *UniqueProcess;
    void *UniqueThread;
};

typedef struct _s_FuncInfo _s_FuncInfo, *P_s_FuncInfo;

typedef struct _s_FuncInfo FuncInfo;

struct _s_FuncInfo {
    uint magicNumber_and_bbtFlags;
    __ehstate_t maxState;
    UnwindMapEntry *pUnwindMap;
    uint nTryBlocks;
    TryBlockMapEntry *pTryBlockMap;
    uint nIPMapEntries;
    void *pIPToStateMap;
};

typedef struct CCmdUI CCmdUI, *PCCmdUI;

struct CCmdUI { // PlaceHolder Class Structure
};

typedef struct CPtrList CPtrList, *PCPtrList;

struct CPtrList { // PlaceHolder Class Structure
};

typedef struct CPaintDC CPaintDC, *PCPaintDC;

struct CPaintDC { // PlaceHolder Class Structure
};

typedef struct CSimpleException CSimpleException, *PCSimpleException;

struct CSimpleException { // PlaceHolder Class Structure
};

typedef struct DLGTEMPLATE DLGTEMPLATE, *PDLGTEMPLATE;

typedef struct DLGTEMPLATE *LPCDLGTEMPLATEA;

typedef ulong DWORD;

typedef ushort WORD;

struct DLGTEMPLATE {
    DWORD style;
    DWORD dwExtendedStyle;
    WORD cdit;
    short x;
    short y;
    short cx;
    short cy;
};

typedef int BOOL;

typedef struct HDC__ HDC__, *PHDC__;

typedef struct HDC__ *HDC;

typedef long LONG_PTR;

typedef LONG_PTR LPARAM;

typedef BOOL (*GRAYSTRINGPROC)(HDC, LPARAM, int);

struct HDC__ {
    int unused;
};

typedef struct tagWNDCLASSA tagWNDCLASSA, *PtagWNDCLASSA;

typedef uint UINT;

typedef LONG_PTR LRESULT;

typedef struct HWND__ HWND__, *PHWND__;

typedef struct HWND__ *HWND;

typedef uint UINT_PTR;

typedef UINT_PTR WPARAM;

typedef LRESULT (*WNDPROC)(HWND, UINT, WPARAM, LPARAM);

typedef struct HINSTANCE__ HINSTANCE__, *PHINSTANCE__;

typedef struct HINSTANCE__ *HINSTANCE;

typedef struct HICON__ HICON__, *PHICON__;

typedef struct HICON__ *HICON;

typedef HICON HCURSOR;

typedef struct HBRUSH__ HBRUSH__, *PHBRUSH__;

typedef struct HBRUSH__ *HBRUSH;

typedef char CHAR;

typedef CHAR *LPCSTR;

struct HBRUSH__ {
    int unused;
};

struct tagWNDCLASSA {
    UINT style;
    WNDPROC lpfnWndProc;
    int cbClsExtra;
    int cbWndExtra;
    HINSTANCE hInstance;
    HICON hIcon;
    HCURSOR hCursor;
    HBRUSH hbrBackground;
    LPCSTR lpszMenuName;
    LPCSTR lpszClassName;
};

struct HICON__ {
    int unused;
};

struct HINSTANCE__ {
    int unused;
};

struct HWND__ {
    int unused;
};

typedef struct tagMSG tagMSG, *PtagMSG;

typedef struct tagMSG MSG;

typedef struct tagPOINT tagPOINT, *PtagPOINT;

typedef struct tagPOINT POINT;

typedef long LONG;

struct tagPOINT {
    LONG x;
    LONG y;
};

struct tagMSG {
    HWND__ *hwnd;
    UINT message;
    WPARAM wParam;
    LPARAM lParam;
    DWORD time;
    POINT pt;
};

typedef struct tagMSG *LPMSG;

typedef struct tagSCROLLINFO tagSCROLLINFO, *PtagSCROLLINFO;

struct tagSCROLLINFO {
    UINT cbSize;
    UINT fMask;
    int nMin;
    int nMax;
    UINT nPage;
    int nPos;
    int nTrackPos;
};

typedef struct tagSCROLLINFO SCROLLINFO;

typedef LRESULT (*HOOKPROC)(int, WPARAM, LPARAM);

typedef SCROLLINFO *LPCSCROLLINFO;

typedef struct tagWNDCLASSA WNDCLASSA;

typedef struct tagPAINTSTRUCT tagPAINTSTRUCT, *PtagPAINTSTRUCT;

typedef struct tagPAINTSTRUCT *LPPAINTSTRUCT;

typedef struct tagRECT tagRECT, *PtagRECT;

typedef struct tagRECT RECT;

typedef uchar BYTE;

struct tagRECT {
    LONG left;
    LONG top;
    LONG right;
    LONG bottom;
};

struct tagPAINTSTRUCT {
    HDC hdc;
    BOOL fErase;
    RECT rcPaint;
    BOOL fRestore;
    BOOL fIncUpdate;
    BYTE rgbReserved[32];
};

typedef struct tagPAINTSTRUCT PAINTSTRUCT;

typedef struct tagWNDCLASSA *LPWNDCLASSA;

typedef int INT_PTR;

typedef INT_PTR (*DLGPROC)(HWND, UINT, WPARAM, LPARAM);

typedef void *HANDLE;

typedef HANDLE HDWP;

typedef struct _cpinfo _cpinfo, *P_cpinfo;

struct _cpinfo {
    UINT MaxCharSize;
    BYTE DefaultChar[2];
    BYTE LeadByte[12];
};

typedef struct _cpinfo *LPCPINFO;

typedef DWORD LCTYPE;

typedef struct tagRGBQUAD tagRGBQUAD, *PtagRGBQUAD;

struct tagRGBQUAD {
    BYTE rgbBlue;
    BYTE rgbGreen;
    BYTE rgbRed;
    BYTE rgbReserved;
};

typedef struct tagBITMAPINFO tagBITMAPINFO, *PtagBITMAPINFO;

typedef struct tagBITMAPINFO BITMAPINFO;

typedef struct tagBITMAPINFOHEADER tagBITMAPINFOHEADER, *PtagBITMAPINFOHEADER;

typedef struct tagBITMAPINFOHEADER BITMAPINFOHEADER;

typedef struct tagRGBQUAD RGBQUAD;

struct tagBITMAPINFOHEADER {
    DWORD biSize;
    LONG biWidth;
    LONG biHeight;
    WORD biPlanes;
    WORD biBitCount;
    DWORD biCompression;
    DWORD biSizeImage;
    LONG biXPelsPerMeter;
    LONG biYPelsPerMeter;
    DWORD biClrUsed;
    DWORD biClrImportant;
};

struct tagBITMAPINFO {
    BITMAPINFOHEADER bmiHeader;
    RGBQUAD bmiColors[1];
};

typedef struct _devicemodeA _devicemodeA, *P_devicemodeA;

typedef union _union_655 _union_655, *P_union_655;

typedef union _union_658 _union_658, *P_union_658;

typedef struct _struct_656 _struct_656, *P_struct_656;

typedef struct _struct_657 _struct_657, *P_struct_657;

typedef struct _POINTL _POINTL, *P_POINTL;

typedef struct _POINTL POINTL;

struct _POINTL {
    LONG x;
    LONG y;
};

struct _struct_657 {
    POINTL dmPosition;
    DWORD dmDisplayOrientation;
    DWORD dmDisplayFixedOutput;
};

struct _struct_656 {
    short dmOrientation;
    short dmPaperSize;
    short dmPaperLength;
    short dmPaperWidth;
    short dmScale;
    short dmCopies;
    short dmDefaultSource;
    short dmPrintQuality;
};

union _union_655 {
    struct _struct_656 field0;
    struct _struct_657 field1;
};

union _union_658 {
    DWORD dmDisplayFlags;
    DWORD dmNup;
};

struct _devicemodeA {
    BYTE dmDeviceName[32];
    WORD dmSpecVersion;
    WORD dmDriverVersion;
    WORD dmSize;
    WORD dmDriverExtra;
    DWORD dmFields;
    union _union_655 field6_0x2c;
    short dmColor;
    short dmDuplex;
    short dmYResolution;
    short dmTTOption;
    short dmCollate;
    BYTE dmFormName[32];
    WORD dmLogPixels;
    DWORD dmBitsPerPel;
    DWORD dmPelsWidth;
    DWORD dmPelsHeight;
    union _union_658 field17_0x74;
    DWORD dmDisplayFrequency;
    DWORD dmICMMethod;
    DWORD dmICMIntent;
    DWORD dmMediaType;
    DWORD dmDitherType;
    DWORD dmReserved1;
    DWORD dmReserved2;
    DWORD dmPanningWidth;
    DWORD dmPanningHeight;
};

typedef struct _devicemodeA *PDEVMODEA;

typedef struct _devicemodeA *LPDEVMODEA;

typedef struct _OVERLAPPED _OVERLAPPED, *P_OVERLAPPED;

typedef ulong ULONG_PTR;

typedef union _union_518 _union_518, *P_union_518;

typedef struct _struct_519 _struct_519, *P_struct_519;

typedef void *PVOID;

struct _struct_519 {
    DWORD Offset;
    DWORD OffsetHigh;
};

union _union_518 {
    struct _struct_519 s;
    PVOID Pointer;
};

struct _OVERLAPPED {
    ULONG_PTR Internal;
    ULONG_PTR InternalHigh;
    union _union_518 u;
    HANDLE hEvent;
};

typedef struct _SECURITY_ATTRIBUTES _SECURITY_ATTRIBUTES, *P_SECURITY_ATTRIBUTES;
typedef void *LPVOID;
struct _SECURITY_ATTRIBUTES {
    DWORD nLength;
    LPVOID lpSecurityDescriptor;
    BOOL bInheritHandle;
};

typedef struct _TIME_ZONE_INFORMATION _TIME_ZONE_INFORMATION, *P_TIME_ZONE_INFORMATION;

typedef struct _TIME_ZONE_INFORMATION *LPTIME_ZONE_INFORMATION;

typedef wchar_t WCHAR;

typedef struct _SYSTEMTIME _SYSTEMTIME, *P_SYSTEMTIME;

typedef struct _SYSTEMTIME SYSTEMTIME;

struct _SYSTEMTIME {
    WORD wYear;
    WORD wMonth;
    WORD wDayOfWeek;
    WORD wDay;
    WORD wHour;
    WORD wMinute;
    WORD wSecond;
    WORD wMilliseconds;
};

struct _TIME_ZONE_INFORMATION {
    LONG Bias;
    WCHAR StandardName[32];
    SYSTEMTIME StandardDate;
    LONG StandardBias;
    WCHAR DaylightName[32];
    SYSTEMTIME DaylightDate;
    LONG DaylightBias;
};

typedef struct _WIN32_FIND_DATAA _WIN32_FIND_DATAA, *P_WIN32_FIND_DATAA;

typedef struct _FILETIME _FILETIME, *P_FILETIME;

typedef struct _FILETIME FILETIME;

struct _FILETIME {
    DWORD dwLowDateTime;
    DWORD dwHighDateTime;
};

struct _WIN32_FIND_DATAA {
    DWORD dwFileAttributes;
    FILETIME ftCreationTime;
    FILETIME ftLastAccessTime;
    FILETIME ftLastWriteTime;
    DWORD nFileSizeHigh;
    DWORD nFileSizeLow;
    DWORD dwReserved0;
    DWORD dwReserved1;
    CHAR cFileName[260];
    CHAR cAlternateFileName[14];
};

typedef struct _OVERLAPPED *LPOVERLAPPED;

typedef struct _SECURITY_ATTRIBUTES *LPSECURITY_ATTRIBUTES;

typedef struct _STARTUPINFOA _STARTUPINFOA, *P_STARTUPINFOA;

typedef CHAR *LPSTR;

typedef BYTE *LPBYTE;

struct _STARTUPINFOA {
    DWORD cb;
    LPSTR lpReserved;
    LPSTR lpDesktop;
    LPSTR lpTitle;
    DWORD dwX;
    DWORD dwY;
    DWORD dwXSize;
    DWORD dwYSize;
    DWORD dwXCountChars;
    DWORD dwYCountChars;
    DWORD dwFillAttribute;
    DWORD dwFlags;
    WORD wShowWindow;
    WORD cbReserved2;
    LPBYTE lpReserved2;
    HANDLE hStdInput;
    HANDLE hStdOutput;
    HANDLE hStdError;
};

typedef struct _WIN32_FIND_DATAA *LPWIN32_FIND_DATAA;

typedef struct _STARTUPINFOA *LPSTARTUPINFOA;

typedef struct _RTL_CRITICAL_SECTION _RTL_CRITICAL_SECTION, *P_RTL_CRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION *PRTL_CRITICAL_SECTION;

typedef PRTL_CRITICAL_SECTION LPCRITICAL_SECTION;

typedef struct _RTL_CRITICAL_SECTION_DEBUG _RTL_CRITICAL_SECTION_DEBUG, *P_RTL_CRITICAL_SECTION_DEBUG;

typedef struct _RTL_CRITICAL_SECTION_DEBUG *PRTL_CRITICAL_SECTION_DEBUG;

typedef struct _LIST_ENTRY _LIST_ENTRY, *P_LIST_ENTRY;

typedef struct _LIST_ENTRY LIST_ENTRY;

struct _RTL_CRITICAL_SECTION {
    PRTL_CRITICAL_SECTION_DEBUG DebugInfo;
    LONG LockCount;
    LONG RecursionCount;
    HANDLE OwningThread;
    HANDLE LockSemaphore;
    ULONG_PTR SpinCount;
};

struct _LIST_ENTRY {
    struct _LIST_ENTRY *Flink;
    struct _LIST_ENTRY *Blink;
};

struct _RTL_CRITICAL_SECTION_DEBUG {
    WORD Type;
    WORD CreatorBackTraceIndex;
    struct _RTL_CRITICAL_SECTION *CriticalSection;
    LIST_ENTRY ProcessLocksList;
    DWORD EntryCount;
    DWORD ContentionCount;
    DWORD Flags;
    WORD CreatorBackTraceIndexHigh;
    WORD SpareWORD;
};

typedef struct _EXCEPTION_POINTERS _EXCEPTION_POINTERS, *P_EXCEPTION_POINTERS;

typedef LONG (*PTOP_LEVEL_EXCEPTION_FILTER)(struct _EXCEPTION_POINTERS *);

typedef struct _EXCEPTION_RECORD _EXCEPTION_RECORD, *P_EXCEPTION_RECORD;

typedef struct _EXCEPTION_RECORD EXCEPTION_RECORD;

typedef EXCEPTION_RECORD *PEXCEPTION_RECORD;

typedef struct _CONTEXT _CONTEXT, *P_CONTEXT;

typedef struct _CONTEXT CONTEXT;

typedef CONTEXT *PCONTEXT;

typedef struct _FLOATING_SAVE_AREA _FLOATING_SAVE_AREA, *P_FLOATING_SAVE_AREA;

typedef struct _FLOATING_SAVE_AREA FLOATING_SAVE_AREA;

struct _FLOATING_SAVE_AREA {
    DWORD ControlWord;
    DWORD StatusWord;
    DWORD TagWord;
    DWORD ErrorOffset;
    DWORD ErrorSelector;
    DWORD DataOffset;
    DWORD DataSelector;
    BYTE RegisterArea[80];
    DWORD Cr0NpxState;
};

struct _CONTEXT {
    DWORD ContextFlags;
    DWORD Dr0;
    DWORD Dr1;
    DWORD Dr2;
    DWORD Dr3;
    DWORD Dr6;
    DWORD Dr7;
    FLOATING_SAVE_AREA FloatSave;
    DWORD SegGs;
    DWORD SegFs;
    DWORD SegEs;
    DWORD SegDs;
    DWORD Edi;
    DWORD Esi;
    DWORD Ebx;
    DWORD Edx;
    DWORD Ecx;
    DWORD Eax;
    DWORD Ebp;
    DWORD Eip;
    DWORD SegCs;
    DWORD EFlags;
    DWORD Esp;
    DWORD SegSs;
    BYTE ExtendedRegisters[512];
};

struct _EXCEPTION_RECORD {
    DWORD ExceptionCode;
    DWORD ExceptionFlags;
    struct _EXCEPTION_RECORD *ExceptionRecord;
    PVOID ExceptionAddress;
    DWORD NumberParameters;
    ULONG_PTR ExceptionInformation[15];
};

struct _EXCEPTION_POINTERS {
    PEXCEPTION_RECORD ExceptionRecord;
    PCONTEXT ContextRecord;
};

typedef struct _SYSTEMTIME *LPSYSTEMTIME;

typedef PTOP_LEVEL_EXCEPTION_FILTER LPTOP_LEVEL_EXCEPTION_FILTER;

typedef LONG *PLONG;

typedef CHAR *LPCH;

typedef struct _OSVERSIONINFOA _OSVERSIONINFOA, *P_OSVERSIONINFOA;

struct _OSVERSIONINFOA {
    DWORD dwOSVersionInfoSize;
    DWORD dwMajorVersion;
    DWORD dwMinorVersion;
    DWORD dwBuildNumber;
    DWORD dwPlatformId;
    CHAR szCSDVersion[128];
};

typedef struct _OSVERSIONINFOA *LPOSVERSIONINFOA;

typedef WCHAR *LPWSTR;

typedef WCHAR *PCNZWCH;

typedef WCHAR *LPWCH;

typedef DWORD ACCESS_MASK;

typedef WCHAR *LPCWSTR;

typedef short SHORT;

typedef DWORD LCID;

typedef CHAR *PCNZCH;

typedef struct IMAGE_DOS_HEADER IMAGE_DOS_HEADER, *PIMAGE_DOS_HEADER;

struct IMAGE_DOS_HEADER {
    char e_magic[2]; // Magic number
    word e_cblp; // Bytes of last page
    word e_cp; // Pages in file
    word e_crlc; // Relocations
    word e_cparhdr; // Size of header in paragraphs
    word e_minalloc; // Minimum extra paragraphs needed
    word e_maxalloc; // Maximum extra paragraphs needed
    word e_ss; // Initial (relative) SS value
    word e_sp; // Initial SP value
    word e_csum; // Checksum
    word e_ip; // Initial IP value
    word e_cs; // Initial (relative) CS value
    word e_lfarlc; // File address of relocation table
    word e_ovno; // Overlay number
    word e_res[4][4]; // Reserved words
    word e_oemid; // OEM identifier (for e_oeminfo)
    word e_oeminfo; // OEM information; e_oemid specific
    word e_res2[10][10]; // Reserved words
    dword e_lfanew; // File address of new exe header
    byte e_program[64]; // Actual DOS program
};

typedef struct tm tm, *Ptm;

struct tm {
    int tm_sec;
    int tm_min;
    int tm_hour;
    int tm_mday;
    int tm_mon;
    int tm_year;
    int tm_wday;
    int tm_yday;
    int tm_isdst;
};

typedef ULONG_PTR SIZE_T;

typedef uint *PUINT_PTR;

#define WINVER 2304

#define _M_IX86 300

#define _MSC_VER 1200

#define _INTEGRAL_MAX_BITS 32

typedef struct _IMAGELIST _IMAGELIST, *P_IMAGELIST;

typedef struct _IMAGELIST *HIMAGELIST;

struct _IMAGELIST {
};

typedef struct tagPOINT *LPPOINT;

typedef struct HBITMAP__ HBITMAP__, *PHBITMAP__;

struct HBITMAP__ {
    int unused;
};

typedef struct HKEY__ HKEY__, *PHKEY__;

struct HKEY__ {
    int unused;
};

typedef DWORD *LPDWORD;

typedef struct HACCEL__ HACCEL__, *PHACCEL__;

struct HACCEL__ {
    int unused;
};

typedef struct HHOOK__ HHOOK__, *PHHOOK__;

struct HHOOK__ {
    int unused;
};

typedef struct HACCEL__ *HACCEL;

typedef struct tagSIZE tagSIZE, *PtagSIZE;

struct tagSIZE {
    LONG cx;
    LONG cy;
};

typedef struct HRSRC__ HRSRC__, *PHRSRC__;

struct HRSRC__ {
    int unused;
};

typedef HINSTANCE HMODULE;

typedef int INT;

typedef HANDLE HLOCAL;

typedef struct tagSIZE *LPSIZE;

typedef struct HMENU__ HMENU__, *PHMENU__;

typedef struct HMENU__ *HMENU;

struct HMENU__ {
    int unused;
};

typedef struct _FILETIME *LPFILETIME;

typedef int (*FARPROC)(void);

typedef HANDLE *LPHANDLE;

typedef WORD *LPWORD;

typedef struct HKEY__ *HKEY;

typedef HKEY *PHKEY;

typedef WORD ATOM;

typedef struct tagRECT *LPRECT;

typedef HANDLE HGLOBAL;

typedef BOOL *LPBOOL;

typedef void *HGDIOBJ;

typedef void *LPCVOID;

typedef struct HRSRC__ *HRSRC;

typedef struct HHOOK__ *HHOOK;

typedef DWORD COLORREF;

typedef struct HBITMAP__ *HBITMAP;

typedef struct IMAGE_OPTIONAL_HEADER32 IMAGE_OPTIONAL_HEADER32, *PIMAGE_OPTIONAL_HEADER32;

typedef struct IMAGE_DATA_DIRECTORY IMAGE_DATA_DIRECTORY, *PIMAGE_DATA_DIRECTORY;

struct IMAGE_DATA_DIRECTORY {
    ImageBaseOffset32 VirtualAddress;
    dword Size;
};

struct IMAGE_OPTIONAL_HEADER32 {
    word Magic;
    byte MajorLinkerVersion;
    byte MinorLinkerVersion;
    dword SizeOfCode;
    dword SizeOfInitializedData;
    dword SizeOfUninitializedData;
    ImageBaseOffset32 AddressOfEntryPoint;
    ImageBaseOffset32 BaseOfCode;
    ImageBaseOffset32 BaseOfData;
    pointer32 ImageBase;
    dword SectionAlignment;
    dword FileAlignment;
    word MajorOperatingSystemVersion;
    word MinorOperatingSystemVersion;
    word MajorImageVersion;
    word MinorImageVersion;
    word MajorSubsystemVersion;
    word MinorSubsystemVersion;
    dword Win32VersionValue;
    dword SizeOfImage;
    dword SizeOfHeaders;
    dword CheckSum;
    word Subsystem;
    word DllCharacteristics;
    dword SizeOfStackReserve;
    dword SizeOfStackCommit;
    dword SizeOfHeapReserve;
    dword SizeOfHeapCommit;
    dword LoaderFlags;
    dword NumberOfRvaAndSizes;
    struct IMAGE_DATA_DIRECTORY DataDirectory[16];
};

typedef struct Var Var, *PVar;

struct Var {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;

struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct {
    dword NameOffset:31;
    dword NameIsString:1;
};

typedef struct IMAGE_FILE_HEADER IMAGE_FILE_HEADER, *PIMAGE_FILE_HEADER;

struct IMAGE_FILE_HEADER {
    word Machine; // 332
    word NumberOfSections;
    dword TimeDateStamp;
    dword PointerToSymbolTable;
    dword NumberOfSymbols;
    word SizeOfOptionalHeader;
    word Characteristics;
};

typedef struct IMAGE_NT_HEADERS32 IMAGE_NT_HEADERS32, *PIMAGE_NT_HEADERS32;

struct IMAGE_NT_HEADERS32 {
    char Signature[4];
    struct IMAGE_FILE_HEADER FileHeader;
    struct IMAGE_OPTIONAL_HEADER32 OptionalHeader;
};

typedef struct StringFileInfo StringFileInfo, *PStringFileInfo;

struct StringFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY_ENTRY IMAGE_RESOURCE_DIRECTORY_ENTRY, *PIMAGE_RESOURCE_DIRECTORY_ENTRY;

typedef union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion, *PIMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion;

union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion {
    struct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct IMAGE_RESOURCE_DIRECTORY_ENTRY_NameStruct;
    dword Name;
    word Id;
};

struct IMAGE_RESOURCE_DIRECTORY_ENTRY {
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_NameUnion NameUnion;
    union IMAGE_RESOURCE_DIRECTORY_ENTRY_DirectoryUnion DirectoryUnion;
};

typedef struct StringTable StringTable, *PStringTable;

struct StringTable {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_SECTION_HEADER IMAGE_SECTION_HEADER, *PIMAGE_SECTION_HEADER;

typedef union Misc Misc, *PMisc;

union Misc {
    dword PhysicalAddress;
    dword VirtualSize;
};

struct IMAGE_SECTION_HEADER {
    char Name[8];
    union Misc Misc;
    ImageBaseOffset32 VirtualAddress;
    dword SizeOfRawData;
    dword PointerToRawData;
    dword PointerToRelocations;
    dword PointerToLinenumbers;
    word NumberOfRelocations;
    word NumberOfLinenumbers;
    enum SectionFlags Characteristics;
};

typedef struct IMAGE_RESOURCE_DATA_ENTRY IMAGE_RESOURCE_DATA_ENTRY, *PIMAGE_RESOURCE_DATA_ENTRY;

struct IMAGE_RESOURCE_DATA_ENTRY {
    dword OffsetToData;
    dword Size;
    dword CodePage;
    dword Reserved;
};

typedef struct VarFileInfo VarFileInfo, *PVarFileInfo;

struct VarFileInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef struct IMAGE_RESOURCE_DIRECTORY IMAGE_RESOURCE_DIRECTORY, *PIMAGE_RESOURCE_DIRECTORY;

struct IMAGE_RESOURCE_DIRECTORY {
    dword Characteristics;
    dword TimeDateStamp;
    word MajorVersion;
    word MinorVersion;
    word NumberOfNamedEntries;
    word NumberOfIdEntries;
};

typedef struct StringInfo StringInfo, *PStringInfo;

struct StringInfo {
    word wLength;
    word wValueLength;
    word wType;
};

typedef LONG LSTATUS;

typedef ACCESS_MASK REGSAM;

typedef struct tagOFNA tagOFNA, *PtagOFNA;

typedef struct tagOFNA *LPOPENFILENAMEA;

typedef UINT_PTR (*LPOFNHOOKPROC)(HWND, UINT, WPARAM, LPARAM);

struct tagOFNA {
    DWORD lStructSize;
    HWND hwndOwner;
    HINSTANCE hInstance;
    LPCSTR lpstrFilter;
    LPSTR lpstrCustomFilter;
    DWORD nMaxCustFilter;
    DWORD nFilterIndex;
    LPSTR lpstrFile;
    DWORD nMaxFile;
    LPSTR lpstrFileTitle;
    DWORD nMaxFileTitle;
    LPCSTR lpstrInitialDir;
    LPCSTR lpstrTitle;
    DWORD Flags;
    WORD nFileOffset;
    WORD nFileExtension;
    LPCSTR lpstrDefExt;
    LPARAM lCustData;
    LPOFNHOOKPROC lpfnHook;
    LPCSTR lpTemplateName;
    void *pvReserved;
    DWORD dwReserved;
    DWORD FlagsEx;
};

typedef struct CWinThread CWinThread, *PCWinThread;

struct CWinThread { // PlaceHolder Structure
};

typedef struct AFX_MSGMAP_ENTRY AFX_MSGMAP_ENTRY, *PAFX_MSGMAP_ENTRY;

struct AFX_MSGMAP_ENTRY { // PlaceHolder Structure
};

typedef struct AFX_MODULE_THREAD_STATE AFX_MODULE_THREAD_STATE, *PAFX_MODULE_THREAD_STATE;

struct AFX_MODULE_THREAD_STATE { // PlaceHolder Structure
};

typedef struct CView CView, *PCView;

struct CView { // PlaceHolder Structure
};

typedef struct CHandleMap CHandleMap, *PCHandleMap;

struct CHandleMap { // PlaceHolder Structure
};

typedef struct CException CException, *PCException;

struct CException { // PlaceHolder Structure
};

typedef struct CScrollView CScrollView, *PCScrollView;

struct CScrollView { // PlaceHolder Structure
};

typedef struct CTypeLibCache CTypeLibCache, *PCTypeLibCache;

struct CTypeLibCache { // PlaceHolder Structure
};

typedef struct __POSITION __POSITION, *P__POSITION;

struct __POSITION { // PlaceHolder Structure
};

typedef struct CProcessLocalObject CProcessLocalObject, *PCProcessLocalObject;

struct CProcessLocalObject { // PlaceHolder Structure
};

typedef struct CPoint CPoint, *PCPoint;

struct CPoint { // PlaceHolder Structure
};

typedef struct CDocument CDocument, *PCDocument;

struct CDocument { // PlaceHolder Structure
};

typedef struct HDROP__ HDROP__, *PHDROP__;

struct HDROP__ {
    int unused;
};

typedef struct HDROP__ *HDROP;

typedef uint size_t;

typedef struct _PRINTER_DEFAULTSA _PRINTER_DEFAULTSA, *P_PRINTER_DEFAULTSA;

struct _PRINTER_DEFAULTSA {
    LPSTR pDatatype;
    LPDEVMODEA pDevMode;
    ACCESS_MASK DesiredAccess;
};

typedef struct _PRINTER_DEFAULTSA *LPPRINTER_DEFAULTSA;

uint *PTR_LAB_0041e4f8;
int *DAT_00428dd4;
int *DAT_00428dd0;
uint *PTR_LAB_0041e92c;
void *ExceptionList;
uint DAT_00428d08;
uint LAB_0041cfb8;
uint DAT_004250a0;
uint LAB_0041cfee;
uint *PTR_LAB_0041ee34;
uint LAB_0041d029;
uint *PTR_LAB_0041e778;
uint LAB_0041d0a3;
string s_%s%02d.dat_00425114;
uint DAT_00425120;
uint DAT_00425124;
uint LAB_0041d0c0;
uint LAB_0041d120;
uint LAB_0041d140;
uint LAB_0041d158;
uint LAB_0041d1d1;
uint DAT_00425140;
uint DAT_00425160;
uint DAT_0042518c;
uint DAT_00425194;
uint DAT_004251b0;
uint DAT_004251cc;
uint DAT_00425208;
uint DAT_00425220;
uint LAB_0041d258;
pointer PTR_LAB_0041e924;
uint *PTR_LAB_0041e9d4;
uint *PTR_LAB_0041ed0c;
uint *PTR_LAB_0041f474;
uint *PTR_LAB_0041f774;
uint *PTR_LAB_0041f794;
uint *PTR_LAB_0041f75c;
uint *PTR_LAB_0041fa9c;
uint *PTR_LAB_0041fabc;
uint *PTR_LAB_004205ec;
uint LAB_004183a7;
int *DAT_0042c38c;
int *DAT_0042c388;
uint FUN_00403290;
uint FUN_00403390;
uint LAB_004034c0;
uint32_t DAT_004257ac;
uint32_t DAT_004257a8;
uint32_t DAT_004257b0;
int DAT_004257b0;
uint DAT_0042ac70;
uint DAT_0042ac6c;
uint DAT_0042ac68;
uint DAT_0042ac64;
byte *DAT_0042c394;
LPSTR DAT_0042ac54;
uint LAB_00406f28;
uint DAT_00420890;
int DAT_0042ac5c;
uint *PTR___exit_004257b4;
pointer vftable;
uint *DAT_0042c390;
uint DAT_00425000;
uint DAT_0042506c;
uint DAT_00425070;
uint DAT_00425080;
int DAT_0042aca0;
uint DAT_0042ac9c;
uint8_t DAT_0042ac98;
uint32_t *DAT_0042c38c;
int DAT_0042c388;
uint DAT_00425084;
uint DAT_0042508c;
uint DAT_00425090;
uint DAT_00425098;
HANDLE DAT_0042c26c;
int DAT_0042b084;
uint DAT_00427d3c;
int DAT_0042aeb0;
uint32_t DAT_0042aca8;
uint32_t DAT_004208a8;
UINT DAT_0042aeb0;
LCID DAT_0042aeb4;
int DAT_00427f54;
uint *PTR_DAT_00427d48;
uint32_t DAT_0042aeb4;
uint DAT_0042c384;
uint DAT_0042aeb8;
uint DAT_0042aebc;
uint DAT_0042aec0;
int DAT_0042aec4;
uint8_t DAT_004257f0;
uint32_t DAT_004257f8;
uint32_t DAT_004258e8;
uint DAT_0042aec4;
int DAT_0042b0b8;
uint32_t DAT_0042aeb0;
uint8_t DAT_0042adb0;
uint *PTR_DAT_00425a50;
int DAT_00427f60;
int DAT_00427f68;
uint32_t DAT_00428050;
uint DAT_00428018;
uint DAT_0042aee0;
int DAT_00427f64;
uint DAT_004209f0;
uint DAT_00420a00;
uint DAT_00420a18;
uint DAT_00420a28;
DWORD DAT_00425b10;
uint DAT_00425b18;
uint DAT_00420a38;
uint *PTR_FUN_00425b14;
uint DAT_00420a50;
uint DAT_00427d52;
char *DAT_0042ac54;
int *DAT_0042ac80;
uint DAT_0042ac90;
uint DAT_0042ac78;
uint DAT_0042ac74;
uint DAT_0042af10;
int DAT_0042b018;
uint32_t DAT_0042c280;
UINT DAT_0042c380;
uint32_t DAT_0042c284;
int DAT_004257b8;
uint *DAT_0042b01c;
int DAT_0042c280;
uint32_t DAT_00425bc8;
uint DAT_00425c58;
uint *PTR_DAT_00425c9c;
uint *PTR_DAT_00425c8c;
uint *PTR_DAT_00425c7c;
uint *PTR_DAT_00425c5c;
int DAT_00425d28;
pointer PTR_LOOP_00425d18;
uint *PTR_LOOP_00425d1c;
uint *PTR_LOOP_00427d38;
uint32_t DAT_00425d28;
int DAT_0042b080;
uint *DAT_0042b088;
int DAT_0042b090;
UINT DAT_0042b0b8;
FARPROC DAT_0042b094;
uint DAT_00425ba0;
uint DAT_00428210;
uint DAT_00428230;
uint *PTR_DAT_00427d44;
uint *PTR_DAT_00427d40;
uint *PTR_FUN_00428470;
uint *PTR_FUN_0042847c;
uint *PTR_FUN_00428474;
uint DAT_00420d60;
int DAT_0042b098;
LCID DAT_0042b0a8;
LCID DAT_0042b09c;
int DAT_0042b178;
uint32_t DAT_0042b0c0;
uint32_t DAT_00428008;
uint32_t DAT_00427ff8;
uint32_t DAT_0042b0c8;
int DAT_0042b11c;
short DAT_0042b10e;
short DAT_0042b162;
int DAT_0042b170;
uint *PTR_DAT_00427ff0;
uint *PTR_DAT_00427ff4;
byte *DAT_0042b174;
uint DAT_00420e18;
uint DAT_0042b0cc;
uint DAT_0042b120;
uint DAT_00427ff8;
uint DAT_00428008;
int DAT_0042b0c0;
short DAT_0042b160;
uint DAT_0042b16c;
uint DAT_0042b168;
uint DAT_0042b164;
ushort DAT_0042b162;
short DAT_0042b10c;
uint DAT_0042b118;
uint DAT_0042b114;
uint DAT_0042b110;
ushort DAT_0042b10e;
int DAT_00427ffc;
int DAT_0042800c;
int DAT_00428000;
int DAT_00428010;
uint DAT_00428014;
uint DAT_0042804c;
uint DAT_0042c268;
int DAT_0042c264;
int DAT_0042b0a8;
FARPROC DAT_0042b188;
FARPROC DAT_0042b18c;
FARPROC DAT_0042b190;
uint DAT_0042c380;
int DAT_0042b194;
int DAT_0042ac88;
ushort DAT_0042b1d6;
ushort DAT_0042b1d8;
ushort DAT_0042b1cc;
uint DAT_0042b220;
uint32_t DAT_0042b208;
int DAT_00425b90;
int DAT_00425b94;
uint32_t DAT_0042b204;
uint32_t DAT_0042b20c;
uint32_t DAT_0042b200;
int DAT_00425b9c;
int *DAT_0042ac88;
uint8_t DAT_0042b218;
int DAT_0042b228;
int *DAT_0042ac84;
uint32_t *DAT_0042ac88;
int DAT_0042b22c;
int DAT_0042b230;
ushort DAT_0042c3ce;
HANDLE DAT_0042ceb0;
uint32_t DAT_0042ce24;
ushort DAT_0042c3c8;
ushort DAT_0042c3d2;
ushort DAT_0042c3cc;
ushort DAT_0042c3d0;
ushort DAT_0042c3ca;
char DAT_0042cec5;
uint DAT_00428c50;
uint32_t DAT_0042b23c;
uint32_t DAT_0042b234;
HINSTANCE DAT_0042c3dc;
HHOOK DAT_0042b238;
uint LAB_0040cdf0;
ushort DAT_0042c3d4;
uint32_t DAT_0042c404;
uint32_t DAT_0042c410;
uint8_t DAT_0042c3e4;
char DAT_0042cec4;
int DAT_0042c3c4;
uint32_t DAT_0042c3c0;
uint DAT_0042c3a0;
int DAT_0042c41c;
uint32_t DAT_0042c420;
uint32_t DAT_0042c424;
uint32_t DAT_0042c428;
uint32_t DAT_0042c42c;
ushort DAT_0042c3e0;
int DAT_0042c3c0;
DWORD DAT_0042c414;
int DAT_0042c418;
uint DAT_0042c430;
uint FUN_0040e500;
uint32_t DAT_0042ce20;
uint FUN_0040e190;
COLORREF DAT_0042c3f0;
COLORREF DAT_0042c3e8;
uint32_t DAT_0042c408;
int DAT_0042ceb8;
HGDIOBJ DAT_0042c408;
uint DAT_0042ceb4;
int DAT_0042cebc;
uint8_t DAT_0042cec4;
string s_hangeul_00428c58;
string s_kanji_00428c60;
string s_english_00428c68;
string s_roman_00428c70;
string s_hangeulmenu_00428c78;
string s_kanjimenu_00428c84;
string s_windows_00428c90;
uint DAT_0042c3c0;
ATOM DAT_0042c3c8;
ATOM DAT_0042c3ce;
ATOM DAT_0042c3cc;
ATOM DAT_0042c3ca;
ATOM DAT_0042c3d2;
ATOM DAT_0042c3d0;
ATOM DAT_0042c3d4;
uint8_t DAT_0042cec5;
WNDPROC DAT_0042ceb0;
uint *PTR_DefDlgProcA_0041e490;
pointer PTR_FUN_00421534;
pointer PTR_DAT_004215f4;
string s_C3dHNew_00428c98;
string s_C3dLNew_00428ca0;
string s_C3dNew_00428ca8;
uint DAT_00428cb0;
uint DAT_00428cb8;
uint DAT_00428cc0;
uint DAT_00428cc4;
uint *PTR_GlobalDeleteAtom_0041e254;
uint32_t DAT_0042ceb0;
short DAT_0042c3e0;
HMODULE DAT_0042c3d8;
HBITMAP DAT_0042c410;
int DAT_0042c404;
uint32_t DAT_0042c40c;
undefined2 DAT_004215e0;
string s_#32770_00428ccc;
short DAT_0042c3e2;
pointer PTR_FUN_00421538;
undefined2 DAT_0042153c;
uint UNK_004215fb;
HGDIOBJ DAT_0042c40c;
COLORREF DAT_0042c3fc;
HGDIOBJ DAT_0042c404;
uint DAT_00428cd4;
HGDIOBJ DAT_0042c410;
uint32_t DAT_0042c3dc;
uint32_t DAT_0042c3d8;
undefined2 DAT_0042c3e2;
uint DAT_0042cec0;
string s_DisableThreadLibraryCalls_00428cd8;
string s_KERNEL32.DLL_00428cf4;
uint DAT_0042b240;
uint DAT_00423118;
uint DAT_0042a860;
uint DAT_0042ac2c;
uint DAT_0042ac1c;
uint DAT_0042ac28;
int DAT_0042abf4;
uint DAT_0042ac24;
uint DAT_0042ac20;
uint LAB_0041ba0f;
uint DAT_00428ddc;
uint *PTR_LAB_0041fb44;
uint *PTR_LAB_0041fb04;
uint LAB_00411cef;
uint LAB_0041ba43;
uint LAB_0041ba58;
uint DAT_0042ac08;
uint LAB_0041b94a;
uint DAT_0042abec;
uint *PTR_LAB_0041ebb4;
uint *PTR_FUN_0041ec14;
HBITMAP DAT_0042abe8;
pointer PTR_DAT_004253b4;
uint *PTR_DAT_004253b0;
uint DAT_00428dd8;
uint *PTR_LAB_0041ecac;
uint DAT_0041ef0c;
uint FUN_00413151;
uint DAT_004134a6;
uint DAT_004136f7;
uint DAT_0042a5f0;
uint DAT_0042a6b0;
uint DAT_0042a630;
uint DAT_0042a670;
uint *PTR_LAB_0041f284;
uint DAT_00413f4d;
uint FUN_00414196;
uint FUN_004141cb;
int DAT_0042ac04;
uint FUN_004143f1;
uint DAT_0041f344;
uint FUN_0041446d;
uint *PTR_DefWindowProcA_0041e338;
uint DAT_00428df0;
uint DAT_00428df4;
uint DAT_00428df8;
uint *PTR_LAB_0041f36c;
uint DAT_00416408;
uint32_t DAT_0042abd8;
uint *PTR_LAB_0041fa7c;
uint DAT_0041726a;
uint DAT_004232b8;
uint *PTR_LAB_0041f65c;
uint *PTR_LAB_0041f6dc;
uint DAT_00422f78;
uint DAT_0042a788;
int DAT_0042ac0c;
short DAT_0042ac18;
UINT DAT_0042ac14;
uint32_t DAT_0042ac10;
int DAT_0042ab98;
int DAT_0042ab9c;
HCURSOR DAT_0042abd4;
uint *PTR_LAB_004201ec;
HCURSOR DAT_0042abdc;
uint DAT_0042ac38;
pointer PTR_FUN_0041e91c;
uint *PTR_LAB_0041ea14;
uint8_t DAT_0041eb80;
pointer PTR_FUN_0041ec2c;
pointer PTR_FUN_0041ec34;
void *DAT_0042a820;
uint LAB_004124b3;
uint *PTR_FUN_0041ec3c;
uint LAB_0040d5b0;
uint FUN_0040d390;
uint LAB_0040d6f0;
uint LAB_0040d8b0;
uint LAB_0040d9b0;
uint FUN_0040d260;
uint FUN_0040d2d0;
uint FUN_0040d510;
uint FUN_0040dc90;
uint DAT_0042a6f0;
pointer PTR_FUN_0041f9b4;
DWORD *DAT_0042a820;
uint DAT_0042a828;
uint DAT_0041c724;
uint DAT_0042a8f8;
int DAT_0042a990;
int DAT_0042ab30;
uint DAT_0042ab38;
uint DAT_0042a998;
uint DAT_0042ab50;
uint DAT_0042ac00;
pointer PTR_FUN_0041ea9c;
pointer PTR_FUN_0041eaa4;

uint32_t * __fastcall FUN_00401010(uint32_t *param_1)

{
  FUN_0041b632();
  *param_1 = &PTR_LAB_0041e4f8;
  return param_1;
}



uint * __thiscall FUN_00401030(void *this,byte param_1)

{
  thunk_FUN_0041b77c();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void thunk_FUN_0041b77c(void)

{
  int *piVar1;
  int iVar2;
  CWinThread *this;
  int unaff_EBP;
  
  FUN_004037f0();
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  *(uint ***)this = &PTR_LAB_0041e92c;
  piVar1 = *(int **)(this + 0x80);
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(1);
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 0x14))(1);
  }
  iVar2 = FUN_0041bf1f();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    if (DAT_00428dd4 != (int *)0x0) {
      (**(code **)(*DAT_00428dd4 + 4))(1);
      DAT_00428dd4 = (int *)0x0;
    }
    if (DAT_00428dd0 != (int *)0x0) {
      (**(code **)(*DAT_00428dd0 + 4))(1);
      DAT_00428dd0 = (int *)0x0;
    }
  }
  if (*(HGLOBAL *)(this + 0x94) != (HGLOBAL)0x0) {
    FUN_00418371(*(HGLOBAL *)(this + 0x94));
  }
  if (*(HGLOBAL *)(this + 0x98) != (HGLOBAL)0x0) {
    FUN_00418371(*(HGLOBAL *)(this + 0x98));
  }
  if (*(ATOM *)(this + 0xb0) != 0) {
    GlobalDeleteAtom(*(ATOM *)(this + 0xb0));
  }
  if (*(ATOM *)(this + 0xb2) != 0) {
    GlobalDeleteAtom(*(ATOM *)(this + 0xb2));
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))(1);
  }
  iVar2 = FUN_0041bf1f();
  if (*(int *)(iVar2 + 0x10) == *(int *)(this + 0x78)) {
    *(uint32_t *)(iVar2 + 0x10) = 0;
  }
  if (*(CWinThread **)(iVar2 + 4) == this) {
    *(uint32_t *)(iVar2 + 4) = 0;
  }
  FUN_004039d0(*(uint **)(this + 0x78));
  FUN_004039d0(*(uint **)(this + 0x7c));
  FUN_004039d0(*(uint **)(this + 0x88));
  FUN_004039d0(*(uint **)(this + 0x8c));
  FUN_004039d0(*(uint **)(this + 0x90));
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  CWinThread::~CWinThread(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



void FUN_00401070(void)

{
  FUN_00401010((uint32_t *)&DAT_00428d08);
  return;
}



void FUN_00401080(void)

{
  FUN_004030e0(0x401090);
  return;
}



void * FUN_004010a0(void *param_1)

{
  int iVar1;
  CHAR local_104 [260];
  
  iVar1 = FUN_0041bf1f();
  GetModuleFileNameA(*(HMODULE *)(iVar1 + 8),local_104,0x104);
  iVar1 = lstrlenA(local_104);
  do {
    if (iVar1 < 1) {
LAB_004010eb:
      FUN_004126d5(param_1,local_104);
      return param_1;
    }
    if (local_104[iVar1] == '\\') {
      local_104[iVar1] = '\0';
      goto LAB_004010eb;
    }
    iVar1 = iVar1 + -1;
  } while( true );
}



uint32_t __fastcall FUN_00401110(int param_1)

{
  bool bVar1;
  uint32_t *puVar2;
  int iVar3;
  int local_1bc;
  int local_1b8;
  int local_1b4 [5];
  CDialog local_1a0 [92];
  int local_144 [5];
  int iStack_130;
  int aiStack_12c [2];
  int local_124 [70];
  void *local_c;
  uint8_t *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0041cfb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041bfff();
  FUN_004010a0(&local_1bc);
  local_4 = 0;
  FUN_00412aa6();
  local_4._0_1_ = 1;
  puVar2 = (uint32_t *)FUN_0041287b();
  local_4._0_1_ = 2;
  iVar3 = FUN_00413bda((LPCSTR)*puVar2,local_124);
  if (iVar3 != 0) {
    puVar2 = (uint32_t *)FUN_0041287b();
    local_4._0_1_ = 3;
    iVar3 = FUN_00413bda((LPCSTR)*puVar2,local_124);
    local_4._0_1_ = 2;
    FUN_00412667(local_1b4);
    bVar1 = false;
    if (iVar3 != 0) goto LAB_004011d6;
  }
  bVar1 = true;
LAB_004011d6:
  local_4._0_1_ = 1;
  FUN_00412667(&local_1b8);
  if (bVar1) {
    FUN_0041900f(&DAT_004250a0,0,0);
  }
  else {
    FUN_004013b0(local_1a0,0);
    local_4._0_1_ = 4;
    FUN_00412760(local_144,&local_1bc);
    *(CDialog **)(param_1 + 0x1c) = local_1a0;
    FUN_004135e2();
    local_4._0_1_ = 7;
    FUN_00412667(aiStack_12c);
    local_4._0_1_ = 6;
    FUN_00412667(&iStack_130);
    local_4._0_1_ = 5;
    FUN_00412667(local_144);
    local_4._0_1_ = 1;
    CDialog::~CDialog(local_1a0);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00412b46();
  local_4 = 0xffffffff;
  FUN_00412667(&local_1bc);
  ExceptionList = local_c;
  return 0;
}



void __fastcall FUN_004012c0(CDialog *param_1)

{
  void *local_c;
  uint8_t *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0041cfee;
  local_c = ExceptionList;
  local_4 = 2;
  ExceptionList = &local_c;
  FUN_00412667((int *)(param_1 + 0x74));
  local_4._0_1_ = 1;
  FUN_00412667((int *)(param_1 + 0x70));
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00412667((int *)(param_1 + 0x5c));
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}



CDialog * __thiscall FUN_00401370(void *this,byte param_1)

{
  CDialog::~CDialog(this);
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void __thiscall CDialog::~CDialog(CDialog *this)

{
  CWnd *this_00;
  int unaff_EBP;
  
  FUN_004037f0();
  *(CWnd **)(unaff_EBP + -0x10) = this_00;
  *(uint ***)this_00 = &PTR_LAB_0041ee34;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (*(int *)(this_00 + 0x1c) != 0) {
    FUN_004149e5((int)this_00);
  }
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this_00);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



uint32_t * __thiscall FUN_004013b0(void *this,uint32_t param_1)

{
  int iVar1;
  HICON pHVar2;
  void *local_c;
  uint8_t *puStack_8;
  uint32_t local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0041d029;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00413534(this,0x66,param_1);
  local_4 = 0;
  FUN_0041251c((uint32_t *)((int)this + 0x5c));
  local_4._0_1_ = 1;
  FUN_0041251c((uint32_t *)((int)this + 0x70));
  local_4._0_1_ = 2;
  FUN_0041251c((uint32_t *)((int)this + 0x74));
  local_4 = CONCAT31(local_4._1_3_,3);
  *(uint ***)this = &PTR_LAB_0041e778;
  FUN_0041bf1f();
  iVar1 = FUN_0041bf1f();
  pHVar2 = LoadIconA(*(HINSTANCE *)(iVar1 + 0xc),(LPCSTR)0x80);
  *(HICON *)((int)this + 0x78) = pHVar2;
  ExceptionList = local_c;
  return this;
}



CDialog * __thiscall FUN_00401440(void *this,byte param_1)

{
  FUN_004012c0(this);
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void __thiscall FUN_00401480(void *this,int param_1,int param_2)

{
  int *piVar1;
  void *this_00;
  LRESULT LVar2;
  uint32_t *puVar3;
  int iVar4;
  int iVar5;
  HWND pHVar6;
  LPCSTR pCVar7;
  LPARAM local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  int local_138 [5];
  int local_124 [70];
  void *local_c;
  uint8_t *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0041d0a3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041251c(&local_144);
  iVar5 = 0;
  local_4 = 0;
  FUN_0041251c(&local_148);
  local_4._0_1_ = 1;
  if (param_1 == 0) {
    piVar1 = (int *)FUN_0041287b();
    local_4._0_1_ = 3;
    FUN_00412760(&local_144,piVar1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00412667(&local_14c);
    pCVar7 = &DAT_00425120;
  }
  else {
    piVar1 = (int *)FUN_0041287b();
    local_4._0_1_ = 2;
    FUN_00412760(&local_144,piVar1);
    local_4 = CONCAT31(local_4._1_3_,1);
    FUN_00412667(&local_14c);
    pCVar7 = &DAT_00425124;
  }
  FUN_004127af(&local_148,pCVar7);
  this_00 = (void *)FUN_00416a40(this,0x3ef);
  FUN_0041251c(&local_140);
  local_4 = CONCAT31(local_4._1_3_,4);
  LVar2 = SendMessageA(*(HWND *)((int)this_00 + 0x1c),0x146,0,0);
  if (0 < LVar2) {
    FUN_00414b6a(this_00,&local_140);
  }
  SendMessageA(*(HWND *)((int)this_00 + 0x1c),0x14b,0,0);
  do {
    FUN_0041251c(&local_14c);
    iVar5 = iVar5 + 1;
    local_4._0_1_ = 5;
    FUN_004108db(&local_14c,(byte *)s__s_02d_dat_00425114);
    FUN_00412aa6();
    local_4._0_1_ = 6;
    FUN_0041287b();
    local_4._0_1_ = 7;
    puVar3 = (uint32_t *)FUN_00412815();
    local_4._0_1_ = 8;
    iVar4 = FUN_00413bda((LPCSTR)*puVar3,local_124);
    local_4._0_1_ = 7;
    FUN_00412667(local_138);
    local_4 = CONCAT31(local_4._1_3_,6);
    FUN_00412667(&local_13c);
    if (iVar4 == 0) {
      if (param_2 == 0) {
        pHVar6 = *(HWND *)((int)this_00 + 0x1c);
        goto LAB_00401674;
      }
    }
    else if (param_2 != 0) {
      pHVar6 = *(HWND *)((int)this_00 + 0x1c);
LAB_00401674:
      SendMessageA(pHVar6,0x143,0,local_14c);
    }
    local_4._0_1_ = 5;
    FUN_00412b46();
    local_4 = CONCAT31(local_4._1_3_,4);
    FUN_00412667(&local_14c);
  } while (iVar5 < 0x19);
  LVar2 = SendMessageA(*(HWND *)((int)this_00 + 0x1c),0x146,0,0);
  if (LVar2 < 1) {
    FUN_00416bbd(this_00,0);
    SendMessageA(*(HWND *)((int)this_00 + 0x1c),0x143,0,0x425108);
    pHVar6 = *(HWND *)((int)this_00 + 0x1c);
  }
  else {
    FUN_00416bbd(this_00,1);
    if (*(int *)(local_140 + -8) != 0) {
      SendMessageA(*(HWND *)((int)this_00 + 0x1c),0x14d,0xffffffff,local_140);
    }
    LVar2 = SendMessageA(*(HWND *)((int)this_00 + 0x1c),0x147,0,0);
    if (-1 < LVar2) goto LAB_00401722;
    pHVar6 = *(HWND *)((int)this_00 + 0x1c);
  }
  SendMessageA(pHVar6,0x14e,0,0);
LAB_00401722:
  local_4._0_1_ = 1;
  FUN_00412667(&local_140);
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00412667(&local_148);
  local_4 = 0xffffffff;
  FUN_00412667(&local_144);
  ExceptionList = local_c;
  return;
}



void __thiscall FUN_00401780(void *this,uint32_t param_1)

{
  void *pvVar1;
  int iVar2;
  LPCSTR pCVar3;
  BOOL BVar4;
  UINT UVar5;
  LPCSTR local_14;
  LPCSTR local_10;
  void *local_c;
  uint8_t *puStack_8;
  uint local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0041d0c0;
  local_c = ExceptionList;
  iVar2 = 0;
  ExceptionList = &local_c;
  pvVar1 = (void *)FUN_00416a40(this,0x3e9);
  FUN_00416b7b(pvVar1,iVar2);
  iVar2 = 0;
  pvVar1 = (void *)FUN_00416a40(this,0x3ea);
  FUN_00416b7b(pvVar1,iVar2);
  iVar2 = 0;
  pvVar1 = (void *)FUN_00416a40(this,0x3eb);
  FUN_00416b7b(pvVar1,iVar2);
  iVar2 = 0;
  pvVar1 = (void *)FUN_00416a40(this,0x3ec);
  FUN_00416b7b(pvVar1,iVar2);
  iVar2 = 0;
  pvVar1 = (void *)FUN_00416a40(this,0x3ee);
  FUN_00416b7b(pvVar1,iVar2);
  iVar2 = 0;
  pvVar1 = (void *)FUN_00416a40(this,0x3ed);
  FUN_00416b7b(pvVar1,iVar2);
  iVar2 = 0;
  pvVar1 = (void *)FUN_00416a40(this,0x3ef);
  FUN_00416b7b(pvVar1,iVar2);
  FUN_0041251c(&local_10);
  local_4 = 0;
  FUN_0041251c(&local_14);
  local_4 = CONCAT31(local_4._1_3_,1);
  FUN_00416c7a(0xca);
  pCVar3 = local_14;
  pvVar1 = (void *)FUN_00416a40(this,0x3f1);
  FUN_00416b05(pvVar1,pCVar3);
  FUN_00416c7a(0xcb);
  pCVar3 = local_14;
  pvVar1 = (void *)FUN_00416a40(this,0x3f0);
  FUN_00416b05(pvVar1,pCVar3);
  switch(param_1) {
  case 0:
    FUN_00416c7a(0x66);
    FUN_00416c7a(200);
    pCVar3 = local_14;
    pvVar1 = (void *)FUN_00416a40(this,0x3eb);
    FUN_00416b05(pvVar1,pCVar3);
    FUN_00416c7a(0xc9);
    pvVar1 = (void *)FUN_00416a40(this,0x3ec);
    FUN_00416b05(pvVar1,local_14);
    iVar2 = 5;
    pvVar1 = (void *)FUN_00416a40(this,0x3eb);
    FUN_00416b7b(pvVar1,iVar2);
    iVar2 = 5;
    pvVar1 = (void *)FUN_00416a40(this,0x3ec);
    FUN_00416b7b(pvVar1,iVar2);
    BVar4 = 0;
    pvVar1 = (void *)FUN_00416a40(this,0x3f1);
    FUN_00416bbd(pvVar1,BVar4);
    BVar4 = 1;
    pvVar1 = (void *)FUN_00416a40(this,0x3f0);
    FUN_00416bbd(pvVar1,BVar4);
    if (*(int *)((int)this + 100) == 0) {
      iVar2 = FUN_00416a40(this,0x3ec);
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,0,0);
      iVar2 = FUN_00416a40(this,0x3eb);
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,1,0);
    }
    else {
      iVar2 = FUN_00416a40(this,0x3eb);
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,0,0);
      iVar2 = FUN_00416a40(this,0x3ec);
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,1,0);
    }
    goto switchD_004018a5_default;
  case 1:
    BVar4 = 1;
    pvVar1 = (void *)FUN_00416a40(this,0x3f1);
    FUN_00416bbd(pvVar1,BVar4);
    BVar4 = 1;
    pvVar1 = (void *)FUN_00416a40(this,0x3f0);
    FUN_00416bbd(pvVar1,BVar4);
    if (*(int *)((int)this + 100) != 0) {
      FUN_00416c7a(0x68);
      FUN_00416c7a(0xcc);
      pCVar3 = local_14;
      pvVar1 = (void *)FUN_00416a40(this,0x3ee);
      FUN_00416b05(pvVar1,pCVar3);
      FUN_00416c7a(0xcd);
      pvVar1 = (void *)FUN_00416a40(this,0x3ed);
      FUN_00416b05(pvVar1,local_14);
      iVar2 = 5;
      pvVar1 = (void *)FUN_00416a40(this,0x3ee);
      FUN_00416b7b(pvVar1,iVar2);
      iVar2 = 5;
      pvVar1 = (void *)FUN_00416a40(this,0x3ed);
      FUN_00416b7b(pvVar1,iVar2);
      iVar2 = 5;
      pvVar1 = (void *)FUN_00416a40(this,0x3ef);
      FUN_00416b7b(pvVar1,iVar2);
      if (*(int *)((int)this + 0x68) == 0) {
        iVar2 = FUN_00416a40(this,0x3ed);
        SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,0,0);
        iVar2 = FUN_00416a40(this,0x3ee);
        SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,1,0);
        FUN_00401480(this,*(int *)((int)this + 0x68),1);
      }
      else {
        iVar2 = FUN_00416a40(this,0x3ee);
        SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,0,0);
        iVar2 = FUN_00416a40(this,0x3ed);
        SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,1,0);
        FUN_00401480(this,*(int *)((int)this + 0x68),1);
      }
      goto switchD_004018a5_default;
    }
    UVar5 = 0x67;
    break;
  case 2:
    FUN_00416c7a(0xd0);
    pCVar3 = local_14;
    pvVar1 = (void *)FUN_00416a40(this,0x3f0);
    FUN_00416b05(pvVar1,pCVar3);
    if (*(int *)((int)this + 100) == 0) {
      FUN_00416c7a(0x69);
      FUN_00416c7a(0xce);
      pCVar3 = local_14;
      pvVar1 = (void *)FUN_00416a40(this,0x3ee);
      FUN_00416b05(pvVar1,pCVar3);
      FUN_00416c7a(0xcf);
      pvVar1 = (void *)FUN_00416a40(this,0x3ed);
      FUN_00416b05(pvVar1,local_14);
      iVar2 = 5;
      pvVar1 = (void *)FUN_00416a40(this,0x3ee);
      FUN_00416b7b(pvVar1,iVar2);
      iVar2 = 5;
      pvVar1 = (void *)FUN_00416a40(this,0x3ed);
      FUN_00416b7b(pvVar1,iVar2);
      iVar2 = 5;
      pvVar1 = (void *)FUN_00416a40(this,0x3ef);
      FUN_00416b7b(pvVar1,iVar2);
      if (*(int *)((int)this + 0x6c) == 0) {
        iVar2 = FUN_00416a40(this,0x3ed);
        SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,0,0);
        iVar2 = FUN_00416a40(this,0x3ee);
        SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,1,0);
        FUN_00401480(this,*(int *)((int)this + 0x68),0);
      }
      else {
        iVar2 = FUN_00416a40(this,0x3ee);
        SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,0,0);
        iVar2 = FUN_00416a40(this,0x3ed);
        SendMessageA(*(HWND *)(iVar2 + 0x1c),0xf1,1,0);
        FUN_00401480(this,*(int *)((int)this + 0x68),1);
      }
      goto switchD_004018a5_default;
    }
    UVar5 = 0x6a;
    break;
  case 3:
    FUN_00416c7a(0x6b);
    FUN_00416c7a(0xd1);
    pCVar3 = local_14;
    pvVar1 = (void *)FUN_00416a40(this,0x3f1);
    FUN_00416b05(pvVar1,pCVar3);
    FUN_00416c7a(0xd2);
    iVar2 = 0x3f0;
    goto LAB_00401d59;
  default:
    goto switchD_004018a5_default;
  }
  FUN_00416c7a(UVar5);
  iVar2 = 5;
  pvVar1 = (void *)FUN_00416a40(this,0x3e9);
  FUN_00416b7b(pvVar1,iVar2);
  iVar2 = 5;
  pvVar1 = (void *)FUN_00416a40(this,0x3ea);
  FUN_00416b7b(pvVar1,iVar2);
  pCVar3 = local_10;
  pvVar1 = (void *)FUN_00416a40(this,1000);
  FUN_00416b05(pvVar1,pCVar3);
  local_14 = *(LPCSTR *)((int)this + 0x70);
  iVar2 = 0x3e9;
LAB_00401d59:
  pvVar1 = (void *)FUN_00416a40(this,iVar2);
  FUN_00416b05(pvVar1,local_14);
switchD_004018a5_default:
  pvVar1 = (void *)FUN_00416a40(this,1000);
  FUN_00416b05(pvVar1,local_10);
  local_4 = local_4 & 0xffffff00;
  FUN_00412667((int *)&local_14);
  local_4 = 0xffffffff;
  FUN_00412667((int *)&local_10);
  ExceptionList = local_c;
  return;
}



void __thiscall FUN_00401dd0(void *this,char *param_1)

{
  int iVar1;
  LRESULT LVar2;
  void *pvVar3;
  WPARAM WVar4;
  int *piVar5;
  void *this_00;
  int *piVar6;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  int local_10;
  void *local_c;
  uint8_t *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0041d120;
  local_c = ExceptionList;
  if (param_1 == (char *)0x0) {
    ExceptionList = &local_c;
    iVar1 = FUN_00416a40(this,0x3eb);
    LVar2 = SendMessageA(*(HWND *)(iVar1 + 0x1c),0xf0,0,0);
    *(uint *)((int)this + 100) = (uint)(LVar2 != 1);
    ExceptionList = local_c;
    return;
  }
  if (param_1 != (char *)0x1) {
    if (param_1 != (char *)0x2) {
      return;
    }
    if (*(int *)((int)this + 100) != 0) goto LAB_00402096;
    ExceptionList = &local_c;
    iVar1 = FUN_00416a40(this,0x3ee);
    LVar2 = SendMessageA(*(HWND *)(iVar1 + 0x1c),0xf0,0,0);
    piVar6 = (int *)((int)this + 0x74);
    *(uint *)((int)this + 0x6c) = (uint)(LVar2 != 1);
    FUN_004125f2(piVar6);
    pvVar3 = (void *)FUN_00416a40(this,0x3ef);
    WVar4 = SendMessageA(*(HWND *)((int)pvVar3 + 0x1c),0x147,0,0);
    if ((int)WVar4 < 0) {
      ExceptionList = local_c;
      return;
    }
    FUN_0041251c(&param_1);
    local_4 = 5;
    FUN_00419454(pvVar3,WVar4,&param_1);
    if (*param_1 == 'V') {
      FUN_0041287b();
      local_4._0_1_ = 6;
      piVar5 = (int *)FUN_00412815();
      local_4._0_1_ = 7;
      FUN_00412760(piVar6,piVar5);
      local_4._0_1_ = 6;
      FUN_00412667(&local_2c);
      piVar6 = &local_28;
    }
    else {
      if (*param_1 != 'S') goto LAB_00401f3a;
      FUN_0041287b();
      local_4._0_1_ = 8;
      piVar5 = (int *)FUN_00412815();
      local_4._0_1_ = 9;
      FUN_00412760(piVar6,piVar5);
      local_4._0_1_ = 8;
      FUN_00412667(&local_24);
      piVar6 = &local_20;
    }
    local_4 = CONCAT31(local_4._1_3_,5);
    FUN_00412667(piVar6);
LAB_00401f3a:
    local_4 = 0xffffffff;
    FUN_00412667((int *)&param_1);
    ExceptionList = local_c;
    return;
  }
  if (*(int *)((int)this + 100) == 0) {
LAB_00402096:
    pvVar3 = (void *)((int)this + 0x70);
    ExceptionList = &local_c;
    this_00 = (void *)FUN_00416a40(this,0x3e9);
    FUN_00414b6a(this_00,pvVar3);
    ExceptionList = local_c;
    return;
  }
  ExceptionList = &local_c;
  iVar1 = FUN_00416a40(this,0x3ee);
  LVar2 = SendMessageA(*(HWND *)(iVar1 + 0x1c),0xf0,0,0);
  piVar6 = (int *)((int)this + 0x74);
  *(uint *)((int)this + 0x68) = (uint)(LVar2 != 1);
  FUN_004125f2(piVar6);
  pvVar3 = (void *)FUN_00416a40(this,0x3ef);
  WVar4 = SendMessageA(*(HWND *)((int)pvVar3 + 0x1c),0x147,0,0);
  if ((int)WVar4 < 0) {
    ExceptionList = local_c;
    return;
  }
  FUN_0041251c(&param_1);
  local_4 = 0;
  FUN_00419454(pvVar3,WVar4,&param_1);
  if (*param_1 == 'V') {
    FUN_0041287b();
    local_4._0_1_ = 1;
    piVar5 = (int *)FUN_00412815();
    local_4._0_1_ = 2;
    FUN_00412760(piVar6,piVar5);
    local_4._0_1_ = 1;
    FUN_00412667(&local_1c);
    piVar6 = &local_18;
  }
  else {
    if (*param_1 != 'S') goto LAB_00402083;
    FUN_0041287b();
    local_4._0_1_ = 3;
    piVar5 = (int *)FUN_00412815();
    local_4._0_1_ = 4;
    FUN_00412760(piVar6,piVar5);
    local_4._0_1_ = 3;
    FUN_00412667(&local_14);
    piVar6 = &local_10;
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00412667(piVar6);
LAB_00402083:
  local_4 = 0xffffffff;
  FUN_00412667((int *)&param_1);
  ExceptionList = local_c;
  return;
}



uint32_t FUN_004020f0(LPCSTR param_1)

{
  LPCSTR pCVar1;
  DWORD DVar2;
  uint32_t uVar3;
  uint8_t local_60 [16];
  short local_50 [7];
  uint local_42;
  void *local_c;
  uint8_t *puStack_8;
  int local_4;
  
  puStack_8 = &LAB_0041d140;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00412aa6();
  local_4._0_1_ = 1;
  pCVar1 = FUN_00412c25(local_60,param_1,0,0);
  if (pCVar1 != (LPCSTR)0x0) {
    DVar2 = FUN_00412d4d(local_60,local_50,0x44);
    if (DVar2 != 0) {
      FUN_00412e4b((int)local_60);
      if (local_50[0] == 0x4353) {
        if ((local_42 & 0xff) == 0x83) {
          uVar3 = 1;
        }
        else if ((local_42 & 0xff) == 0x91) {
          uVar3 = 0;
        }
        else {
          uVar3 = 0xffffffff;
        }
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_00412b46();
        local_4 = 0xffffffff;
        FUN_00412667((int *)&param_1);
        ExceptionList = local_c;
        return uVar3;
      }
    }
  }
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00412b46();
  local_4 = 0xffffffff;
  FUN_00412667((int *)&param_1);
  ExceptionList = local_c;
  return 0xffffffff;
}



uint32_t __fastcall FUN_004021f0(LPCSTR param_1)

{
  int iVar1;
  LPCSTR local_10;
  void *local_c;
  uint8_t *puStack_8;
  uint32_t local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0041d158;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_10 = param_1;
  FUN_0041386a(param_1);
  GetSystemMenu(*(HWND *)(param_1 + 0x1c),0);
  iVar1 = FUN_00416e21();
  if (iVar1 != 0) {
    FUN_0041251c(&local_10);
    local_4 = 0;
    FUN_00416c7a(0x65);
    if (*(int *)(local_10 + -8) != 0) {
      AppendMenuA(*(HMENU *)(iVar1 + 4),0x800,0,(LPCSTR)0x0);
      AppendMenuA(*(HMENU *)(iVar1 + 4),0,0x10,local_10);
    }
    local_4 = 0xffffffff;
    FUN_00412667((int *)&local_10);
  }
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x80,1,*(LPARAM *)(param_1 + 0x78));
  SendMessageA(*(HWND *)(param_1 + 0x1c),0x80,0,*(LPARAM *)(param_1 + 0x78));
  param_1[0x60] = '\0';
  param_1[0x61] = '\0';
  param_1[0x62] = '\0';
  param_1[99] = '\0';
  param_1[100] = '\0';
  param_1[0x65] = '\0';
  param_1[0x66] = '\0';
  param_1[0x67] = '\0';
  param_1[0x68] = '\0';
  param_1[0x69] = '\0';
  param_1[0x6a] = '\0';
  param_1[0x6b] = '\0';
  param_1[0x6c] = '\0';
  param_1[0x6d] = '\0';
  param_1[0x6e] = '\0';
  param_1[0x6f] = '\0';
  FUN_00401780(param_1,0);
  ExceptionList = local_c;
  return 1;
}



void __fastcall FUN_00402450(void *param_1)

{
  int iVar1;
  
  FUN_00401dd0(param_1,*(char **)((int)param_1 + 0x60));
  if (*(int *)((int)param_1 + 0x60) < 3) {
    iVar1 = *(int *)((int)param_1 + 0x60) + -1;
    *(int *)((int)param_1 + 0x60) = iVar1;
    FUN_00401780(param_1,iVar1);
    return;
  }
  *(uint32_t *)((int)param_1 + 0x60) = 0;
  FUN_00401780(param_1,*(uint32_t *)((int)param_1 + 0x60));
  return;
}



void __fastcall FUN_00402490(void *param_1)

{
  int iVar1;
  BOOL BVar2;
  LPCSTR extraout_ECX;
  int *piVar3;
  LPCSTR pCVar4;
  int *piVar5;
  LPCSTR local_140;
  LPCSTR local_13c;
  uint8_t *local_138;
  int local_124 [70];
  void *local_c;
  uint8_t *puStack_8;
  int local_4;
  
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0041d1d1;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_0041251c(&local_13c);
  local_4 = 0;
  FUN_0041251c(&local_140);
  local_4._0_1_ = 1;
  FUN_00412aa6();
  local_4 = CONCAT31(local_4._1_3_,2);
  FUN_00401dd0(param_1,*(char **)((int)param_1 + 0x60));
  switch(*(uint32_t *)((int)param_1 + 0x60)) {
  case 0:
    *(uint32_t *)((int)param_1 + 0x60) = 1;
    FUN_00401780(param_1,1);
    break;
  case 1:
    if (*(int *)((int)param_1 + 100) == 0) {
      if (*(int *)(*(LPCSTR *)((int)param_1 + 0x70) + -8) == 0) {
LAB_004025f5:
        FUN_00419096(param_1,&DAT_00425194,&DAT_00425220,0x30);
        break;
      }
      iVar1 = FUN_00413bda(*(LPCSTR *)((int)param_1 + 0x70),local_124);
      if (iVar1 == 0) {
        FUN_00419096(param_1,&DAT_00425208,&DAT_00425220,0x30);
        break;
      }
      local_138 = &stack0xfffffeb4;
      pCVar4 = extraout_ECX;
      FUN_0041252c(&stack0xfffffeb4,(int *)((int)param_1 + 0x70));
      iVar1 = FUN_004020f0(pCVar4);
      if (iVar1 == -1) {
        FUN_00419096(param_1,&DAT_004251cc,&DAT_00425220,0x30);
        break;
      }
      *(int *)((int)param_1 + 0x68) = iVar1;
    }
    else if (*(int *)(*(int *)((int)param_1 + 0x74) + -8) == 0) {
      FUN_00419096(param_1,&DAT_004251b0,&DAT_00425220,0x30);
      break;
    }
    goto LAB_0040267a;
  case 2:
    if (*(int *)((int)param_1 + 100) == 0) {
      piVar3 = (int *)((int)param_1 + 0x74);
      if (*(int *)(*(int *)((int)param_1 + 0x74) + -8) == 0) {
        FUN_00419096(param_1,&DAT_004251b0,&DAT_00425220,0x30);
        break;
      }
      piVar5 = (int *)((int)param_1 + 0x70);
    }
    else {
      piVar3 = (int *)((int)param_1 + 0x70);
      if (*(int *)(*(int *)((int)param_1 + 0x70) + -8) == 0) goto LAB_004025f5;
      piVar5 = (int *)((int)param_1 + 0x74);
    }
    FUN_00412760(&local_13c,piVar5);
    FUN_00412760(&local_140,piVar3);
    iVar1 = FUN_00413bda(local_140,local_124);
    if ((iVar1 != 0) && (iVar1 = FUN_00419096(param_1,&DAT_00425160,&DAT_0042518c,0x24), iVar1 == 7)
       ) break;
    BVar2 = CopyFileA(local_13c,local_140,0);
    if (BVar2 == 0) {
      FUN_00419096(param_1,&DAT_00425140,&DAT_00425220,0x30);
      break;
    }
LAB_0040267a:
    iVar1 = *(int *)((int)param_1 + 0x60) + 1;
    *(int *)((int)param_1 + 0x60) = iVar1;
    FUN_00401780(param_1,iVar1);
    break;
  case 3:
    PostMessageA(*(HWND *)((int)param_1 + 0x1c),0x112,0xf060,0);
  }
  local_4._0_1_ = 1;
  FUN_00412b46();
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_00412667((int *)&local_140);
  local_4 = 0xffffffff;
  FUN_00412667((int *)&local_13c);
  ExceptionList = local_c;
  return;
}



void __fastcall FUN_004028f0(CDialog *param_1)

{
  void *local_c;
  uint8_t *puStack_8;
  uint32_t local_4;
  
  puStack_8 = &LAB_0041d258;
  local_c = ExceptionList;
  local_4 = 0;
  ExceptionList = &local_c;
  FUN_00412667((int *)(param_1 + 0xac));
  local_4 = 0xffffffff;
  CDialog::~CDialog(param_1);
  ExceptionList = local_c;
  return;
}



void __fastcall FUN_00402940(void *param_1)

{
  if (((*(int *)((int)param_1 + 0x60) == 1) && (*(int *)((int)param_1 + 100) == 1)) &&
     (*(int *)((int)param_1 + 0x68) != 0)) {
    FUN_00401dd0(param_1,(char *)0x1);
    FUN_00401480(param_1,*(int *)((int)param_1 + 0x68),1);
    return;
  }
  if (((*(int *)((int)param_1 + 0x60) == 2) && (*(int *)((int)param_1 + 100) == 0)) &&
     (*(int *)((int)param_1 + 0x6c) != 0)) {
    FUN_00401dd0(param_1,(char *)0x2);
    FUN_00401480(param_1,*(int *)((int)param_1 + 0x68),0);
  }
  return;
}



void __fastcall FUN_004029a0(void *param_1)

{
  if (((*(int *)((int)param_1 + 0x60) == 1) && (*(int *)((int)param_1 + 100) == 1)) &&
     (*(int *)((int)param_1 + 0x68) == 0)) {
    FUN_00401dd0(param_1,(char *)0x1);
    FUN_00401480(param_1,*(int *)((int)param_1 + 0x68),1);
    return;
  }
  if (((*(int *)((int)param_1 + 0x60) == 2) && (*(int *)((int)param_1 + 100) == 0)) &&
     (*(int *)((int)param_1 + 0x6c) == 0)) {
    FUN_00401dd0(param_1,(char *)0x2);
    FUN_00401480(param_1,*(int *)((int)param_1 + 0x68),1);
  }
  return;
}



uint32_t FUN_00402a20(void)

{
  CWinThread *pCVar1;
  uint32_t uVar2;
  
  pCVar1 = AfxGetThread();
  if (pCVar1 != (CWinThread *)0x0) {
    pCVar1 = AfxGetThread();
    uVar2 = (**(code **)(*(int *)pCVar1 + 0x7c))();
    return uVar2;
  }
  return 0;
}



void __fastcall FUN_00402a39(uint32_t *param_1)

{
  *param_1 = &PTR_LAB_0041e924;
  return;
}



void __fastcall FUN_00402a79(uint32_t *param_1)

{
  *param_1 = &PTR_LAB_0041e9d4;
  return;
}



void FUN_00402a80(uint *param_1)

{
  FUN_0041250b(param_1);
  return;
}



void FUN_00402a8d(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(int *)(unaff_EBP + -0x10) = extraout_ECX;
  *(uint32_t *)(unaff_EBP + -4) = 1;
  FUN_004172a1(extraout_ECX);
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_0041136c();
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0041136c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



uint * __thiscall FUN_00402ace(void *this,byte param_1)

{
  FUN_00402aea();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void FUN_00402aea(void)

{
  uint32_t *extraout_ECX;
  void *unaff_retaddr;
  uint32_t uStack00000008;
  
  FUN_004037f0();
  *extraout_ECX = &PTR_LAB_0041ed0c;
  uStack00000008 = 0;
  FUN_00412667(extraout_ECX + 4);
  *extraout_ECX = &PTR_LAB_0041e9d4;
  ExceptionList = unaff_retaddr;
  return;
}


void FUN_00402b57(void)

{
  FUN_0041bf1f();
  FUN_00412215();
  return;
}



uint * __thiscall FUN_00402b64(void *this,byte param_1)

{
  FUN_00402b80();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void FUN_00402b80(void)

{
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0041f474;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  FUN_00416e7d((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e9d4;
  return;
}



uint32_t * __thiscall FUN_00402bb3(void *this,uint32_t param_1,uint32_t param_2)

{
  FUN_00416f3d(this,param_1);
  *(uint32_t *)((int)this + 0xc) = 0;
  *(uint32_t *)((int)this + 0x10) = 0;
  *(uint32_t *)((int)this + 0x94) = param_2;
  *(uint ***)this = &PTR_LAB_0041f774;
  return this;
}



uint32_t * __thiscall FUN_00402bdd(void *this,uint32_t param_1,uint32_t param_2)

{
  FUN_00416f3d(this,param_1);
  *(uint32_t *)((int)this + 0xc) = 0;
  *(uint32_t *)((int)this + 0x10) = 0;
  *(uint32_t *)((int)this + 0x94) = param_2;
  *(uint ***)this = &PTR_LAB_0041f794;
  return this;
}



uint * __thiscall FUN_00402c07(void *this,byte param_1)

{
  FUN_00402c23();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void FUN_00402c23(void)

{
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0041f75c;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  FUN_0041816e((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e9d4;
  return;
}



void __thiscall
FUN_00402c96(void *this,int param_1,int param_2,UINT param_3,RECT *param_4,LPCSTR param_5,
            UINT param_6,INT *param_7)

{
  ExtTextOutA(*(HDC *)((int)this + 4),param_1,param_2,param_3,param_4,param_5,param_6,param_7);
  return;
}



int * __thiscall
FUN_00402cbb(void *this,int *param_1,int param_2,int param_3,LPCSTR param_4,int param_5,int param_6,
            INT *param_7,int param_8)

{
  LONG LVar1;
  
  LVar1 = TabbedTextOutA(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,param_6,param_7,
                         param_8);
  param_1[1] = (int)(short)((uint)LVar1 >> 0x10);
  *param_1 = (int)(short)LVar1;
  return param_1;
}



void __thiscall
FUN_00402d0f(void *this,int param_1,GRAYSTRINGPROC param_2,LPARAM param_3,int param_4,int param_5,
            int param_6,int param_7,int param_8)

{
  HBRUSH hBrush;
  
  hBrush = (HBRUSH)0x0;
  if (param_1 != 0) {
    hBrush = *(HBRUSH *)(param_1 + 4);
  }
  GrayStringA(*(HDC *)((int)this + 4),hBrush,param_2,param_3,param_4,param_5,param_6,param_7,param_8
             );
  return;
}



CDialog * __thiscall FUN_00402d5b(void *this,byte param_1)

{
  CDialog::~CDialog(this);
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



uint32_t * __thiscall FUN_00402d77(void *this,uint32_t param_1,uint32_t param_2)

{
  FUN_00416f3d(this,param_1);
  *(uint32_t *)((int)this + 0xc) = 0;
  *(uint32_t *)((int)this + 0x10) = 0;
  *(uint32_t *)((int)this + 0x94) = param_2;
  *(uint ***)this = &PTR_LAB_0041fa9c;
  return this;
}



uint32_t * __thiscall FUN_00402da1(void *this,uint32_t param_1,uint32_t param_2)

{
  FUN_00416f3d(this,param_1);
  *(uint32_t *)((int)this + 0xc) = 0;
  *(uint32_t *)((int)this + 0x10) = 0;
  *(uint32_t *)((int)this + 0x94) = param_2;
  *(uint ***)this = &PTR_LAB_0041fabc;
  return this;
}



uint32_t * __thiscall FUN_00402dcb(void *this,byte param_1)

{
  FUN_00402a79(this);
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}


void __thiscall FUN_00402e10(void *this,WPARAM param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = SendMessageA(*(HWND *)((int)this + 0x1c),0x1002,param_1,0);
  iVar2 = FUN_0040301d(uVar1);
  if (iVar2 != 0) {
    SendMessageA(*(HWND *)((int)this + 0x1c),0x1003,param_1,0);
  }
  return;
}



void __fastcall FUN_00402e49(int *param_1)

{
  FUN_00402e10(param_1,0);
  FUN_00402e10(param_1,1);
  FUN_00402e10(param_1,2);
  FUN_004148bc(param_1);
  return;
}



void __thiscall FUN_00402e6e(void *this,WPARAM param_1)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = SendMessageA(*(HWND *)((int)this + 0x1c),0x1108,param_1,0);
  iVar2 = FUN_0040301d(uVar1);
  if (iVar2 != 0) {
    SendMessageA(*(HWND *)((int)this + 0x1c),0x1109,param_1,0);
  }
  return;
}



void __fastcall FUN_00402ea7(int *param_1)

{
  FUN_00402e6e(param_1,0);
  FUN_00402e6e(param_1,2);
  FUN_0041489e(param_1);
  return;
}



uint * __thiscall FUN_00402f0a(void *this,byte param_1)

{
  FUN_00402f26();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void FUN_00402f26(void)

{
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_004205ec;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  FUN_00402ff3((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e9d4;
  return;
}



int __fastcall FUN_00402f59(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    this = (void *)FUN_00402f83();
    if (this != (void *)0x0) {
      FUN_004114b7(this,*(uint *)(param_1 + 4));
    }
  }
  *(uint32_t *)(param_1 + 4) = 0;
  return iVar1;
}



uint32_t FUN_00402f83(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  int unaff_EBP;
  
  FUN_004037f0();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x24) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    uVar2 = FUN_004124bb(&LAB_004183a7);
    iVar3 = FUN_004124cf(0x44);
    *(int *)(unaff_EBP + 8) = iVar3;
    *(uint32_t *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = FUN_0041716a();
    }
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    *(void **)(pAVar1 + 0x24) = pvVar4;
    FUN_004124bb(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(pAVar1 + 0x24);
}



BOOL __fastcall FUN_00402ff3(int param_1)

{
  HIMAGELIST himl;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  himl = (HIMAGELIST)FUN_00402f59(param_1);
  BVar1 = ImageList_Destroy(himl);
  return BVar1;
}



void FUN_00403009(void)

{
  int iVar1;
  
  iVar1 = FUN_00402f83();
  if (iVar1 != 0) {
    FUN_004172a1(iVar1);
    return;
  }
  return;
}



uint32_t FUN_0040301d(uint param_1)

{
  void *this;
  uint32_t uVar1;
  
  this = (void *)FUN_00402f83();
  uVar1 = 0;
  if (this != (void *)0x0) {
    uVar1 = FUN_00411434(this,param_1);
  }
  return uVar1;
}



int __cdecl FUN_00403050(int param_1) {
  SIZE_T SVar1;
  int *piVar2;
  
  FUN_00403990();
  SVar1 = FUN_00404850((uint *)DAT_0042c38c);
  if (SVar1 < (uint)((int)DAT_0042c388 + (4 - (int)DAT_0042c38c))) {
    SVar1 = FUN_00404850((uint *)DAT_0042c38c);
    piVar2 = FUN_004056d0(DAT_0042c38c,SVar1 + 0x10);
    if (piVar2 == (int *)0x0) {
      FUN_004039a0();
      return 0;
    }
    DAT_0042c388 = piVar2 + ((int)DAT_0042c388 - (int)DAT_0042c38c >> 2);
    DAT_0042c38c = piVar2;
  }
  *DAT_0042c388 = param_1;
  DAT_0042c388 = DAT_0042c388 + 1;
  FUN_004039a0();
  return param_1;
}



int __cdecl FUN_004030e0(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_00403050(param_1);
  return (iVar1 != 0) - 1;
}



void FUN_00403140(uint *UNRECOVERED_JUMPTABLE)

{
  ExceptionList = *(void **)ExceptionList;
                    // WARNING: Could not recover jumptable at 0x0040316b. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00403180(uint32_t param_1,uint *UNRECOVERED_JUMPTABLE)

{
  LOCK();
  UNLOCK();
                    // WARNING: Could not recover jumptable at 0x00403185. Too many branches
                    // WARNING: Treating indirect jump as call
  (*(code *)UNRECOVERED_JUMPTABLE)();
  return;
}



void FUN_00403190(PVOID param_1,PEXCEPTION_RECORD param_2)

{
  void *pvVar1;
  
  pvVar1 = ExceptionList;
  RtlUnwind(param_1,(PVOID)0x4031bc,param_2,(PVOID)0x0);
  param_2->ExceptionFlags = param_2->ExceptionFlags & 0xfffffffd;
  *(void **)pvVar1 = ExceptionList;
  ExceptionList = pvVar1;
  return;
}



uint32_t __cdecl
FUN_004031f0(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,uint32_t param_4)

{
  int *in_EAX;
  uint32_t uVar1;
  
  uVar1 = FUN_00405880(param_1,param_2,param_3,param_4,in_EAX,0,(PVOID)0x0,'\0');
  return uVar1;
}



uint32_t __cdecl
FUN_00403230(uint32_t param_1,uint32_t param_2,uint32_t param_3,int param_4,int param_5)

{
  uint32_t uVar1;
  void *local_18;
  code *local_14;
  uint32_t local_10;
  uint32_t local_c;
  int local_8;
  
  local_8 = param_4 + 1;
  local_14 = FUN_00403290;
  local_10 = param_2;
  local_c = param_1;
  local_18 = ExceptionList;
  ExceptionList = &local_18;
  uVar1 = __CallSettingFrame_12(param_3,param_1,param_5);
  ExceptionList = local_18;
  return uVar1;
}



void __cdecl FUN_00403290(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  FUN_00405880(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),param_2,'\0');
  return;
}



uint32_t __cdecl
FUN_004032c0(uint32_t *param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,uint32_t param_6,uint32_t param_7)

{
  DWORD *pDVar1;
  uint32_t uVar2;
  uint32_t **ppuVar3;
  uint32_t *local_34;
  uint32_t local_30;
  uint32_t *local_2c;
  code *local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  uint32_t local_18;
  uint32_t local_14;
  uint8_t *local_10;
  uint8_t *local_c;
  int local_8;
  
  local_c = &stack0xfffffffc;
  local_10 = &stack0xffffffbc;
  local_28 = FUN_00403390;
  local_24 = param_5;
  local_20 = param_2;
  local_1c = param_6;
  local_18 = param_7;
  local_8 = 0;
  local_14 = 0x40335c;
  local_2c = ExceptionList;
  ExceptionList = &local_2c;
  local_34 = param_1;
  local_30 = param_3;
  ppuVar3 = &local_34;
  uVar2 = *param_1;
  pDVar1 = FUN_00406380();
  (*(code *)pDVar1[0x1a])(uVar2,ppuVar3);
  if (local_8 != 0) {
    *local_2c = *(uint32_t *)ExceptionList;
  }
  ExceptionList = local_2c;
  return 0;
}

uint32_t __cdecl FUN_00403390(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3)

{
  uint32_t uVar1;
  
  if ((param_1->ExceptionFlags & 0x66) != 0) {
    *(uint32_t *)((int)param_2 + 0x24) = 1;
    return 1;
  }
  FUN_00405880(param_1,*(PVOID *)((int)param_2 + 0xc),param_3,0,*(int **)((int)param_2 + 8),
               *(int *)((int)param_2 + 0x10),*(PVOID *)((int)param_2 + 0x14),'\x01');
  if (*(int *)((int)param_2 + 0x24) == 0) {
    FUN_00403190(param_2,param_1);
  }
                    // WARNING: Could not recover jumptable at 0x00403404. Too many branches
                    // WARNING: Treating indirect jump as call
  uVar1 = (**(code **)((int)param_2 + 0x18))();
  return uVar1;
}

int __cdecl FUN_00403420(int param_1,int param_2,int param_3,uint *param_4,uint *param_5)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  iVar2 = *(int *)(param_1 + 0x10);
  uVar5 = *(uint *)(param_1 + 0xc);
  uVar3 = uVar5;
  uVar4 = uVar5;
  while (-1 < param_2) {
    if (uVar5 == 0xffffffff) {
      FUN_00406490();
    }
    uVar5 = uVar5 - 1;
    iVar1 = iVar2 + uVar5 * 0x14;
    if (((*(int *)(iVar1 + 4) < param_3) && (param_3 <= *(int *)(iVar1 + 8))) ||
       (uVar5 == 0xffffffff)) {
      param_2 = param_2 + -1;
      uVar3 = uVar4;
      uVar4 = uVar5;
    }
  }
  uVar5 = uVar5 + 1;
  *param_4 = uVar5;
  *param_5 = uVar3;
  if ((*(uint *)(param_1 + 0xc) < uVar3) || (uVar3 < uVar5)) {
    FUN_00406490();
  }
  return iVar2 + uVar5 * 0x14;
}


void FUN_00403576(void)

{
  uint32_t in_EAX;
  int unaff_EBP;
  
  DAT_004257ac = *(uint32_t *)(unaff_EBP + 8);
  DAT_004257a8 = in_EAX;
  DAT_004257b0 = unaff_EBP;
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void entry(void)

{
  byte bVar1;
  DWORD DVar2;
  int iVar3;
  uint uVar4;
  HMODULE pHVar5;
  UINT UVar6;
  byte *pbVar7;
  uint32_t uVar9;
  _STARTUPINFOA local_60;
  uint8_t *local_1c;
  void *local_14;
  uint8_t *puStack_10;
  uint *puStack_c;
  uint32_t local_8;
  byte *pbVar8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00420890;
  puStack_10 = &LAB_00406f28;
  local_14 = ExceptionList;
  local_1c = &stack0xffffff88;
  ExceptionList = &local_14;
  DVar2 = GetVersion();
  _DAT_0042ac70 = DVar2 >> 8 & 0xff;
  _DAT_0042ac6c = DVar2 & 0xff;
  _DAT_0042ac68 = _DAT_0042ac6c * 0x100 + _DAT_0042ac70;
  _DAT_0042ac64 = DVar2 >> 0x10;
  iVar3 = FUN_00406ee0();
  if (iVar3 == 0) {
    FUN_00403770(0x1c);
  }
  iVar3 = FUN_00406300();
  if (iVar3 == 0) {
    FUN_00403770(0x10);
  }
  local_8 = 0;
  FUN_00406cd0();
  FUN_00404dc0();
  DAT_0042c394 = (byte *)GetCommandLineA();
  DAT_0042ac54 = FUN_00406b70();
  if ((DAT_0042ac54 == (LPSTR)0x0) || (DAT_0042c394 == (byte *)0x0)) {
    FUN_00403890(0xffffffff);
  }
  FUN_004068c0();
  FUN_004067d0();
  FUN_00403860();
  pbVar7 = DAT_0042c394;
  if (*DAT_0042c394 == 0x22) {
    while( true ) {
      pbVar8 = pbVar7;
      pbVar7 = pbVar8 + 1;
      bVar1 = *pbVar7;
      if ((bVar1 == 0x22) || (bVar1 == 0)) break;
      iVar3 = FUN_00406770((uint)bVar1);
      if (iVar3 != 0) {
        pbVar7 = pbVar8 + 2;
      }
    }
    if (*pbVar7 == 0x22) {
      pbVar7 = pbVar8 + 2;
    }
  }
  else {
    for (; 0x20 < *pbVar7; pbVar7 = pbVar7 + 1) {
    }
  }
  for (; (*pbVar7 != 0 && (*pbVar7 < 0x21)); pbVar7 = pbVar7 + 1) {
  }
  local_60.dwFlags = 0;
  GetStartupInfoA(&local_60);
  if ((local_60.dwFlags & 1) == 0) {
    uVar4 = 10;
  }
  else {
    uVar4 = local_60._48_4_ & 0xffff;
  }
  uVar9 = 0;
  pHVar5 = GetModuleHandleA((LPCSTR)0x0);
  UVar6 = FUN_004103c7(pHVar5,uVar9,pbVar7,uVar4);
  FUN_00403890(UVar6);
  ExceptionList = local_14;
  return;
}



void __cdecl FUN_00403770(int param_1)

{
  if (DAT_0042ac5c == 1) {
    FUN_00407000();
  }
  FUN_00407040(param_1);
                    // WARNING: Subroutine does not return
  ExitProcess(0xff);
}



void __fastcall FUN_004037a0(uint32_t *param_1)

{
  *param_1 = &type_info::vftable;
  FUN_00407250(0x1b);
  if ((uint *)param_1[1] != (uint *)0x0) {
    FUN_004039d0((uint *)param_1[1]);
  }
  FUN_004072d0(0x1b);
  return;
}



uint32_t * __thiscall FUN_004037d0(void *this,byte param_1)

{
  FUN_004037a0(this);
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void FUN_004037f0(void)

{
  uint8_t auStack_c [12];
  
  ExceptionList = auStack_c;
  return;
}



char * __cdecl FUN_00403810(char *param_1)

{
  char cVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  char *pcVar6;
  
  if (param_1 != (char *)0x0) {
    uVar3 = 0xffffffff;
    pcVar2 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    pcVar2 = (char *)FUN_00403b50(~uVar3);
    if (pcVar2 != (char *)0x0) {
      uVar3 = 0xffffffff;
      do {
        pcVar5 = param_1;
        if (uVar3 == 0) break;
        uVar3 = uVar3 - 1;
        pcVar5 = param_1 + 1;
        cVar1 = *param_1;
        param_1 = pcVar5;
      } while (cVar1 != '\0');
      uVar3 = ~uVar3;
      pcVar5 = pcVar5 + -uVar3;
      pcVar6 = pcVar2;
      for (uVar4 = uVar3 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
        *(uint32_t *)pcVar6 = *(uint32_t *)pcVar5;
        pcVar5 = pcVar5 + 4;
        pcVar6 = pcVar6 + 4;
      }
      for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
        *pcVar6 = *pcVar5;
        pcVar5 = pcVar5 + 1;
        pcVar6 = pcVar6 + 1;
      }
      return pcVar2;
    }
  }
  return (char *)0x0;
}



void FUN_00403860(void)

{
  if (DAT_0042c390 != (code *)0x0) {
    (*DAT_0042c390)();
  }
  FUN_004039b0((uint32_t *)&DAT_00425070,(uint32_t *)&DAT_00425080);
  FUN_004039b0((uint32_t *)&DAT_00425000,(uint32_t *)&DAT_0042506c);
  return;
}

void __cdecl FUN_00403890(UINT param_1)

{
  FUN_004038d0(param_1,0,0);
  return;
}


// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void __cdecl FUN_004038d0(UINT param_1,int param_2,int param_3)

{
  HANDLE hProcess;
  uint32_t *puVar1;
  uint32_t *puVar2;
  UINT uExitCode;
  
  FUN_00403990();
  if (DAT_0042aca0 == 1) {
    uExitCode = param_1;
    hProcess = GetCurrentProcess();
    TerminateProcess(hProcess,uExitCode);
  }
  _DAT_0042ac9c = 1;
  DAT_0042ac98 = (uint8_t)param_3;
  if (param_2 == 0) {
    if ((DAT_0042c38c != (uint32_t *)0x0) &&
       (puVar2 = (uint32_t *)(DAT_0042c388 + -4), puVar1 = DAT_0042c38c, DAT_0042c38c <= puVar2))
    {
      do {
        if ((code *)*puVar2 != (code *)0x0) {
          (*(code *)*puVar2)();
          puVar1 = DAT_0042c38c;
        }
        puVar2 = puVar2 + -1;
      } while (puVar1 <= puVar2);
    }
    FUN_004039b0((uint32_t *)&DAT_00425084,(uint32_t *)&DAT_0042508c);
  }
  FUN_004039b0((uint32_t *)&DAT_00425090,(uint32_t *)&DAT_00425098);
  if (param_3 != 0) {
    FUN_004039a0();
    return;
  }
  DAT_0042aca0 = 1;
                    // WARNING: Subroutine does not return
  ExitProcess(param_1);
}



void FUN_00403990(void)

{
  FUN_00407250(0xd);
  return;
}



void FUN_004039a0(void)

{
  FUN_004072d0(0xd);
  return;
}



void __cdecl FUN_004039b0(uint32_t *param_1,uint32_t *param_2)

{
  for (; param_1 < param_2; param_1 = param_1 + 1) {
    if ((code *)*param_1 != (code *)0x0) {
      (*(code *)*param_1)();
    }
  }
  return;
}

void __cdecl FUN_004039d0(uint *param_1)

{
  uint *lpMem;
  byte *pbVar1;
  int local_4;
  
  lpMem = param_1;
  if (param_1 != (uint *)0x0) {
    FUN_00407250(9);
    pbVar1 = (byte *)FUN_00407670(lpMem,&local_4,(uint *)&param_1);
    if (pbVar1 != (byte *)0x0) {
      FUN_004076d0(local_4,(int)param_1,pbVar1);
      FUN_004072d0(9);
      return;
    }
    FUN_004072d0(9);
    HeapFree(DAT_0042c26c,0,lpMem);
  }
  return;
}

void __cdecl FUN_00403b50(uint param_1)

{
  FUN_00403b70(param_1,DAT_0042b084);
  return;
}

int * __cdecl FUN_00403b70(uint param_1,int param_2)

{
  int *piVar1;
  int iVar2;
  
  if (param_1 < 0xffffffe1) {
    if (param_1 == 0) {
      param_1 = 1;
    }
    do {
      if (param_1 < 0xffffffe1) {
        piVar1 = FUN_00403bc0(param_1);
      }
      else {
        piVar1 = (int *)0x0;
      }
      if (piVar1 != (int *)0x0) {
        return piVar1;
      }
      if (param_2 == 0) {
        return (int *)0x0;
      }
      iVar2 = FUN_00407c70(param_1);
    } while (iVar2 != 0);
  }
  return (int *)0x0;
}



int * __cdecl FUN_00403bc0(int param_1)

{
  int *piVar1;
  uint dwBytes;
  
  dwBytes = param_1 + 0xfU & 0xfffffff0;
  if (dwBytes <= DAT_00427d3c) {
    FUN_00407250(9);
    piVar1 = FUN_00407730(param_1 + 0xfU >> 4);
    FUN_004072d0(9);
    if (piVar1 != (int *)0x0) {
      return piVar1;
    }
  }
  piVar1 = HeapAlloc(DAT_0042c26c,0,dwBytes);
  return piVar1;
}



uint32_t * __cdecl FUN_00403c20(uint32_t *param_1,uint32_t *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (uint32_t *)(param_3 + (int)param_2))) {
    puVar3 = (uint32_t *)((param_3 - 4) + (int)param_2);
    puVar4 = (uint32_t *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_00403dd7_caseD_2;
        case 3:
          goto switchD_00403dd7_caseD_3;
        }
        goto switchD_00403dd7_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_00403dd7_caseD_0;
      case 1:
        goto switchD_00403dd7_caseD_1;
      case 2:
        goto switchD_00403dd7_caseD_2;
      case 3:
        goto switchD_00403dd7_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
          puVar3 = (uint32_t *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (uint32_t *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00403dd7_caseD_2;
            case 3:
              goto switchD_00403dd7_caseD_3;
            }
            goto switchD_00403dd7_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(uint8_t *)((int)puVar4 + 2) = *(uint8_t *)((int)puVar3 + 2);
          puVar3 = (uint32_t *)((int)puVar3 + -2);
          puVar4 = (uint32_t *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00403dd7_caseD_2;
            case 3:
              goto switchD_00403dd7_caseD_3;
            }
            goto switchD_00403dd7_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
          *(uint8_t *)((int)puVar4 + 2) = *(uint8_t *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(uint8_t *)((int)puVar4 + 1) = *(uint8_t *)((int)puVar3 + 1);
          puVar3 = (uint32_t *)((int)puVar3 + -3);
          puVar4 = (uint32_t *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00403dd7_caseD_2;
            case 3:
              goto switchD_00403dd7_caseD_3;
            }
            goto switchD_00403dd7_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_00403dd7_caseD_1:
      *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_00403dd7_caseD_2:
      *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
      *(uint8_t *)((int)puVar4 + 2) = *(uint8_t *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_00403dd7_caseD_3:
      *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
      *(uint8_t *)((int)puVar4 + 2) = *(uint8_t *)((int)puVar3 + 2);
      *(uint8_t *)((int)puVar4 + 1) = *(uint8_t *)((int)puVar3 + 1);
      return param_1;
    }
switchD_00403dd7_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_00403c55_caseD_2;
      case 3:
        goto switchD_00403c55_caseD_3;
      }
      goto switchD_00403c55_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_00403c55_caseD_0;
    case 1:
      goto switchD_00403c55_caseD_1;
    case 2:
      goto switchD_00403c55_caseD_2;
    case 3:
      goto switchD_00403c55_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(uint8_t *)param_1 = *(uint8_t *)param_2;
        *(uint8_t *)((int)param_1 + 1) = *(uint8_t *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(uint8_t *)((int)param_1 + 2) = *(uint8_t *)((int)param_2 + 2);
        param_2 = (uint32_t *)((int)param_2 + 3);
        puVar3 = (uint32_t *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00403c55_caseD_2;
          case 3:
            goto switchD_00403c55_caseD_3;
          }
          goto switchD_00403c55_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(uint8_t *)param_1 = *(uint8_t *)param_2;
        uVar1 = uVar1 >> 2;
        *(uint8_t *)((int)param_1 + 1) = *(uint8_t *)((int)param_2 + 1);
        param_2 = (uint32_t *)((int)param_2 + 2);
        puVar3 = (uint32_t *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00403c55_caseD_2;
          case 3:
            goto switchD_00403c55_caseD_3;
          }
          goto switchD_00403c55_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(uint8_t *)param_1 = *(uint8_t *)param_2;
        param_2 = (uint32_t *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (uint32_t *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00403c55_caseD_2;
          case 3:
            goto switchD_00403c55_caseD_3;
          }
          goto switchD_00403c55_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_00403c55_caseD_1:
    *(uint8_t *)puVar3 = *(uint8_t *)param_2;
    return param_1;
  case 2:
switchD_00403c55_caseD_2:
    *(uint8_t *)puVar3 = *(uint8_t *)param_2;
    *(uint8_t *)((int)puVar3 + 1) = *(uint8_t *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_00403c55_caseD_3:
    *(uint8_t *)puVar3 = *(uint8_t *)param_2;
    *(uint8_t *)((int)puVar3 + 1) = *(uint8_t *)((int)param_2 + 1);
    *(uint8_t *)((int)puVar3 + 2) = *(uint8_t *)((int)param_2 + 2);
    return param_1;
  }
switchD_00403c55_caseD_0:
  return param_1;
}



int __cdecl FUN_00403f60(short *param_1)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_1;
  psVar2 = param_1;
  while (psVar2 = psVar2 + 1, sVar1 != 0) {
    sVar1 = *psVar2;
  }
  return ((int)psVar2 - (int)param_1 >> 1) + -1;
}



byte * __cdecl FUN_00403f80(byte *param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  byte *pbVar3;
  
  if (DAT_0042aeb0 == 0) {
    pbVar3 = (byte *)_strchr((char *)param_1,param_2);
    return pbVar3;
  }
  FUN_00407250(0x19);
  bVar1 = *param_1;
  while (uVar2 = (uint)bVar1, bVar1 != 0) {
    if ((*(byte *)((int)&DAT_0042aca8 + uVar2 + 1) & 4) == 0) {
      pbVar3 = param_1;
      if (param_2 == uVar2) break;
    }
    else {
      pbVar3 = param_1 + 1;
      if (param_1[1] == 0) {
        FUN_004072d0(0x19);
        return (byte *)0x0;
      }
      if (param_2 == CONCAT11(bVar1,param_1[1])) {
        FUN_004072d0(0x19);
        return param_1;
      }
    }
    param_1 = pbVar3 + 1;
    bVar1 = pbVar3[1];
  }
  FUN_004072d0(0x19);
  return (byte *)((param_2 != uVar2) - 1 & (uint)param_1);
}



// WARNING: Unable to track spacebase fully for stack

void FUN_00404050(void)

{
  uint in_EAX;
  uint8_t *puVar1;
  uint32_t unaff_retaddr;
  
  puVar1 = &stack0x00000004;
  for (; 0xfff < in_EAX; in_EAX = in_EAX - 0x1000) {
    puVar1 = puVar1 + -0x1000;
  }
  *(uint32_t *)(puVar1 + (-4 - in_EAX)) = unaff_retaddr;
  return;
}



byte * __cdecl FUN_00404080(byte *param_1)

{
  byte *pbVar1;
  
  pbVar1 = param_1 + 1;
  if ((*(byte *)((int)&DAT_0042aca8 + *param_1 + 1) & 4) != 0) {
    pbVar1 = param_1 + 2;
  }
  return pbVar1;
}



int __cdecl FUN_004040a0(byte *param_1,byte *param_2)

{
  byte bVar1;
  ushort uVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (DAT_0042aeb0 != 0) {
    FUN_00407250(0x19);
    pbVar3 = param_2;
    while( true ) {
      param_2._0_2_ = (ushort)*param_1;
      pbVar5 = param_1 + 1;
      if ((*(byte *)((int)&DAT_0042aca8 + (ushort)param_2 + 1) & 4) != 0) {
        bVar1 = *pbVar5;
        if (bVar1 == 0) {
          param_2._0_2_ = 0;
        }
        else {
          pbVar5 = param_1 + 2;
          param_2._0_2_ = CONCAT11(*param_1,bVar1);
        }
      }
      uVar2 = (ushort)*pbVar3;
      pbVar4 = pbVar3 + 1;
      if ((*(byte *)((int)&DAT_0042aca8 + uVar2 + 1) & 4) != 0) {
        bVar1 = *pbVar4;
        if (bVar1 == 0) {
          uVar2 = 0;
        }
        else {
          pbVar4 = pbVar3 + 2;
          uVar2 = CONCAT11(*pbVar3,bVar1);
        }
      }
      if ((ushort)param_2 != uVar2) break;
      pbVar3 = pbVar4;
      param_1 = pbVar5;
      if ((ushort)param_2 == 0) {
        FUN_004072d0(0x19);
        return 0;
      }
    }
    FUN_004072d0(0x19);
    return (-(uint)(uVar2 < (ushort)param_2) & 2) - 1;
  }
  while( true ) {
    bVar1 = *param_1;
    bVar6 = bVar1 < *param_2;
    if (bVar1 != *param_2) break;
    if (bVar1 == 0) {
      return 0;
    }
    bVar1 = param_1[1];
    bVar6 = bVar1 < param_2[1];
    if (bVar1 != param_2[1]) break;
    param_1 = param_1 + 2;
    param_2 = param_2 + 2;
    if (bVar1 == 0) {
      return 0;
    }
  }
  return (1 - (uint)bVar6) - (uint)(bVar6 != 0);
}



void FUN_004041a0(uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  DWORD *pDVar2;
  DWORD *pDVar3;
  DWORD local_20 [4];
  DWORD local_10;
  ULONG_PTR local_c;
  uint32_t local_8;
  uint32_t local_4;
  
  pDVar2 = &DAT_004208a8;
  pDVar3 = local_20;
  for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pDVar3 = *pDVar2;
    pDVar2 = pDVar2 + 1;
    pDVar3 = pDVar3 + 1;
  }
  local_8 = param_1;
  local_4 = param_2;
  RaiseException(local_20[0],local_20[1],local_10,&local_c);
  return;
}



byte * __cdecl FUN_004041f0(byte *param_1,uint param_2)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  byte *pbVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)0x0;
  if (DAT_0042aeb0 == 0) {
    pbVar5 = (byte *)_strrchr((char *)param_1,param_2);
    return pbVar5;
  }
  FUN_00407250(0x19);
  do {
    bVar3 = *param_1;
    if ((*(byte *)((int)&DAT_0042aca8 + bVar3 + 1) & 4) == 0) {
      pbVar4 = param_1;
      bVar2 = bVar3;
      if (param_2 == bVar3) {
LAB_00404268:
        pbVar5 = pbVar4;
        bVar3 = bVar2;
      }
    }
    else {
      bVar2 = param_1[1];
      pbVar4 = param_1 + 1;
      if (bVar2 == 0) {
        bVar3 = bVar2;
        if (pbVar5 == (byte *)0x0) goto LAB_00404268;
      }
      else {
        uVar1 = CONCAT11(bVar3,bVar2);
        bVar3 = bVar2;
        if (param_2 == uVar1) {
          pbVar5 = param_1;
        }
      }
    }
    param_1 = pbVar4 + 1;
    if (bVar3 == 0) {
      FUN_004072d0(0x19);
      return pbVar5;
    }
  } while( true );
}



int __cdecl FUN_00404280(uint8_t *param_1,char *param_2,uint32_t *param_3)

{
  int iVar1;
  uint8_t *local_20;
  int local_1c;
  uint8_t *local_18;
  uint32_t local_14;
  
  local_18 = param_1;
  local_20 = param_1;
  local_14 = 0x42;
  local_1c = 0x7fffffff;
  iVar1 = FUN_004082f0((int *)&local_20,param_2,param_3);
  local_1c = local_1c + -1;
  if (-1 < local_1c) {
    *local_20 = 0;
    return iVar1;
  }
  FUN_004081c0(0,(int *)&local_20);
  return iVar1;
}



char __cdecl FUN_004042f0(byte *param_1)

{
  return ((*(byte *)((int)&DAT_0042aca8 + *param_1 + 1) & 4) != 0) + '\x01';
}



uint __cdecl FUN_00404310(uint param_1)

{
  BOOL BVar1;
  uint uVar2;
  uint32_t local_4;
  
  if (param_1 < 0x100) {
    if (1 < DAT_00427f54) {
      uVar2 = FUN_00408db0(param_1,4);
      return uVar2;
    }
    return (byte)PTR_DAT_00427d48[param_1 * 2] & 4;
  }
  local_4 = 0;
  param_1 = CONCAT31(CONCAT21(param_1._2_2_,(char)param_1),(char)(param_1 >> 8));
  if (DAT_0042aeb0 == 0) {
    return 0;
  }
  BVar1 = FUN_00408fe0(1,(LPCSTR)&param_1,2,(LPWORD)&local_4,DAT_0042aeb0,DAT_0042aeb4,1);
  if (BVar1 == 0) {
    return 0;
  }
  if ((local_4._2_2_ == 0) && ((local_4 & 4) != 0)) {
    return 1;
  }
  return 0;
}



int __cdecl FUN_004043b0(byte *param_1)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  byte *pbVar6;
  
  while( true ) {
    if (DAT_00427f54 < 2) {
      uVar2 = (byte)PTR_DAT_00427d48[(uint)*param_1 * 2] & 8;
    }
    else {
      uVar2 = FUN_00408db0((uint)*param_1,8);
    }
    if (uVar2 == 0) break;
    param_1 = param_1 + 1;
  }
  uVar2 = (uint)*param_1;
  pbVar6 = param_1 + 1;
  if ((uVar2 == 0x2d) || (uVar4 = uVar2, uVar2 == 0x2b)) {
    uVar4 = (uint)*pbVar6;
    pbVar6 = param_1 + 2;
  }
  iVar5 = 0;
  while( true ) {
    if (DAT_00427f54 < 2) {
      uVar3 = (byte)PTR_DAT_00427d48[uVar4 * 2] & 4;
    }
    else {
      uVar3 = FUN_00408db0(uVar4,4);
    }
    if (uVar3 == 0) break;
    bVar1 = *pbVar6;
    pbVar6 = pbVar6 + 1;
    iVar5 = (uVar4 - 0x30) + iVar5 * 10;
    uVar4 = (uint)bVar1;
  }
  if (uVar2 == 0x2d) {
    iVar5 = -iVar5;
  }
  return iVar5;
}



void __cdecl FUN_00404450(byte *param_1)

{
  FUN_004043b0(param_1);
  return;
}



uint32_t * __cdecl FUN_00404460(uint32_t *param_1,uint32_t *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint32_t *puVar3;
  uint32_t *puVar4;
  
  if ((param_2 < param_1) && (param_1 < (uint32_t *)(param_3 + (int)param_2))) {
    puVar3 = (uint32_t *)((param_3 - 4) + (int)param_2);
    puVar4 = (uint32_t *)((param_3 - 4) + (int)param_1);
    if (((uint)puVar4 & 3) == 0) {
      uVar1 = param_3 >> 2;
      uVar2 = param_3 & 3;
      if (7 < uVar1) {
        for (; uVar1 != 0; uVar1 = uVar1 - 1) {
          *puVar4 = *puVar3;
          puVar3 = puVar3 + -1;
          puVar4 = puVar4 + -1;
        }
        switch(uVar2) {
        case 0:
          return param_1;
        case 2:
          goto switchD_00404617_caseD_2;
        case 3:
          goto switchD_00404617_caseD_3;
        }
        goto switchD_00404617_caseD_1;
      }
    }
    else {
      switch(param_3) {
      case 0:
        goto switchD_00404617_caseD_0;
      case 1:
        goto switchD_00404617_caseD_1;
      case 2:
        goto switchD_00404617_caseD_2;
      case 3:
        goto switchD_00404617_caseD_3;
      default:
        uVar1 = param_3 - ((uint)puVar4 & 3);
        switch((uint)puVar4 & 3) {
        case 1:
          uVar2 = uVar1 & 3;
          *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
          puVar3 = (uint32_t *)((int)puVar3 + -1);
          uVar1 = uVar1 >> 2;
          puVar4 = (uint32_t *)((int)puVar4 - 1);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00404617_caseD_2;
            case 3:
              goto switchD_00404617_caseD_3;
            }
            goto switchD_00404617_caseD_1;
          }
          break;
        case 2:
          uVar2 = uVar1 & 3;
          *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
          uVar1 = uVar1 >> 2;
          *(uint8_t *)((int)puVar4 + 2) = *(uint8_t *)((int)puVar3 + 2);
          puVar3 = (uint32_t *)((int)puVar3 + -2);
          puVar4 = (uint32_t *)((int)puVar4 - 2);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00404617_caseD_2;
            case 3:
              goto switchD_00404617_caseD_3;
            }
            goto switchD_00404617_caseD_1;
          }
          break;
        case 3:
          uVar2 = uVar1 & 3;
          *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
          *(uint8_t *)((int)puVar4 + 2) = *(uint8_t *)((int)puVar3 + 2);
          uVar1 = uVar1 >> 2;
          *(uint8_t *)((int)puVar4 + 1) = *(uint8_t *)((int)puVar3 + 1);
          puVar3 = (uint32_t *)((int)puVar3 + -3);
          puVar4 = (uint32_t *)((int)puVar4 - 3);
          if (7 < uVar1) {
            for (; uVar1 != 0; uVar1 = uVar1 - 1) {
              *puVar4 = *puVar3;
              puVar3 = puVar3 + -1;
              puVar4 = puVar4 + -1;
            }
            switch(uVar2) {
            case 0:
              return param_1;
            case 2:
              goto switchD_00404617_caseD_2;
            case 3:
              goto switchD_00404617_caseD_3;
            }
            goto switchD_00404617_caseD_1;
          }
        }
      }
    }
    switch(uVar1) {
    case 7:
      puVar4[7 - uVar1] = puVar3[7 - uVar1];
    case 6:
      puVar4[6 - uVar1] = puVar3[6 - uVar1];
    case 5:
      puVar4[5 - uVar1] = puVar3[5 - uVar1];
    case 4:
      puVar4[4 - uVar1] = puVar3[4 - uVar1];
    case 3:
      puVar4[3 - uVar1] = puVar3[3 - uVar1];
    case 2:
      puVar4[2 - uVar1] = puVar3[2 - uVar1];
    case 1:
      puVar4[1 - uVar1] = puVar3[1 - uVar1];
      puVar3 = puVar3 + -uVar1;
      puVar4 = puVar4 + -uVar1;
    }
    switch(uVar2) {
    case 1:
switchD_00404617_caseD_1:
      *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
      return param_1;
    case 2:
switchD_00404617_caseD_2:
      *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
      *(uint8_t *)((int)puVar4 + 2) = *(uint8_t *)((int)puVar3 + 2);
      return param_1;
    case 3:
switchD_00404617_caseD_3:
      *(uint8_t *)((int)puVar4 + 3) = *(uint8_t *)((int)puVar3 + 3);
      *(uint8_t *)((int)puVar4 + 2) = *(uint8_t *)((int)puVar3 + 2);
      *(uint8_t *)((int)puVar4 + 1) = *(uint8_t *)((int)puVar3 + 1);
      return param_1;
    }
switchD_00404617_caseD_0:
    return param_1;
  }
  puVar3 = param_1;
  if (((uint)param_1 & 3) == 0) {
    uVar1 = param_3 >> 2;
    uVar2 = param_3 & 3;
    if (7 < uVar1) {
      for (; uVar1 != 0; uVar1 = uVar1 - 1) {
        *puVar3 = *param_2;
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      switch(uVar2) {
      case 0:
        return param_1;
      case 2:
        goto switchD_00404495_caseD_2;
      case 3:
        goto switchD_00404495_caseD_3;
      }
      goto switchD_00404495_caseD_1;
    }
  }
  else {
    switch(param_3) {
    case 0:
      goto switchD_00404495_caseD_0;
    case 1:
      goto switchD_00404495_caseD_1;
    case 2:
      goto switchD_00404495_caseD_2;
    case 3:
      goto switchD_00404495_caseD_3;
    default:
      uVar1 = (param_3 - 4) + ((uint)param_1 & 3);
      switch((uint)param_1 & 3) {
      case 1:
        uVar2 = uVar1 & 3;
        *(uint8_t *)param_1 = *(uint8_t *)param_2;
        *(uint8_t *)((int)param_1 + 1) = *(uint8_t *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        *(uint8_t *)((int)param_1 + 2) = *(uint8_t *)((int)param_2 + 2);
        param_2 = (uint32_t *)((int)param_2 + 3);
        puVar3 = (uint32_t *)((int)param_1 + 3);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00404495_caseD_2;
          case 3:
            goto switchD_00404495_caseD_3;
          }
          goto switchD_00404495_caseD_1;
        }
        break;
      case 2:
        uVar2 = uVar1 & 3;
        *(uint8_t *)param_1 = *(uint8_t *)param_2;
        uVar1 = uVar1 >> 2;
        *(uint8_t *)((int)param_1 + 1) = *(uint8_t *)((int)param_2 + 1);
        param_2 = (uint32_t *)((int)param_2 + 2);
        puVar3 = (uint32_t *)((int)param_1 + 2);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00404495_caseD_2;
          case 3:
            goto switchD_00404495_caseD_3;
          }
          goto switchD_00404495_caseD_1;
        }
        break;
      case 3:
        uVar2 = uVar1 & 3;
        *(uint8_t *)param_1 = *(uint8_t *)param_2;
        param_2 = (uint32_t *)((int)param_2 + 1);
        uVar1 = uVar1 >> 2;
        puVar3 = (uint32_t *)((int)param_1 + 1);
        if (7 < uVar1) {
          for (; uVar1 != 0; uVar1 = uVar1 - 1) {
            *puVar3 = *param_2;
            param_2 = param_2 + 1;
            puVar3 = puVar3 + 1;
          }
          switch(uVar2) {
          case 0:
            return param_1;
          case 2:
            goto switchD_00404495_caseD_2;
          case 3:
            goto switchD_00404495_caseD_3;
          }
          goto switchD_00404495_caseD_1;
        }
      }
    }
  }
  switch(uVar1) {
  case 7:
    puVar3[uVar1 - 7] = param_2[uVar1 - 7];
  case 6:
    puVar3[uVar1 - 6] = param_2[uVar1 - 6];
  case 5:
    puVar3[uVar1 - 5] = param_2[uVar1 - 5];
  case 4:
    puVar3[uVar1 - 4] = param_2[uVar1 - 4];
  case 3:
    puVar3[uVar1 - 3] = param_2[uVar1 - 3];
  case 2:
    puVar3[uVar1 - 2] = param_2[uVar1 - 2];
  case 1:
    puVar3[uVar1 - 1] = param_2[uVar1 - 1];
    param_2 = param_2 + uVar1;
    puVar3 = puVar3 + uVar1;
  }
  switch(uVar2) {
  case 1:
switchD_00404495_caseD_1:
    *(uint8_t *)puVar3 = *(uint8_t *)param_2;
    return param_1;
  case 2:
switchD_00404495_caseD_2:
    *(uint8_t *)puVar3 = *(uint8_t *)param_2;
    *(uint8_t *)((int)puVar3 + 1) = *(uint8_t *)((int)param_2 + 1);
    return param_1;
  case 3:
switchD_00404495_caseD_3:
    *(uint8_t *)puVar3 = *(uint8_t *)param_2;
    *(uint8_t *)((int)puVar3 + 1) = *(uint8_t *)((int)param_2 + 1);
    *(uint8_t *)((int)puVar3 + 2) = *(uint8_t *)((int)param_2 + 2);
    return param_1;
  }
switchD_00404495_caseD_0:
  return param_1;
}



uint * __cdecl FUN_004047a0(uint *param_1,int *param_2)

{
  byte *pbVar1;
  int iVar2;
  uint *puVar3;
  uint dwBytes;
  int local_4;
  
  if ((int *)0xffffffe0 < param_2) {
    return (uint *)0x0;
  }
  if (param_2 == (int *)0x0) {
    dwBytes = 0x10;
  }
  else {
    dwBytes = (int)param_2 + 0xfU & 0xfffffff0;
  }
  FUN_00407250(9);
  pbVar1 = (byte *)FUN_00407670(param_1,&local_4,(uint *)&param_2);
  if (pbVar1 != (byte *)0x0) {
    puVar3 = (uint *)0x0;
    if (dwBytes <= DAT_00427d3c) {
      iVar2 = FUN_00407af0(local_4,param_2,pbVar1,dwBytes >> 4);
      if (iVar2 != 0) {
        puVar3 = param_1;
      }
    }
    FUN_004072d0(9);
    return puVar3;
  }
  FUN_004072d0(9);
  puVar3 = HeapReAlloc(DAT_0042c26c,0x10,param_1,dwBytes);
  return puVar3;
}



SIZE_T __cdecl FUN_00404850(uint *param_1)

{
  byte bVar1;
  byte *pbVar2;
  SIZE_T SVar3;
  uint local_8;
  uint32_t local_4;
  
  FUN_00407250(9);
  pbVar2 = (byte *)FUN_00407670(param_1,&local_4,&local_8);
  if (pbVar2 != (byte *)0x0) {
    bVar1 = *pbVar2;
    FUN_004072d0(9);
    return (uint)bVar1 << 4;
  }
  FUN_004072d0(9);
  SVar3 = HeapSize(DAT_0042c26c,0,param_1);
  return SVar3;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t __cdecl FUN_004048c0(int param_1)

{
  BYTE *pBVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  UINT CodePage;
  UINT *pUVar5;
  BOOL BVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  BYTE *pBVar11;
  byte *pbVar12;
  byte *pbVar13;
  uint32_t *puVar14;
  _cpinfo local_14;
  
  FUN_00407250(0x19);
  CodePage = FUN_00404af0(param_1);
  if (CodePage == DAT_0042aeb0) {
    FUN_004072d0(0x19);
    return 0;
  }
  if (CodePage == 0) {
    FUN_00404ba0();
    FUN_00404be0();
    FUN_004072d0(0x19);
    return 0;
  }
  iVar10 = 0;
  pUVar5 = &DAT_004257f8;
  do {
    if (*pUVar5 == CodePage) {
      puVar14 = &DAT_0042aca8;
      for (iVar9 = 0x40; iVar9 != 0; iVar9 = iVar9 + -1) {
        *puVar14 = 0;
        puVar14 = puVar14 + 1;
      }
      *(uint8_t *)puVar14 = 0;
      uVar7 = 0;
      iVar10 = iVar10 * 0x30;
      pbVar12 = (byte *)(iVar10 + 0x425808);
      do {
        bVar3 = *pbVar12;
        for (pbVar13 = pbVar12; (bVar3 != 0 && (bVar3 = pbVar13[1], bVar3 != 0));
            pbVar13 = pbVar13 + 2) {
          uVar8 = (uint)*pbVar13;
          if (uVar8 <= bVar3) {
            bVar4 = (&DAT_004257f0)[uVar7];
            do {
              pbVar2 = (byte *)((int)&DAT_0042aca8 + uVar8 + 1);
              *pbVar2 = *pbVar2 | bVar4;
              uVar8 = uVar8 + 1;
            } while (uVar8 <= bVar3);
          }
          bVar3 = pbVar13[2];
        }
        uVar7 = uVar7 + 1;
        pbVar12 = pbVar12 + 8;
      } while (uVar7 < 4);
      _DAT_0042c384 = 1;
      DAT_0042aeb0 = CodePage;
      DAT_0042aeb4 = FUN_00404b40(CodePage);
      _DAT_0042aeb8 = *(uint32_t *)(iVar10 + 0x4257fc);
      _DAT_0042aebc = *(uint32_t *)(iVar10 + 0x425800);
      _DAT_0042aec0 = *(uint32_t *)(iVar10 + 0x425804);
      goto LAB_00404a12;
    }
    pUVar5 = pUVar5 + 0xc;
    iVar10 = iVar10 + 1;
  } while (pUVar5 < &DAT_004258e8);
  BVar6 = GetCPInfo(CodePage,&local_14);
  if (BVar6 == 1) {
    puVar14 = &DAT_0042aca8;
    for (iVar10 = 0x40; iVar10 != 0; iVar10 = iVar10 + -1) {
      *puVar14 = 0;
      puVar14 = puVar14 + 1;
    }
    *(uint8_t *)puVar14 = 0;
    DAT_0042aeb4 = 0;
    if (local_14.MaxCharSize < 2) {
      _DAT_0042c384 = 0;
      DAT_0042aeb0 = CodePage;
    }
    else {
      DAT_0042aeb0 = CodePage;
      if (local_14.LeadByte[0] != '\0') {
        pBVar11 = local_14.LeadByte + 1;
        do {
          bVar3 = *pBVar11;
          if (bVar3 == 0) break;
          for (uVar7 = (uint)pBVar11[-1]; uVar7 <= bVar3; uVar7 = uVar7 + 1) {
            *(byte *)((int)&DAT_0042aca8 + uVar7 + 1) =
                 *(byte *)((int)&DAT_0042aca8 + uVar7 + 1) | 4;
          }
          pBVar1 = pBVar11 + 1;
          pBVar11 = pBVar11 + 2;
        } while (*pBVar1 != 0);
      }
      uVar7 = 1;
      do {
        *(byte *)((int)&DAT_0042aca8 + uVar7 + 1) = *(byte *)((int)&DAT_0042aca8 + uVar7 + 1) | 8;
        uVar7 = uVar7 + 1;
      } while (uVar7 < 0xff);
      DAT_0042aeb4 = FUN_00404b40(CodePage);
      _DAT_0042c384 = 1;
    }
    _DAT_0042aeb8 = 0;
    _DAT_0042aebc = 0;
    _DAT_0042aec0 = 0;
  }
  else {
    if (DAT_0042aec4 == 0) {
      FUN_004072d0(0x19);
      return 0xffffffff;
    }
    FUN_00404ba0();
  }
LAB_00404a12:
  FUN_00404be0();
  FUN_004072d0(0x19);
  return 0;
}



int __cdecl FUN_00404af0(int param_1)

{
  int iVar1;
  bool bVar2;
  
  if (param_1 == -2) {
    DAT_0042aec4 = 1;
                    // WARNING: Could not recover jumptable at 0x00404b0d. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetOEMCP();
    return iVar1;
  }
  if (param_1 == -3) {
    DAT_0042aec4 = 1;
                    // WARNING: Could not recover jumptable at 0x00404b22. Too many branches
                    // WARNING: Treating indirect jump as call
    iVar1 = GetACP();
    return iVar1;
  }
  bVar2 = param_1 == -4;
  if (bVar2) {
    param_1 = DAT_0042b0b8;
  }
  DAT_0042aec4 = (uint)bVar2;
  return param_1;
}



uint32_t __cdecl FUN_00404b40(uint32_t param_1)

{
  switch(param_1) {
  case 0x3a4:
    return 0x411;
  default:
    return 0;
  case 0x3a8:
    return 0x804;
  case 0x3b5:
    return 0x412;
  case 0x3b6:
    return 0x404;
  }
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_00404ba0(void)

{
  int iVar1;
  uint32_t *puVar2;
  
  puVar2 = &DAT_0042aca8;
  for (iVar1 = 0x40; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  *(uint8_t *)puVar2 = 0;
  DAT_0042aeb0 = 0;
  _DAT_0042c384 = 0;
  DAT_0042aeb4 = 0;
  _DAT_0042aeb8 = 0;
  _DAT_0042aebc = 0;
  _DAT_0042aec0 = 0;
  return;
}



void FUN_00404be0(void)

{
  BOOL BVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  BYTE *pBVar5;
  ushort *puVar6;
  CHAR *pCVar7;
  _cpinfo local_514;
  CHAR local_500 [256];
  WCHAR local_400 [128];
  WCHAR local_300 [128];
  WORD local_200 [256];
  
  BVar1 = GetCPInfo(DAT_0042aeb0,&local_514);
  if (BVar1 == 1) {
    uVar2 = 0;
    do {
      local_500[uVar2] = (CHAR)uVar2;
      uVar2 = uVar2 + 1;
    } while (uVar2 < 0x100);
    local_500[0] = ' ';
    if (local_514.LeadByte[0] != 0) {
      pBVar5 = local_514.LeadByte + 1;
      do {
        uVar2 = (uint)local_514.LeadByte[0];
        if (uVar2 <= *pBVar5) {
          uVar3 = (*pBVar5 - uVar2) + 1;
          uVar4 = uVar3 >> 2;
          pCVar7 = local_500 + uVar2;
          while (uVar4 != 0) {
            uVar4 = uVar4 - 1;
            builtin_memcpy(pCVar7,"    ",4);
            pCVar7 = pCVar7 + 4;
          }
          for (uVar3 = uVar3 & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
            *pCVar7 = ' ';
            pCVar7 = pCVar7 + 1;
          }
        }
        local_514.LeadByte[0] = pBVar5[1];
        pBVar5 = pBVar5 + 2;
      } while (local_514.LeadByte[0] != 0);
    }
    FUN_00408fe0(1,local_500,0x100,local_200,DAT_0042aeb0,DAT_0042aeb4,0);
    FUN_00407da0(DAT_0042aeb4,0x100,local_500,(LPCWSTR)0x100,local_400,0x100,DAT_0042aeb0,0);
    FUN_00407da0(DAT_0042aeb4,0x200,local_500,(LPCWSTR)0x100,local_300,0x100,DAT_0042aeb0,0);
    uVar2 = 0;
    puVar6 = local_200;
    do {
      if ((*puVar6 & 1) == 0) {
        if ((*puVar6 & 2) == 0) {
          (&DAT_0042adb0)[uVar2] = 0;
        }
        else {
          *(byte *)((int)&DAT_0042aca8 + uVar2 + 1) =
               *(byte *)((int)&DAT_0042aca8 + uVar2 + 1) | 0x20;
          (&DAT_0042adb0)[uVar2] = *(uint8_t *)((int)local_300 + uVar2);
        }
      }
      else {
        *(byte *)((int)&DAT_0042aca8 + uVar2 + 1) = *(byte *)((int)&DAT_0042aca8 + uVar2 + 1) | 0x10
        ;
        (&DAT_0042adb0)[uVar2] = *(uint8_t *)((int)local_400 + uVar2);
      }
      uVar2 = uVar2 + 1;
      puVar6 = puVar6 + 1;
    } while (uVar2 < 0x100);
    return;
  }
  uVar2 = 0;
  do {
    if ((uVar2 < 0x41) || (0x5a < uVar2)) {
      if ((uVar2 < 0x61) || (0x7a < uVar2)) {
        (&DAT_0042adb0)[uVar2] = 0;
      }
      else {
        *(byte *)((int)&DAT_0042aca8 + uVar2 + 1) = *(byte *)((int)&DAT_0042aca8 + uVar2 + 1) | 0x20
        ;
        (&DAT_0042adb0)[uVar2] = (char)uVar2 + -0x20;
      }
    }
    else {
      *(byte *)((int)&DAT_0042aca8 + uVar2 + 1) = *(byte *)((int)&DAT_0042aca8 + uVar2 + 1) | 0x10;
      (&DAT_0042adb0)[uVar2] = (char)uVar2 + ' ';
    }
    uVar2 = uVar2 + 1;
  } while (uVar2 < 0x100);
  return;
}



void FUN_00404dc0(void)

{
  FUN_004048c0(-3);
  return;
}



void __cdecl FUN_00404dd0(uint *param_1)

{
  DWORD *pDVar1;
  uint **ppuVar2;
  int iVar3;
  
  pDVar1 = FUN_00404e60();
  iVar3 = 0;
  *pDVar1 = (DWORD)param_1;
  ppuVar2 = (uint **)&DAT_004258e8;
  do {
    if (param_1 == *ppuVar2) {
      pDVar1 = FUN_00404e50();
      *pDVar1 = *(DWORD *)(iVar3 * 8 + 0x4258ec);
      return;
    }
    ppuVar2 = ppuVar2 + 2;
    iVar3 = iVar3 + 1;
  } while (ppuVar2 < &PTR_DAT_00425a50);
  if (((uint *)0x12 < param_1) && (param_1 < (uint *)0x25)) {
    pDVar1 = FUN_00404e50();
    *pDVar1 = 0xd;
    return;
  }
  if (((uint *)0xbb < param_1) && (param_1 < (uint *)0xcb)) {
    pDVar1 = FUN_00404e50();
    *pDVar1 = 8;
    return;
  }
  pDVar1 = FUN_00404e50();
  *pDVar1 = 0x16;
  return;
}



DWORD * FUN_00404e50(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_00406380();
  return pDVar1 + 2;
}



DWORD * FUN_00404e60(void)

{
  DWORD *pDVar1;
  
  pDVar1 = FUN_00406380();
  return pDVar1 + 3;
}



void __cdecl FUN_00404e70(int *param_1)

{
  FUN_00404e80(param_1,1);
  return;
}



int __cdecl FUN_00404e80(int *param_1,int param_2)

{
  int iVar1;
  tm *ptVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar6 = param_1;
  uVar3 = param_1[5];
  if ((int)uVar3 < 0x45) {
    return -1;
  }
  if (0x8b < (int)uVar3) {
    return -1;
  }
  iVar4 = param_1[4];
  if ((iVar4 < 0) || (0xb < iVar4)) {
    uVar3 = uVar3 + iVar4 / 0xc;
    iVar4 = iVar4 % 0xc;
    param_1[4] = iVar4;
    if (iVar4 < 0) {
      uVar3 = uVar3 - 1;
      param_1[4] = iVar4 + 0xc;
    }
    if ((int)uVar3 < 0x45) {
      return -1;
    }
    if (0x8b < (int)uVar3) {
      return -1;
    }
  }
  iVar4 = (&DAT_00428050)[param_1[4]];
  if (((uVar3 & 3) == 0) && (1 < param_1[4])) {
    iVar4 = iVar4 + 1;
  }
  iVar1 = param_1[3];
  iVar5 = uVar3 * 0x16d + -0x63df + iVar4 + ((int)(uVar3 - 1) >> 2);
  iVar4 = iVar5 + iVar1;
  if (iVar5 < 0) {
LAB_00404f30:
    if ((iVar1 < 0) && (-1 < iVar4)) {
      return -1;
    }
  }
  else {
    if ((-1 < iVar1) && (iVar4 < 0)) {
      return -1;
    }
    if (iVar5 < 0) goto LAB_00404f30;
  }
  iVar5 = iVar4 * 0x18;
  if (iVar4 != 0 && iVar5 / iVar4 != 0x18) {
    return -1;
  }
  iVar1 = param_1[2];
  iVar4 = iVar1 + iVar5;
  if (iVar5 < 0) {
LAB_00404f7b:
    if ((iVar1 < 0) && (-1 < iVar4)) {
      return -1;
    }
  }
  else {
    if ((-1 < iVar1) && (iVar4 < 0)) {
      return -1;
    }
    if (iVar5 < 0) goto LAB_00404f7b;
  }
  iVar5 = iVar4 * 0x3c;
  if (iVar4 != 0 && iVar5 / iVar4 != 0x3c) {
    return -1;
  }
  iVar1 = param_1[1];
  iVar4 = iVar1 + iVar5;
  if (iVar5 < 0) {
LAB_00404fca:
    if ((iVar1 < 0) && (-1 < iVar4)) {
      return -1;
    }
  }
  else {
    if ((-1 < iVar1) && (iVar4 < 0)) {
      return -1;
    }
    if (iVar5 < 0) goto LAB_00404fca;
  }
  iVar5 = iVar4 * 0x3c;
  if (iVar4 != 0 && iVar5 / iVar4 != 0x3c) {
    return -1;
  }
  iVar4 = *param_1;
  param_1 = (int *)(iVar4 + iVar5);
  if (-1 < iVar5) {
    if ((-1 < iVar4) && ((int)param_1 < 0)) {
      return -1;
    }
    if (-1 < iVar5) goto LAB_00405028;
  }
  if ((iVar4 < 0) && (-1 < (int)param_1)) {
    return -1;
  }
LAB_00405028:
  if (param_2 == 0) {
    ptVar2 = (tm *)FUN_004050c0((int *)&param_1);
    if (ptVar2 == (tm *)0x0) {
      return -1;
    }
  }
  else {
    FUN_00409160();
    param_1 = (int *)((int)param_1 + DAT_00427f60);
    ptVar2 = FUN_00405230((int *)&param_1);
    if (ptVar2 == (tm *)0x0) {
      return -1;
    }
    if ((0 < piVar6[8]) || ((piVar6[8] < 0 && (0 < ptVar2->tm_isdst)))) {
      param_1 = (int *)((int)param_1 + DAT_00427f68);
      ptVar2 = FUN_00405230((int *)&param_1);
      for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
        *piVar6 = ptVar2->tm_sec;
        ptVar2 = (tm *)&ptVar2->tm_min;
        piVar6 = piVar6 + 1;
      }
      return (int)param_1;
    }
  }
  for (iVar4 = 9; iVar4 != 0; iVar4 = iVar4 + -1) {
    *piVar6 = ptVar2->tm_sec;
    ptVar2 = (tm *)&ptVar2->tm_min;
    piVar6 = piVar6 + 1;
  }
  return (int)param_1;
}



int * __cdecl FUN_004050c0(int *param_1)

{
  bool bVar1;
  DWORD *pDVar2;
  DWORD DVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  uint32_t *puVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  bVar1 = false;
  iVar10 = *param_1;
  pDVar2 = FUN_00406380();
  if (iVar10 < 0) {
    return (int *)0x0;
  }
  if (pDVar2[0x10] == 0) {
    DVar3 = FUN_00403b50(0x24);
    pDVar2[0x10] = DVar3;
    piVar5 = (int *)&DAT_0042aee0;
    if (DVar3 == 0) goto LAB_004050ff;
  }
  piVar5 = (int *)pDVar2[0x10];
LAB_004050ff:
  iVar8 = iVar10 % 0x7861f80;
  iVar10 = (iVar10 / 0x7861f80) * 4;
  iVar4 = iVar10 + 0x46;
  iVar9 = iVar8;
  if (0x1e1337f < iVar8) {
    iVar9 = iVar8 + -0x1e13380;
    iVar4 = iVar10 + 0x47;
    if (0x1e1337f < iVar9) {
      iVar9 = iVar8 + -0x3c26700;
      iVar4 = iVar10 + 0x48;
      if (iVar9 < 0x1e28500) {
        bVar1 = true;
      }
      else {
        iVar4 = iVar10 + 0x49;
        iVar9 = iVar8 + -0x5a4ec00;
      }
    }
  }
  piVar5[5] = iVar4;
  piVar5[7] = iVar9 / 0x15180;
  puVar7 = (uint32_t *)&DAT_00428018;
  if (!bVar1) {
    puVar7 = &DAT_00428050;
  }
  piVar6 = puVar7 + 1;
  iVar4 = 1;
  iVar10 = *piVar6;
  while (iVar10 < piVar5[7]) {
    piVar6 = piVar6 + 1;
    iVar4 = iVar4 + 1;
    iVar10 = *piVar6;
  }
  piVar5[4] = iVar4 + -1;
  piVar5[3] = piVar5[7] - puVar7[iVar4 + -1];
  iVar10 = *param_1;
  piVar5[8] = 0;
  piVar5[6] = (iVar10 / 0x15180 + 4) % 7;
  piVar5[2] = (iVar9 % 0x15180) / 0xe10;
  iVar10 = (iVar9 % 0x15180) % 0xe10;
  piVar5[1] = iVar10 / 0x3c;
  *piVar5 = iVar10 % 0x3c;
  return piVar5;
}



tm * __cdecl FUN_00405230(int *param_1)

{
  int *piVar1;
  tm *ptVar2;
  int iVar3;
  int iVar4;
  
  piVar1 = param_1;
  if (*param_1 < 0) {
    return (tm *)0x0;
  }
  FUN_00409160();
  iVar3 = *piVar1;
  if ((iVar3 < 0x3f481) || (0x7ffc0b7e < iVar3)) {
    ptVar2 = (tm *)FUN_004050c0(piVar1);
    iVar4 = __isindst(ptVar2);
    iVar3 = ptVar2->tm_sec;
    if (iVar4 != 0) {
      iVar3 = iVar3 - DAT_00427f68;
    }
    param_1 = (int *)(iVar3 - DAT_00427f60);
    iVar3 = (int)param_1 % 0x3c;
    ptVar2->tm_sec = iVar3;
    if (iVar3 < 0) {
      ptVar2->tm_sec = iVar3 + 0x3c;
      param_1 = param_1 + -0xf;
    }
    param_1 = (int *)((int)param_1 / 0x3c + ptVar2->tm_min);
    iVar3 = (int)param_1 % 0x3c;
    ptVar2->tm_min = iVar3;
    if (iVar3 < 0) {
      ptVar2->tm_min = iVar3 + 0x3c;
      param_1 = param_1 + -0xf;
    }
    param_1 = (int *)((int)param_1 / 0x3c + ptVar2->tm_hour);
    iVar3 = (int)param_1 % 0x18;
    ptVar2->tm_hour = iVar3;
    if (iVar3 < 0) {
      ptVar2->tm_hour = iVar3 + 0x18;
      param_1 = param_1 + -6;
    }
    iVar3 = (int)param_1 / 0x18;
    if (0 < iVar3) {
      ptVar2->tm_wday = (iVar3 + ptVar2->tm_wday) % 7;
      ptVar2->tm_mday = ptVar2->tm_mday + iVar3;
      ptVar2->tm_yday = ptVar2->tm_yday + iVar3;
      return ptVar2;
    }
    if (iVar3 < 0) {
      ptVar2->tm_wday = (iVar3 + 7 + ptVar2->tm_wday) % 7;
      iVar4 = ptVar2->tm_mday + iVar3;
      ptVar2->tm_mday = iVar4;
      if (iVar4 < 1) {
        ptVar2->tm_yday = 0x16c;
        ptVar2->tm_mday = iVar4 + 0x1f;
        ptVar2->tm_mon = 0xb;
        ptVar2->tm_year = ptVar2->tm_year + -1;
        return ptVar2;
      }
      ptVar2->tm_yday = ptVar2->tm_yday + iVar3;
    }
  }
  else {
    param_1 = (int *)(iVar3 - DAT_00427f60);
    ptVar2 = (tm *)FUN_004050c0((int *)&param_1);
    if (DAT_00427f64 != 0) {
      iVar3 = __isindst(ptVar2);
      if (iVar3 != 0) {
        param_1 = (int *)((int)param_1 - DAT_00427f68);
        ptVar2 = (tm *)FUN_004050c0((int *)&param_1);
        ptVar2->tm_isdst = 1;
        return ptVar2;
      }
    }
  }
  return ptVar2;
}



uint __cdecl FUN_00405420(byte *param_1,uint32_t *param_2,uint param_3,uint param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  DWORD *pDVar4;
  byte bVar5;
  uint local_c;
  byte *local_8;
  uint local_4;
  
  local_4 = 0;
  bVar5 = *param_1;
  pbVar1 = param_1;
  while( true ) {
    local_c = (uint)bVar5;
    local_8 = pbVar1 + 1;
    if (DAT_00427f54 < 2) {
      uVar2 = (byte)PTR_DAT_00427d48[local_c * 2] & 8;
    }
    else {
      uVar2 = FUN_00408db0(local_c,8);
    }
    if (uVar2 == 0) break;
    bVar5 = *local_8;
    pbVar1 = local_8;
  }
  if (bVar5 == 0x2d) {
    param_4 = param_4 | 2;
  }
  else if (bVar5 != 0x2b) goto LAB_004054ab;
  bVar5 = *local_8;
  local_8 = pbVar1 + 2;
  local_c = (uint)bVar5;
LAB_004054ab:
  if ((((int)param_3 < 0) || (param_3 == 1)) || (0x24 < (int)param_3)) {
    if (param_2 != (uint32_t *)0x0) {
      *param_2 = param_1;
    }
    return 0;
  }
  if (param_3 == 0) {
    if (bVar5 == 0x30) {
      if ((*local_8 == 0x78) || (param_3 = 8, *local_8 == 0x58)) {
        param_3 = 0x10;
      }
    }
    else {
      param_3 = 10;
    }
  }
  if (((param_3 == 0x10) && (bVar5 == 0x30)) && ((*local_8 == 0x78 || (*local_8 == 0x58)))) {
    bVar5 = local_8[1];
    local_c = (uint)bVar5;
    local_8 = local_8 + 2;
  }
  uVar2 = (uint)(0xffffffff / (ulonglong)param_3);
  do {
    if (DAT_00427f54 < 2) {
      uVar3 = (byte)PTR_DAT_00427d48[local_c * 2] & 4;
    }
    else {
      uVar3 = FUN_00408db0(local_c,4);
    }
    if (uVar3 == 0) {
      if (DAT_00427f54 < 2) {
        uVar3 = *(ushort *)(PTR_DAT_00427d48 + local_c * 2) & 0x103;
      }
      else {
        uVar3 = FUN_00408db0(local_c,0x103);
      }
      if (uVar3 == 0) {
LAB_004055e4:
        local_8 = local_8 + -1;
        if ((param_4 & 8) == 0) {
          if (param_2 != (uint32_t *)0x0) {
            local_8 = param_1;
          }
          local_4 = 0;
        }
        else if (((param_4 & 4) != 0) ||
                (((param_4 & 1) == 0 &&
                 ((((param_4 & 2) != 0 && (0x80000000 < local_4)) ||
                  (((param_4 & 2) == 0 && (0x7fffffff < local_4)))))))) {
          pDVar4 = FUN_00404e50();
          *pDVar4 = 0x22;
          if ((param_4 & 1) == 0) {
            local_4 = ((param_4 & 2) != 0) + 0x7fffffff;
          }
          else {
            local_4 = 0xffffffff;
          }
        }
        if (param_2 != (uint32_t *)0x0) {
          *param_2 = local_8;
        }
        if ((param_4 & 2) != 0) {
          local_4 = -local_4;
        }
        return local_4;
      }
      uVar3 = FUN_00409990((int)(char)bVar5);
      uVar3 = uVar3 - 0x37;
    }
    else {
      uVar3 = (int)(char)bVar5 - 0x30;
    }
    if (param_3 <= uVar3) goto LAB_004055e4;
    if ((local_4 < uVar2) ||
       ((local_4 == uVar2 && (uVar3 <= (uint)(0xffffffff % (ulonglong)param_3))))) {
      local_4 = local_4 * param_3 + uVar3;
      param_4 = param_4 | 8;
    }
    else {
      param_4 = param_4 | 0xc;
    }
    bVar5 = *local_8;
    local_8 = local_8 + 1;
    local_c = (uint)bVar5;
  } while( true );
}



void __cdecl FUN_004056b0(byte *param_1,uint32_t *param_2,uint param_3)

{
  FUN_00405420(param_1,param_2,param_3,1);
  return;
}



int * __cdecl FUN_004056d0(int *param_1,uint param_2)

{
  int *piVar1;
  byte *pbVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int *local_8;
  int local_4;
  
  if (param_1 == (int *)0x0) {
    piVar1 = (int *)FUN_00403b50(param_2);
    return piVar1;
  }
  if (param_2 == 0) {
    FUN_004039d0((uint *)param_1);
    return (int *)0x0;
  }
  uVar4 = param_2;
  if (param_2 < 0xffffffe1) {
    if (param_2 == 0) {
      param_2 = 0x10;
      uVar4 = param_2;
    }
    else {
      param_2 = param_2 + 0xf & 0xfffffff0;
      uVar4 = param_2;
    }
  }
  do {
    piVar1 = (int *)0x0;
    if (uVar4 < 0xffffffe1) {
      FUN_00407250(9);
      pbVar2 = (byte *)FUN_00407670((uint *)param_1,&local_4,(uint *)&local_8);
      if (pbVar2 == (byte *)0x0) {
        FUN_004072d0(9);
        piVar1 = HeapReAlloc(DAT_0042c26c,0,param_1,uVar4);
      }
      else {
        if (uVar4 < DAT_00427d3c) {
          iVar3 = FUN_00407af0(local_4,local_8,pbVar2,uVar4 >> 4);
          piVar1 = param_1;
          if (iVar3 != 0) goto LAB_004057d5;
          piVar1 = FUN_00407730(uVar4 >> 4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_004076d0(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
            goto LAB_004057d5;
          }
LAB_004057d9:
          piVar1 = HeapAlloc(DAT_0042c26c,0,uVar4);
          if (piVar1 != (int *)0x0) {
            uVar5 = (uint)*pbVar2 << 4;
            if (uVar4 <= (uint)*pbVar2 << 4) {
              uVar5 = uVar4;
            }
            piVar6 = param_1;
            piVar7 = piVar1;
            for (uVar4 = uVar5 >> 2; uVar4 != 0; uVar4 = uVar4 - 1) {
              *piVar7 = *piVar6;
              piVar6 = piVar6 + 1;
              piVar7 = piVar7 + 1;
            }
            for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
              *(char *)piVar7 = (char)*piVar6;
              piVar6 = (int *)((int)piVar6 + 1);
              piVar7 = (int *)((int)piVar7 + 1);
            }
            FUN_004076d0(local_4,(int)local_8,pbVar2);
            uVar4 = param_2;
          }
        }
        else {
LAB_004057d5:
          if (piVar1 == (int *)0x0) goto LAB_004057d9;
        }
        FUN_004072d0(9);
      }
    }
    if ((piVar1 != (int *)0x0) || (DAT_0042b084 == 0)) {
      return piVar1;
    }
    iVar3 = FUN_00407c70(uVar4);
    if (iVar3 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



uint32_t __cdecl
FUN_00405880(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,uint32_t param_4,int *param_5,
            int param_6,PVOID param_7,char param_8)

{
  code *pcVar1;
  uint32_t uVar2;
  
  if (*param_5 != 0x19930520) {
    FUN_00406490();
  }
  if ((param_1->ExceptionFlags & 0x66) == 0) {
    if (param_5[3] != 0) {
      if (((param_1->ExceptionCode == 0xe06d7363) && (0x19930520 < param_1->ExceptionInformation[0])
          ) && (pcVar1 = *(code **)(param_1->ExceptionInformation[2] + 8), pcVar1 != (code *)0x0)) {
        uVar2 = (*pcVar1)(param_1,param_2,param_3,param_4,param_5,param_6,param_7,param_8);
        return uVar2;
      }
      FUN_00405950(param_1,param_2,param_3,param_4,(int)param_5,param_8,param_6,param_7);
    }
  }
  else if ((param_5[1] != 0) && (param_6 == 0)) {
    FUN_00405cf0((int)param_2,param_4,(int)param_5,-1);
    return 1;
  }
  return 1;
}



void __cdecl
FUN_00405950(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,uint32_t param_4,int param_5,
            char param_6,int param_7,PVOID param_8)

{
  byte bVar1;
  bool bVar2;
  DWORD *pDVar3;
  undefined3 extraout_var;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  byte *pbVar8;
  byte *pbVar9;
  uint local_20;
  int *local_1c;
  int local_18;
  int local_14;
  int local_10;
  uint local_c;
  int *local_8;
  int local_4;
  
  iVar7 = *(int *)((int)param_2 + 8);
  local_10 = iVar7;
  if ((iVar7 < -1) || (*(int *)(param_5 + 4) <= iVar7)) {
    FUN_00406490();
  }
  if (param_1->ExceptionCode == 0xe06d7363) {
    if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
       (param_1->ExceptionInformation[2] == 0)) {
      pDVar3 = FUN_00406380();
      if (pDVar3[0x1b] == 0) {
        return;
      }
      pDVar3 = FUN_00406380();
      param_1 = (PEXCEPTION_RECORD)pDVar3[0x1b];
      pDVar3 = FUN_00406380();
      param_3 = pDVar3[0x1c];
      bVar2 = FUN_00409b20(param_1,1);
      if (CONCAT31(extraout_var,bVar2) == 0) {
        FUN_00406490();
      }
      if (param_1->ExceptionCode != 0xe06d7363) goto LAB_00405bc6;
      if (((param_1->NumberParameters == 3) && (param_1->ExceptionInformation[0] == 0x19930520)) &&
         (param_1->ExceptionInformation[2] == 0)) {
        FUN_00406490();
      }
    }
    if (((param_1->ExceptionCode == 0xe06d7363) && (param_1->NumberParameters == 3)) &&
       (param_1->ExceptionInformation[0] == 0x19930520)) {
      local_1c = (int *)FUN_00403420(param_5,param_7,iVar7,&local_20,&local_c);
      if (local_20 < local_c) {
        do {
          if ((*local_1c <= iVar7) && (iVar7 <= local_1c[1])) {
            local_14 = local_1c[3];
            pbVar9 = (byte *)local_1c[4];
            if (0 < local_14) {
              piVar6 = *(int **)(param_1->ExceptionInformation[2] + 0xc);
              local_8 = piVar6 + 1;
              local_4 = *piVar6;
              do {
                local_18 = local_4;
                if (0 < local_4) {
                  iVar7 = *(int *)(pbVar9 + 4);
                  piVar6 = local_8;
                  do {
                    if ((iVar7 == 0) || (pbVar4 = (byte *)(iVar7 + 8), *(char *)(iVar7 + 8) == '\0')
                       ) {
LAB_00405b1f:
                      bVar2 = true;
                    }
                    else {
                      iVar5 = *(int *)((byte *)*piVar6 + 4);
                      if (iVar7 == iVar5) {
LAB_00405afa:
                        if (((((*(byte *)*piVar6 & 2) == 0) || ((*pbVar9 & 8) != 0)) &&
                            (((*(uint *)param_1->ExceptionInformation[2] & 1) == 0 ||
                             ((*pbVar9 & 1) != 0)))) &&
                           (((*(uint *)param_1->ExceptionInformation[2] & 2) == 0 ||
                            ((*pbVar9 & 2) != 0)))) goto LAB_00405b1f;
                        bVar2 = false;
                      }
                      else {
                        pbVar8 = (byte *)(iVar5 + 8);
                        do {
                          bVar1 = *pbVar4;
                          bVar2 = bVar1 < *pbVar8;
                          if (bVar1 != *pbVar8) {
LAB_00405add:
                            iVar5 = (1 - (uint)bVar2) - (uint)(bVar2 != 0);
                            goto LAB_00405ae2;
                          }
                          if (bVar1 == 0) break;
                          bVar1 = pbVar4[1];
                          bVar2 = bVar1 < pbVar8[1];
                          if (bVar1 != pbVar8[1]) goto LAB_00405add;
                          pbVar4 = pbVar4 + 2;
                          pbVar8 = pbVar8 + 2;
                        } while (bVar1 != 0);
                        iVar5 = 0;
LAB_00405ae2:
                        if (iVar5 == 0) goto LAB_00405afa;
                        bVar2 = false;
                      }
                    }
                    if (bVar2) {
                      FUN_00405dd0(param_1,param_2,param_3,param_4,param_5,pbVar9,(byte *)*piVar6,
                                   local_1c,param_7,param_8);
                      iVar7 = local_10;
                      goto LAB_00405b8f;
                    }
                    piVar6 = piVar6 + 1;
                    local_18 = local_18 + -1;
                  } while (0 < local_18);
                }
                local_14 = local_14 + -1;
                pbVar9 = pbVar9 + 0x10;
                iVar7 = local_10;
              } while (0 < local_14);
            }
          }
LAB_00405b8f:
          local_20 = local_20 + 1;
          local_1c = local_1c + 5;
        } while (local_20 < local_c);
      }
      if (param_6 == '\0') {
        return;
      }
      FUN_00406200((int)param_1);
      return;
    }
  }
LAB_00405bc6:
  if (param_6 != '\0') {
    FUN_00406400();
    return;
  }
  FUN_00405c10(param_1,param_2,param_3,param_4,param_5,iVar7,param_7,param_8);
  return;
}



void __cdecl
FUN_00405c10(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,uint32_t param_4,int param_5,
            int param_6,int param_7,PVOID param_8)

{
  DWORD *pDVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint local_8;
  uint local_4;
  
  pDVar1 = FUN_00406380();
  if ((pDVar1[0x1a] != 0) &&
     (iVar2 = FUN_004032c0(&param_1->ExceptionCode,param_2,param_3,param_4,param_5,param_7,param_8),
     iVar2 != 0)) {
    return;
  }
  piVar3 = (int *)FUN_00403420(param_5,param_7,param_6,&local_8,&local_4);
  if (local_8 < local_4) {
    do {
      if ((*piVar3 <= param_6) && (param_6 <= piVar3[1])) {
        iVar4 = piVar3[4] + piVar3[3] * 0x10;
        iVar2 = *(int *)(iVar4 + -0xc);
        if ((iVar2 == 0) || (*(char *)(iVar2 + 8) == '\0')) {
          FUN_00405dd0(param_1,param_2,param_3,param_4,param_5,(byte *)(iVar4 + -0x10),(byte *)0x0,
                       piVar3,param_7,param_8);
        }
      }
      local_8 = local_8 + 1;
      piVar3 = piVar3 + 5;
    } while (local_8 < local_4);
  }
  return;
}



void __cdecl FUN_00405cf0(int param_1,uint32_t param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  void *local_14;
  uint8_t *puStack_10;
  uint *puStack_c;
  uint32_t local_8;
  
  puStack_c = &DAT_004209f0;
  puStack_10 = &LAB_00406f28;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  for (iVar2 = *(int *)(param_1 + 8); local_8 = 0xffffffff, iVar2 != param_4;
      iVar2 = *(int *)(*(int *)(param_3 + 8) + iVar2 * 8)) {
    if ((iVar2 < 0) || (*(int *)(param_3 + 4) <= iVar2)) {
      FUN_00406490();
    }
    local_8 = 0;
    iVar1 = *(int *)(*(int *)(param_3 + 8) + 4 + iVar2 * 8);
    if (iVar1 != 0) {
      __CallSettingFrame_12(iVar1,param_1,0x103);
    }
  }
  *(int *)(param_1 + 8) = iVar2;
  ExceptionList = local_14;
  return;
}



void __cdecl
FUN_00405dd0(PEXCEPTION_RECORD param_1,PVOID param_2,DWORD param_3,uint32_t param_4,int param_5,
            byte *param_6,byte *param_7,int *param_8,int param_9,PVOID param_10)

{
  uint *UNRECOVERED_JUMPTABLE;
  
  if (param_7 != (byte *)0x0) {
    FUN_00405ff0((int)param_1,(int)param_2,param_6,param_7);
  }
  if (param_10 == (PVOID)0x0) {
    param_10 = param_2;
  }
  FUN_00403190(param_10,param_1);
  FUN_00405cf0((int)param_2,param_4,param_5,*param_8);
  *(int *)((int)param_2 + 8) = param_8[1] + 1;
  UNRECOVERED_JUMPTABLE =
       (uint *)
       FUN_00405e60((DWORD)param_1,param_2,param_3,param_5,*(uint32_t *)(param_6 + 0xc),param_9,
                    0x100);
  if (UNRECOVERED_JUMPTABLE != (uint *)0x0) {
    FUN_00403140(UNRECOVERED_JUMPTABLE);
  }
  return;
}



uint32_t __cdecl
FUN_00405e60(DWORD param_1,uint32_t param_2,DWORD param_3,uint32_t param_4,uint32_t param_5,
            int param_6,int param_7)

{
  DWORD *pDVar1;
  uint32_t uVar2;
  void *local_14;
  uint8_t *puStack_10;
  uint *puStack_c;
  uint32_t local_8;
  
  local_8 = 0xffffffff;
  puStack_c = &DAT_00420a00;
  puStack_10 = &LAB_00406f28;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  FUN_00406380();
  FUN_00406380();
  pDVar1 = FUN_00406380();
  pDVar1[0x1b] = param_1;
  pDVar1 = FUN_00406380();
  pDVar1[0x1c] = param_3;
  local_8 = 1;
  uVar2 = FUN_00403230(param_2,param_4,param_5,param_6,param_7);
  local_8 = 0xffffffff;
  FUN_00405f58();
  ExceptionList = local_14;
  return uVar2;
}



void FUN_00405f58(void)

{
  DWORD *pDVar1;
  int unaff_EBX;
  int unaff_EBP;
  int unaff_ESI;
  int *unaff_EDI;
  
  *(uint32_t *)(unaff_ESI + -4) = *(uint32_t *)(unaff_EBP + -0x28);
  pDVar1 = FUN_00406380();
  pDVar1[0x1b] = *(DWORD *)(unaff_EBP + -0x1c);
  pDVar1 = FUN_00406380();
  pDVar1[0x1c] = *(DWORD *)(unaff_EBP + -0x20);
  if ((((*unaff_EDI == -0x1f928c9d) && (unaff_EDI[4] == 3)) && (unaff_EDI[5] == 0x19930520)) &&
     ((*(int *)(unaff_EBP + -0x24) == 0 && (unaff_EBX != 0)))) {
    __abnormal_termination();
    FUN_00406200((int)unaff_EDI);
  }
  return;
}



void __cdecl FUN_00405ff0(int param_1,int param_2,byte *param_3,byte *param_4)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  int iVar3;
  undefined3 extraout_var_01;
  undefined3 extraout_var_02;
  undefined3 extraout_var_03;
  undefined3 extraout_var_04;
  uint32_t *puVar4;
  undefined3 extraout_var_05;
  undefined3 extraout_var_06;
  undefined3 extraout_var_07;
  uint uVar5;
  void *local_14;
  uint8_t *puStack_10;
  uint *puStack_c;
  uint32_t local_8;
  
  puStack_c = &DAT_00420a18;
  puStack_10 = &LAB_00406f28;
  local_14 = ExceptionList;
  if (((*(int *)(param_3 + 4) != 0) && (*(char *)(*(int *)(param_3 + 4) + 8) != '\0')) &&
     (*(int *)(param_3 + 8) != 0)) {
    piVar1 = (int *)(param_2 + 0xc + *(int *)(param_3 + 8));
    local_8 = 0;
    if ((*param_3 & 8) == 0) {
      if ((*param_4 & 1) == 0) {
        if (*(int *)(param_4 + 0x18) == 0) {
          ExceptionList = &local_14;
          bVar2 = FUN_00409b20(*(void **)(param_1 + 0x18),1);
          if ((CONCAT31(extraout_var_03,bVar2) != 0) &&
             (bVar2 = FUN_00409b40(piVar1,1), CONCAT31(extraout_var_04,bVar2) != 0)) {
            uVar5 = *(uint *)(param_4 + 0x14);
            puVar4 = (uint32_t *)FUN_00406280(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_00404460(piVar1,puVar4,uVar5);
            ExceptionList = local_14;
            return;
          }
        }
        else {
          ExceptionList = &local_14;
          bVar2 = FUN_00409b20(*(void **)(param_1 + 0x18),1);
          if (((CONCAT31(extraout_var_05,bVar2) != 0) &&
              (bVar2 = FUN_00409b40(piVar1,1), CONCAT31(extraout_var_06,bVar2) != 0)) &&
             (bVar2 = FUN_00409b60(*(FARPROC *)(param_4 + 0x18)),
             CONCAT31(extraout_var_07,bVar2) != 0)) {
            if ((*param_4 & 4) != 0) {
              FUN_00406280(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
              FUN_00403180(piVar1,*(uint **)(param_4 + 0x18));
              ExceptionList = local_14;
              return;
            }
            FUN_00406280(*(int *)(param_1 + 0x18),(int *)(param_4 + 8));
            FUN_00403180(piVar1,*(uint **)(param_4 + 0x18));
            ExceptionList = local_14;
            return;
          }
        }
      }
      else {
        ExceptionList = &local_14;
        bVar2 = FUN_00409b20(*(void **)(param_1 + 0x18),1);
        if ((CONCAT31(extraout_var_01,bVar2) != 0) &&
           (bVar2 = FUN_00409b40(piVar1,1), CONCAT31(extraout_var_02,bVar2) != 0)) {
          FUN_00404460(piVar1,*(uint32_t **)(param_1 + 0x18),*(uint *)(param_4 + 0x14));
          if (*(int *)(param_4 + 0x14) != 4) {
            ExceptionList = local_14;
            return;
          }
          if (*piVar1 == 0) {
            ExceptionList = local_14;
            return;
          }
          iVar3 = FUN_00406280(*piVar1,(int *)(param_4 + 8));
          *piVar1 = iVar3;
          ExceptionList = local_14;
          return;
        }
      }
    }
    else {
      ExceptionList = &local_14;
      bVar2 = FUN_00409b20(*(void **)(param_1 + 0x18),1);
      if ((CONCAT31(extraout_var,bVar2) != 0) &&
         (bVar2 = FUN_00409b40(piVar1,1), CONCAT31(extraout_var_00,bVar2) != 0)) {
        iVar3 = *(int *)(param_1 + 0x18);
        *piVar1 = iVar3;
        iVar3 = FUN_00406280(iVar3,(int *)(param_4 + 8));
        *piVar1 = iVar3;
        ExceptionList = local_14;
        return;
      }
    }
    FUN_00406490();
  }
  ExceptionList = local_14;
  return;
}



void __cdecl FUN_00406200(int param_1)

{
  uint *UNRECOVERED_JUMPTABLE;
  void *local_14;
  uint8_t *puStack_10;
  uint *puStack_c;
  uint32_t local_8;
  
  puStack_c = &DAT_00420a28;
  puStack_10 = &LAB_00406f28;
  local_14 = ExceptionList;
  if ((param_1 != 0) &&
     (UNRECOVERED_JUMPTABLE = *(uint **)(*(int *)(param_1 + 0x1c) + 4),
     UNRECOVERED_JUMPTABLE != (uint *)0x0)) {
    local_8 = 0;
    ExceptionList = &local_14;
    FUN_00403180(*(uint32_t *)(param_1 + 0x18),UNRECOVERED_JUMPTABLE);
  }
  ExceptionList = local_14;
  return;
}



int __cdecl FUN_00406280(int param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  
  iVar2 = param_1 + *param_2;
  iVar1 = param_2[1];
  if (-1 < iVar1) {
    iVar2 = iVar2 + *(int *)(*(int *)(param_1 + iVar1) + param_2[2]) + iVar1;
  }
  return iVar2;
}


uint32_t FUN_00406300(void)

{
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  FUN_00407220();
  DAT_00425b10 = TlsAlloc();
  if (DAT_00425b10 != 0xffffffff) {
    lpTlsValue = (DWORD *)FUN_00407bc0(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00425b10,lpTlsValue);
      if (BVar1 != 0) {
        FUN_00406360((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        return 1;
      }
    }
  }
  return 0;
}



void __cdecl FUN_00406360(int param_1)

{
  *(uint **)(param_1 + 0x50) = &DAT_00425b18;
  *(uint32_t *)(param_1 + 0x14) = 1;
  return;
}



DWORD * FUN_00406380(void)

{
  DWORD dwErrCode;
  DWORD *lpTlsValue;
  BOOL BVar1;
  DWORD DVar2;
  
  dwErrCode = GetLastError();
  lpTlsValue = TlsGetValue(DAT_00425b10);
  if (lpTlsValue == (DWORD *)0x0) {
    lpTlsValue = (DWORD *)FUN_00407bc0(1,0x74);
    if (lpTlsValue != (DWORD *)0x0) {
      BVar1 = TlsSetValue(DAT_00425b10,lpTlsValue);
      if (BVar1 != 0) {
        FUN_00406360((int)lpTlsValue);
        DVar2 = GetCurrentThreadId();
        *lpTlsValue = DVar2;
        lpTlsValue[1] = 0xffffffff;
        SetLastError(dwErrCode);
        return lpTlsValue;
      }
    }
    __amsg_exit(0x10);
  }
  SetLastError(dwErrCode);
  return lpTlsValue;
}



void FUN_00406400(void)

{
  DWORD *pDVar1;
  void *pvStack_14;
  uint8_t *puStack_10;
  uint *puStack_c;
  uint32_t local_8;
  
  puStack_c = &DAT_00420a38;
  puStack_10 = &LAB_00406f28;
  pvStack_14 = ExceptionList;
  local_8 = 0;
  ExceptionList = &pvStack_14;
  pDVar1 = FUN_00406380();
  if (pDVar1[0x18] != 0) {
    local_8 = 1;
    pDVar1 = FUN_00406380();
    (*(code *)pDVar1[0x18])();
  }
  local_8 = 0xffffffff;
                    // WARNING: Subroutine does not return
  _abort();
}



void __cdecl _abort(void)

{
                    // WARNING: Subroutine does not return
  _abort();
}



void FUN_00406490(void)

{
  void *local_14;
  uint8_t *puStack_10;
  uint *puStack_c;
  uint32_t local_8;
  
  puStack_c = &DAT_00420a50;
  puStack_10 = &LAB_00406f28;
  local_14 = ExceptionList;
  ExceptionList = &local_14;
  if (PTR_FUN_00425b14 != (uint *)0x0) {
    local_8 = 1;
    ExceptionList = &local_14;
    (*(code *)PTR_FUN_00425b14)();
  }
  local_8 = 0xffffffff;
  FUN_004064fe();
  ExceptionList = local_14;
  return;
}



void FUN_004064fe(void)

{
  FUN_00406400();
  return;
}



void __cdecl FUN_00406770(uint param_1)

{
  FUN_00406790(param_1,0,4);
  return;
}



uint32_t __cdecl FUN_00406790(uint param_1,uint param_2,byte param_3)

{
  uint uVar1;
  
  if ((*(byte *)((int)&DAT_0042aca8 + (param_1 & 0xff) + 1) & param_3) == 0) {
    if (param_2 == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = *(ushort *)(&DAT_00427d52 + (param_1 & 0xff) * 2) & param_2;
    }
    if (uVar1 == 0) {
      return 0;
    }
  }
  return 1;
}



void FUN_004067d0(void)

{
  char cVar1;
  char cVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  char *pcVar10;
  int *local_4;
  
  iVar8 = 0;
  cVar2 = *DAT_0042ac54;
  pcVar7 = DAT_0042ac54;
  while (cVar2 != '\0') {
    if (cVar2 != '=') {
      iVar8 = iVar8 + 1;
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar2 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar2 != '\0');
    pcVar9 = pcVar7 + ~uVar4;
    pcVar7 = pcVar7 + ~uVar4;
    cVar2 = *pcVar9;
  }
  piVar3 = (int *)FUN_00403b50(iVar8 * 4 + 4);
  DAT_0042ac80 = piVar3;
  if (piVar3 == (int *)0x0) {
    __amsg_exit(9);
  }
  cVar2 = *DAT_0042ac54;
  local_4 = piVar3;
  pcVar7 = DAT_0042ac54;
  do {
    if (cVar2 == '\0') {
      FUN_004039d0(DAT_0042ac54);
      DAT_0042ac54 = (char *)0x0;
      *piVar3 = 0;
      return;
    }
    uVar4 = 0xffffffff;
    pcVar9 = pcVar7;
    do {
      if (uVar4 == 0) break;
      uVar4 = uVar4 - 1;
      cVar1 = *pcVar9;
      pcVar9 = pcVar9 + 1;
    } while (cVar1 != '\0');
    uVar4 = ~uVar4;
    if (cVar2 != '=') {
      iVar8 = FUN_00403b50(uVar4);
      *piVar3 = iVar8;
      if (iVar8 == 0) {
        __amsg_exit(9);
      }
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        pcVar10 = pcVar9;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar10 = pcVar9 + 1;
        cVar2 = *pcVar9;
        pcVar9 = pcVar10;
      } while (cVar2 != '\0');
      uVar5 = ~uVar5;
      pcVar9 = pcVar10 + -uVar5;
      pcVar10 = (char *)*local_4;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint32_t *)pcVar10 = *(uint32_t *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar10 = pcVar10 + 4;
      }
      piVar3 = local_4 + 1;
      for (uVar5 = uVar5 & 3; local_4 = piVar3, uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar10 = *pcVar9;
        pcVar9 = pcVar9 + 1;
        pcVar10 = pcVar10 + 1;
      }
    }
    cVar2 = pcVar7[uVar4];
    pcVar7 = pcVar7 + uVar4;
  } while( true );
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_004068c0(void)

{
  uint32_t *puVar1;
  byte *pbVar2;
  int local_8;
  int local_4;
  
  GetModuleFileNameA((HMODULE)0x0,&DAT_0042af10,0x104);
  _DAT_0042ac90 = &DAT_0042af10;
  pbVar2 = DAT_0042c394;
  if (*DAT_0042c394 == 0) {
    pbVar2 = &DAT_0042af10;
  }
  FUN_00406960(pbVar2,(uint32_t *)0x0,(byte *)0x0,&local_8,&local_4);
  puVar1 = (uint32_t *)FUN_00403b50(local_4 + local_8 * 4);
  if (puVar1 == (uint32_t *)0x0) {
    __amsg_exit(8);
  }
  FUN_00406960(pbVar2,puVar1,(byte *)(puVar1 + local_8),&local_8,&local_4);
  _DAT_0042ac78 = puVar1;
  _DAT_0042ac74 = local_8 + -1;
  return;
}



void __cdecl FUN_00406960(byte *param_1,uint32_t *param_2,byte *param_3,int *param_4,int *param_5)

{
  byte *pbVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  int *piVar6;
  byte *pbVar7;
  uint uVar8;
  
  piVar6 = param_5;
  *param_5 = 0;
  *param_4 = 1;
  if (param_2 != (uint32_t *)0x0) {
    *param_2 = param_3;
    param_2 = param_2 + 1;
  }
  if (*param_1 == 0x22) {
    bVar2 = param_1[1];
    while ((pbVar7 = param_1 + 1, bVar2 != 0x22 && (bVar2 != 0))) {
      if (((*(byte *)((int)&DAT_0042aca8 + bVar2 + 1) & 4) != 0) &&
         (*param_5 = *param_5 + 1, param_3 != (byte *)0x0)) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        pbVar7 = param_1 + 2;
      }
      *param_5 = *param_5 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
      }
      param_1 = pbVar7;
      bVar2 = pbVar7[1];
    }
    *param_5 = *param_5 + 1;
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    if (*pbVar7 == 0x22) {
      pbVar7 = param_1 + 2;
    }
  }
  else {
    do {
      *piVar6 = *piVar6 + 1;
      if (param_3 != (byte *)0x0) {
        *param_3 = *param_1;
        param_3 = param_3 + 1;
      }
      bVar2 = *param_1;
      pbVar7 = param_1 + 1;
      param_5 = (int *)(uint)bVar2;
      if ((*(byte *)((int)param_5 + 0x42aca9) & 4) != 0) {
        *piVar6 = *piVar6 + 1;
        if (param_3 != (byte *)0x0) {
          *param_3 = *pbVar7;
          param_3 = param_3 + 1;
        }
        pbVar7 = param_1 + 2;
      }
      if (bVar2 == 0x20) break;
      if (bVar2 == 0) goto LAB_00406a39;
      param_1 = pbVar7;
    } while (bVar2 != 9);
    if (bVar2 == 0) {
LAB_00406a39:
      pbVar7 = pbVar7 + -1;
    }
    else if (param_3 != (byte *)0x0) {
      param_3[-1] = 0;
    }
  }
  bVar4 = false;
  bVar5 = false;
  while (*pbVar7 != 0) {
    for (; (*pbVar7 == 0x20 || (*pbVar7 == 9)); pbVar7 = pbVar7 + 1) {
    }
    if (*pbVar7 == 0) break;
    if (param_2 != (uint32_t *)0x0) {
      *param_2 = param_3;
      param_2 = param_2 + 1;
    }
    *param_4 = *param_4 + 1;
    while( true ) {
      uVar8 = 0;
      bVar3 = true;
      bVar2 = *pbVar7;
      while (bVar2 == 0x5c) {
        pbVar1 = pbVar7 + 1;
        pbVar7 = pbVar7 + 1;
        uVar8 = uVar8 + 1;
        bVar2 = *pbVar1;
      }
      if (*pbVar7 == 0x22) {
        if ((uVar8 & 1) == 0) {
          if ((bVar4) && (pbVar7[1] == 0x22)) {
            pbVar7 = pbVar7 + 1;
          }
          else {
            bVar3 = false;
          }
          bVar4 = !bVar5;
          bVar5 = bVar4;
        }
        uVar8 = uVar8 >> 1;
      }
      for (; uVar8 != 0; uVar8 = uVar8 - 1) {
        if (param_3 != (byte *)0x0) {
          *param_3 = 0x5c;
          param_3 = param_3 + 1;
        }
        *piVar6 = *piVar6 + 1;
      }
      bVar2 = *pbVar7;
      if ((bVar2 == 0) || ((!bVar4 && ((bVar2 == 0x20 || (bVar2 == 9)))))) break;
      if (bVar3) {
        if (param_3 == (byte *)0x0) {
          if ((*(byte *)((int)&DAT_0042aca8 + bVar2 + 1) & 4) != 0) {
            pbVar7 = pbVar7 + 1;
            *piVar6 = *piVar6 + 1;
          }
          *piVar6 = *piVar6 + 1;
          goto LAB_00406b35;
        }
        if ((*(byte *)((int)&DAT_0042aca8 + bVar2 + 1) & 4) != 0) {
          *param_3 = bVar2;
          param_3 = param_3 + 1;
          pbVar7 = pbVar7 + 1;
          *piVar6 = *piVar6 + 1;
        }
        *param_3 = *pbVar7;
        param_3 = param_3 + 1;
        *piVar6 = *piVar6 + 1;
        pbVar7 = pbVar7 + 1;
      }
      else {
LAB_00406b35:
        pbVar7 = pbVar7 + 1;
      }
    }
    if (param_3 != (byte *)0x0) {
      *param_3 = 0;
      param_3 = param_3 + 1;
    }
    *piVar6 = *piVar6 + 1;
  }
  if (param_2 != (uint32_t *)0x0) {
    *param_2 = 0;
  }
  *param_4 = *param_4 + 1;
  return;
}



LPSTR FUN_00406b70(void)

{
  char cVar1;
  WCHAR WVar2;
  WCHAR *pWVar3;
  int iVar5;
  uint uVar6;
  LPSTR pCVar7;
  LPCH pCVar8;
  LPCH pCVar9;
  LPCH pCVar10;
  LPWCH lpWideCharStr;
  CHAR *pCVar11;
  LPSTR pCVar12;
  WCHAR *pWVar4;
  
  lpWideCharStr = (LPWCH)0x0;
  pCVar10 = (LPCH)0x0;
  if (DAT_0042b018 == 0) {
    lpWideCharStr = GetEnvironmentStringsW();
    if (lpWideCharStr == (LPWCH)0x0) {
      pCVar10 = GetEnvironmentStrings();
      if (pCVar10 == (LPCH)0x0) {
        return (LPSTR)0x0;
      }
      DAT_0042b018 = 2;
    }
    else {
      DAT_0042b018 = 1;
    }
  }
  if (DAT_0042b018 == 1) {
    if ((lpWideCharStr != (LPWCH)0x0) ||
       (lpWideCharStr = GetEnvironmentStringsW(), lpWideCharStr != (LPWCH)0x0)) {
      WVar2 = *lpWideCharStr;
      pWVar3 = lpWideCharStr;
      while (WVar2 != L'\0') {
        do {
          pWVar4 = pWVar3;
          pWVar3 = pWVar4 + 1;
        } while (*pWVar3 != L'\0');
        pWVar3 = pWVar4 + 2;
        WVar2 = *pWVar3;
      }
      iVar5 = ((int)pWVar3 - (int)lpWideCharStr >> 1) + 1;
      uVar6 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
      if ((uVar6 != 0) && (pCVar7 = (LPSTR)FUN_00403b50(uVar6), pCVar7 != (LPSTR)0x0)) {
        iVar5 = WideCharToMultiByte(0,0,lpWideCharStr,iVar5,pCVar7,uVar6,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar5 == 0) {
          FUN_004039d0(pCVar7);
          pCVar7 = (LPSTR)0x0;
        }
        FreeEnvironmentStringsW(lpWideCharStr);
        return pCVar7;
      }
      FreeEnvironmentStringsW(lpWideCharStr);
      return (LPSTR)0x0;
    }
  }
  else if ((DAT_0042b018 == 2) &&
          ((pCVar10 != (LPCH)0x0 || (pCVar10 = GetEnvironmentStrings(), pCVar10 != (LPCH)0x0)))) {
    cVar1 = *pCVar10;
    pCVar9 = pCVar10;
    while (cVar1 != '\0') {
      do {
        pCVar8 = pCVar9;
        pCVar9 = pCVar8 + 1;
      } while (pCVar8[1] != '\0');
      pCVar9 = pCVar8 + 2;
      cVar1 = pCVar8[2];
    }
    pCVar9 = pCVar9 + (1 - (int)pCVar10);
    pCVar7 = (LPSTR)FUN_00403b50((uint)pCVar9);
    if (pCVar7 != (LPSTR)0x0) {
      pCVar11 = pCVar10;
      pCVar12 = pCVar7;
      for (uVar6 = (uint)pCVar9 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint32_t *)pCVar12 = *(uint32_t *)pCVar11;
        pCVar11 = pCVar11 + 4;
        pCVar12 = pCVar12 + 4;
      }
      for (uVar6 = (uint)pCVar9 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pCVar12 = *pCVar11;
        pCVar11 = pCVar11 + 1;
        pCVar12 = pCVar12 + 1;
      }
      FreeEnvironmentStringsA(pCVar10);
      return pCVar7;
    }
    FreeEnvironmentStringsA(pCVar10);
    return (LPSTR)0x0;
  }
  return (LPSTR)0x0;
}



void FUN_00406cd0(void)

{
  byte bVar1;
  uint32_t *puVar2;
  DWORD DVar3;
  HANDLE hFile;
  byte *pbVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  UINT *pUVar8;
  UINT local_48;
  _STARTUPINFOA local_44;
  
  puVar2 = (uint32_t *)FUN_00403b50(0x480);
  if (puVar2 == (uint32_t *)0x0) {
    __amsg_exit(0x1b);
  }
  DAT_0042c380 = 0x20;
  DAT_0042c280 = puVar2;
  if (puVar2 < puVar2 + 0x120) {
    do {
      *(uint8_t *)(puVar2 + 1) = 0;
      *puVar2 = 0xffffffff;
      *(uint8_t *)((int)puVar2 + 5) = 10;
      puVar2[2] = 0;
      puVar2 = puVar2 + 9;
    } while (puVar2 < DAT_0042c280 + 0x120);
  }
  GetStartupInfoA(&local_44);
  if ((local_44.cbReserved2 != 0) && ((UINT *)local_44.lpReserved2 != (UINT *)0x0)) {
    local_48 = *(UINT *)local_44.lpReserved2;
    pUVar8 = (UINT *)((int)local_44.lpReserved2 + 4);
    pbVar4 = (byte *)((int)pUVar8 + local_48);
    if (0x7ff < (int)local_48) {
      local_48 = 0x800;
    }
    if ((int)DAT_0042c380 < (int)local_48) {
      piVar6 = &DAT_0042c284;
      do {
        puVar2 = (uint32_t *)FUN_00403b50(0x480);
        if (puVar2 == (uint32_t *)0x0) {
          local_48 = DAT_0042c380;
          break;
        }
        *piVar6 = (int)puVar2;
        DAT_0042c380 = DAT_0042c380 + 0x20;
        if (puVar2 < puVar2 + 0x120) {
          do {
            *(uint8_t *)(puVar2 + 1) = 0;
            *puVar2 = 0xffffffff;
            *(uint8_t *)((int)puVar2 + 5) = 10;
            puVar2[2] = 0;
            puVar2 = puVar2 + 9;
          } while (puVar2 < (uint32_t *)(*piVar6 + 0x480));
        }
        piVar6 = piVar6 + 1;
      } while ((int)DAT_0042c380 < (int)local_48);
    }
    uVar7 = 0;
    if (0 < (int)local_48) {
      do {
        if (((*(HANDLE *)pbVar4 != (HANDLE)0xffffffff) && ((*pUVar8 & 1) != 0)) &&
           (((*pUVar8 & 8) != 0 || (DVar3 = GetFileType(*(HANDLE *)pbVar4), DVar3 != 0)))) {
          puVar2 = (uint32_t *)((int)(&DAT_0042c280)[(int)uVar7 >> 5] + (uVar7 & 0x1f) * 0x24);
          *puVar2 = *(uint32_t *)pbVar4;
          *(byte *)(puVar2 + 1) = (byte)*pUVar8;
        }
        uVar7 = uVar7 + 1;
        pUVar8 = (UINT *)((int)pUVar8 + 1);
        pbVar4 = pbVar4 + 4;
      } while ((int)uVar7 < (int)local_48);
    }
  }
  iVar5 = 0;
  do {
    puVar2 = DAT_0042c280 + iVar5 * 9;
    if (DAT_0042c280[iVar5 * 9] == -1) {
      *(uint8_t *)(puVar2 + 1) = 0x81;
      if (iVar5 == 0) {
        DVar3 = 0xfffffff6;
      }
      else {
        DVar3 = 0xfffffff5 - (iVar5 != 1);
      }
      hFile = GetStdHandle(DVar3);
      if ((hFile == (HANDLE)0xffffffff) || (DVar3 = GetFileType(hFile), DVar3 == 0)) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_00406ebe;
      }
      *puVar2 = hFile;
      if ((DVar3 & 0xff) == 2) {
        bVar1 = *(byte *)(puVar2 + 1) | 0x40;
        goto LAB_00406ebe;
      }
      if ((DVar3 & 0xff) == 3) {
        bVar1 = *(byte *)(puVar2 + 1) | 8;
        goto LAB_00406ebe;
      }
    }
    else {
      bVar1 = *(byte *)(puVar2 + 1) | 0x80;
LAB_00406ebe:
      *(byte *)(puVar2 + 1) = bVar1;
    }
    iVar5 = iVar5 + 1;
    if (2 < iVar5) {
      SetHandleCount(DAT_0042c380);
      return;
    }
  } while( true );
}



uint32_t FUN_00406ee0(void)

{
  uint **ppuVar1;
  
  DAT_0042c26c = HeapCreate(0,0x1000,0);
  if (DAT_0042c26c == (HANDLE)0x0) {
    return 0;
  }
  ppuVar1 = FUN_004073d0();
  if (ppuVar1 == (uint **)0x0) {
    HeapDestroy(DAT_0042c26c);
    return 0;
  }
  return 1;
}



void FUN_00406fe5(int param_1)

{
  __local_unwind2(*(int *)(param_1 + 0x18),*(int *)(param_1 + 0x1c));
  return;
}



void FUN_00407000(void)

{
  if ((DAT_0042ac5c == 1) || ((DAT_0042ac5c == 0 && (DAT_004257b8 == 1)))) {
    FUN_00407040(0xfc);
    if (DAT_0042b01c != (code *)0x0) {
      (*DAT_0042b01c)();
    }
    FUN_00407040(0xff);
  }
  return;
}



void __cdecl FUN_00407040(int param_1)

{
  char cVar1;
  int *piVar2;
  DWORD DVar3;
  HANDLE hFile;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  int iVar8;
  char *pcVar9;
  CHAR *pCVar10;
  char *pcVar11;
  DWORD local_1a8;
  char local_1a4 [100];
  char acStack_140 [60];
  CHAR local_104 [260];
  
  piVar2 = &DAT_00425bc8;
  iVar8 = 0;
  do {
    if (param_1 == *piVar2) break;
    piVar2 = piVar2 + 2;
    iVar8 = iVar8 + 1;
  } while (piVar2 < &DAT_00425c58);
  if (param_1 == (&DAT_00425bc8)[iVar8 * 2]) {
    if ((DAT_0042ac5c == 1) || ((DAT_0042ac5c == 0 && (DAT_004257b8 == 1)))) {
      if ((DAT_0042c280 == 0) ||
         (hFile = *(HANDLE *)(DAT_0042c280 + 0x48), hFile == (HANDLE)0xffffffff)) {
        hFile = GetStdHandle(0xfffffff4);
      }
      pcVar7 = *(char **)(iVar8 * 8 + 0x425bcc);
      uVar5 = 0xffffffff;
      pcVar9 = pcVar7;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      WriteFile(hFile,pcVar7,~uVar5 - 1,&local_1a8,(LPOVERLAPPED)0x0);
    }
    else if (param_1 != 0xfc) {
      DVar3 = GetModuleFileNameA((HMODULE)0x0,local_104,0x104);
      if (DVar3 == 0) {
        pcVar7 = "<program name unknown>";
        pCVar10 = local_104;
        for (iVar4 = 5; iVar4 != 0; iVar4 = iVar4 + -1) {
          *(uint32_t *)pCVar10 = *(uint32_t *)pcVar7;
          pcVar7 = pcVar7 + 4;
          pCVar10 = pCVar10 + 4;
        }
        *(undefined2 *)pCVar10 = *(undefined2 *)pcVar7;
        pCVar10[2] = pcVar7[2];
      }
      uVar5 = 0xffffffff;
      pcVar7 = local_104;
      pcVar9 = local_104;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar9;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 != '\0');
      if (0x3c < ~uVar5) {
        uVar5 = 0xffffffff;
        pcVar7 = local_104;
        do {
          if (uVar5 == 0) break;
          uVar5 = uVar5 - 1;
          cVar1 = *pcVar7;
          pcVar7 = pcVar7 + 1;
        } while (cVar1 != '\0');
        pcVar7 = acStack_140 + ~uVar5;
        _strncpy(pcVar7,"...",3);
      }
      pcVar9 = "Runtime Error!\n\nProgram: ";
      pcVar11 = local_1a4;
      for (iVar4 = 6; iVar4 != 0; iVar4 = iVar4 + -1) {
        *(uint32_t *)pcVar11 = *(uint32_t *)pcVar9;
        pcVar9 = pcVar9 + 4;
        pcVar11 = pcVar11 + 4;
      }
      *(undefined2 *)pcVar11 = *(undefined2 *)pcVar9;
      uVar5 = 0xffffffff;
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint32_t *)pcVar9 = *(uint32_t *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = "\n\n";
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar4 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar4 == 0) break;
        iVar4 = iVar4 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint32_t *)pcVar9 = *(uint32_t *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      uVar5 = 0xffffffff;
      pcVar7 = *(char **)(iVar8 * 8 + 0x425bcc);
      do {
        pcVar9 = pcVar7;
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        pcVar9 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar9;
      } while (cVar1 != '\0');
      uVar5 = ~uVar5;
      iVar8 = -1;
      pcVar7 = local_1a4;
      do {
        pcVar11 = pcVar7;
        if (iVar8 == 0) break;
        iVar8 = iVar8 + -1;
        pcVar11 = pcVar7 + 1;
        cVar1 = *pcVar7;
        pcVar7 = pcVar11;
      } while (cVar1 != '\0');
      pcVar7 = pcVar9 + -uVar5;
      pcVar9 = pcVar11 + -1;
      for (uVar6 = uVar5 >> 2; uVar6 != 0; uVar6 = uVar6 - 1) {
        *(uint32_t *)pcVar9 = *(uint32_t *)pcVar7;
        pcVar7 = pcVar7 + 4;
        pcVar9 = pcVar9 + 4;
      }
      for (uVar5 = uVar5 & 3; uVar5 != 0; uVar5 = uVar5 - 1) {
        *pcVar9 = *pcVar7;
        pcVar7 = pcVar7 + 1;
        pcVar9 = pcVar9 + 1;
      }
      FUN_00409ba0(local_1a4,"Microsoft Visual C++ Runtime Library",0x12010);
      return;
    }
  }
  return;
}



void FUN_00407220(void)

{
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_00425c9c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_00425c8c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_00425c7c);
  InitializeCriticalSection((LPCRITICAL_SECTION)PTR_DAT_00425c5c);
  return;
}



void __cdecl FUN_00407250(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  
  if (*(int *)(&DAT_00425c58 + param_1 * 4) == 0) {
    lpCriticalSection = (LPCRITICAL_SECTION)FUN_00403b50(0x18);
    if (lpCriticalSection == (LPCRITICAL_SECTION)0x0) {
      __amsg_exit(0x11);
    }
    FUN_00407250(0x11);
    if (*(int *)(&DAT_00425c58 + param_1 * 4) == 0) {
      InitializeCriticalSection(lpCriticalSection);
      *(LPCRITICAL_SECTION *)(&DAT_00425c58 + param_1 * 4) = lpCriticalSection;
    }
    else {
      FUN_004039d0((uint *)lpCriticalSection);
    }
    FUN_004072d0(0x11);
  }
  EnterCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_00425c58 + param_1 * 4));
  return;
}



void __cdecl FUN_004072d0(int param_1)

{
  LeaveCriticalSection(*(LPCRITICAL_SECTION *)(&DAT_00425c58 + param_1 * 4));
  return;
}



void __cdecl FUN_004072f0(uint param_1)

{
  if ((0x4281ef < param_1) && (param_1 < 0x428451)) {
    FUN_00407250(((int)(param_1 - 0x4281f0) >> 5) + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



void __cdecl FUN_00407330(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_00407250(param_1 + 0x1c);
    return;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



void __cdecl FUN_00407360(uint param_1)

{
  if ((0x4281ef < param_1) && (param_1 < 0x428451)) {
    FUN_004072d0(((int)(param_1 - 0x4281f0) >> 5) + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_1 + 0x20));
  return;
}



void __cdecl FUN_004073a0(int param_1,int param_2)

{
  if (param_1 < 0x14) {
    FUN_004072d0(param_1 + 0x1c);
    return;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)(param_2 + 0x20));
  return;
}



uint ** FUN_004073d0(void)

{
  bool bVar1;
  uint32_t *lpAddress;
  LPVOID pvVar2;
  int iVar3;
  uint **ppuVar4;
  uint **lpMem;
  uint32_t *puVar5;
  
  if (DAT_00425d28 == -1) {
    lpMem = &PTR_LOOP_00425d18;
  }
  else {
    lpMem = HeapAlloc(DAT_0042c26c,0,0x2020);
    if (lpMem == (uint **)0x0) {
      return (uint **)0x0;
    }
  }
  lpAddress = VirtualAlloc((LPVOID)0x0,0x400000,0x2000,4);
  if (lpAddress != (uint32_t *)0x0) {
    pvVar2 = VirtualAlloc(lpAddress,0x10000,0x1000,4);
    if (pvVar2 != (LPVOID)0x0) {
      if (lpMem == &PTR_LOOP_00425d18) {
        if (PTR_LOOP_00425d18 == (uint *)0x0) {
          PTR_LOOP_00425d18 = (uint *)&PTR_LOOP_00425d18;
        }
        if (PTR_LOOP_00425d1c == (uint *)0x0) {
          PTR_LOOP_00425d1c = (uint *)&PTR_LOOP_00425d18;
        }
      }
      else {
        *lpMem = (uint *)&PTR_LOOP_00425d18;
        lpMem[1] = PTR_LOOP_00425d1c;
        PTR_LOOP_00425d1c = (uint *)lpMem;
        *(uint ***)lpMem[1] = lpMem;
      }
      lpMem[5] = (uint *)(lpAddress + 0x100000);
      lpMem[4] = (uint *)lpAddress;
      lpMem[2] = (uint *)(lpMem + 6);
      lpMem[3] = (uint *)(lpMem + 0x26);
      iVar3 = 0;
      ppuVar4 = lpMem + 6;
      do {
        bVar1 = 0xf < iVar3;
        iVar3 = iVar3 + 1;
        *ppuVar4 = (uint *)((bVar1 - 1 & 0xf1) - 1);
        ppuVar4[1] = (uint *)0xf1;
        ppuVar4 = ppuVar4 + 2;
      } while (iVar3 < 0x400);
      puVar5 = lpAddress;
      for (iVar3 = 0x4000; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = 0;
        puVar5 = puVar5 + 1;
      }
      if (lpAddress < lpMem[4] + 0x10000) {
        do {
          lpAddress[1] = 0xf0;
          *lpAddress = lpAddress + 2;
          *(uint8_t *)(lpAddress + 0x3e) = 0xff;
          lpAddress = lpAddress + 0x400;
        } while (lpAddress < lpMem[4] + 0x10000);
      }
      return lpMem;
    }
    VirtualFree(lpAddress,0,0x8000);
  }
  if (lpMem != &PTR_LOOP_00425d18) {
    HeapFree(DAT_0042c26c,0,lpMem);
  }
  return (uint **)0x0;
}



void __cdecl FUN_00407540(uint **param_1)

{
  VirtualFree(param_1[4],0,0x8000);
  if ((uint **)PTR_LOOP_00427d38 == param_1) {
    PTR_LOOP_00427d38 = param_1[1];
  }
  if (param_1 != &PTR_LOOP_00425d18) {
    *(uint **)param_1[1] = *param_1;
    *(uint **)(*param_1 + 4) = param_1[1];
    HeapFree(DAT_0042c26c,0,param_1);
    return;
  }
  DAT_00425d28 = 0xffffffff;
  return;
}



void __cdecl FUN_004075a0(int param_1)

{
  BOOL BVar1;
  uint **ppuVar2;
  int iVar3;
  int iVar4;
  uint **ppuVar5;
  uint **ppuVar6;
  
  ppuVar6 = (uint **)PTR_LOOP_00425d1c;
  do {
    ppuVar5 = ppuVar6;
    if (ppuVar6[4] != (uint *)0xffffffff) {
      iVar4 = 0;
      ppuVar5 = ppuVar6 + 0x804;
      iVar3 = 0x3ff000;
      do {
        if (*ppuVar5 == (uint *)0xf0) {
          BVar1 = VirtualFree(ppuVar6[4] + iVar3,0x1000,0x4000);
          if (BVar1 != 0) {
            *ppuVar5 = (uint *)0xffffffff;
            DAT_0042b080 = DAT_0042b080 + -1;
            if (((uint **)ppuVar6[3] == (uint **)0x0) || (ppuVar5 < ppuVar6[3])) {
              ppuVar6[3] = (uint *)ppuVar5;
            }
            iVar4 = iVar4 + 1;
            param_1 = param_1 + -1;
            if (param_1 == 0) break;
          }
        }
        iVar3 = iVar3 + -0x1000;
        ppuVar5 = ppuVar5 + -2;
      } while (-1 < iVar3);
      ppuVar5 = (uint **)ppuVar6[1];
      if ((iVar4 != 0) && (ppuVar6[6] == (uint *)0xffffffff)) {
        iVar3 = 1;
        ppuVar2 = ppuVar6 + 8;
        do {
          if (*ppuVar2 != (uint *)0xffffffff) break;
          iVar3 = iVar3 + 1;
          ppuVar2 = ppuVar2 + 2;
        } while (iVar3 < 0x400);
        if (iVar3 == 0x400) {
          FUN_00407540(ppuVar6);
        }
      }
    }
    if ((ppuVar5 == (uint **)PTR_LOOP_00425d1c) || (ppuVar6 = ppuVar5, param_1 < 1)) {
      return;
    }
  } while( true );
}



int __cdecl FUN_00407670(uint *param_1,uint32_t *param_2,uint *param_3)

{
  uint **ppuVar1;
  uint uVar2;
  
  ppuVar1 = &PTR_LOOP_00425d18;
  while ((param_1 <= ppuVar1[4] || (ppuVar1[5] <= param_1))) {
    ppuVar1 = (uint **)*ppuVar1;
    if (ppuVar1 == &PTR_LOOP_00425d18) {
      return 0;
    }
  }
  if (((uint)param_1 & 0xf) != 0) {
    return 0;
  }
  if (((uint)param_1 & 0xfff) < 0x100) {
    return 0;
  }
  *param_2 = ppuVar1;
  uVar2 = (uint)param_1 & 0xfffff000;
  *param_3 = uVar2;
  return ((int)(param_1 + (-0x100 - uVar2)) >> 4) + 8 + uVar2;
}



void __cdecl FUN_004076d0(int param_1,int param_2,byte *param_3)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = param_2 - *(int *)(param_1 + 0x10) >> 0xc;
  piVar1 = (int *)(param_1 + 0x18 + iVar2 * 8);
  *piVar1 = *(int *)(param_1 + 0x18 + iVar2 * 8) + (uint)*param_3;
  *param_3 = 0;
  piVar1[1] = 0xf1;
  if ((*piVar1 == 0xf0) && (DAT_0042b080 = DAT_0042b080 + 1, DAT_0042b080 == 0x20)) {
    FUN_004075a0(0x10);
  }
  return;
}



int * __cdecl FUN_00407730(uint param_1)

{
  uint **ppuVar1;
  uint *puVar2;
  uint **ppuVar3;
  uint *puVar4;
  int *piVar5;
  uint **ppuVar6;
  uint **ppuVar7;
  int *piVar8;
  int iVar9;
  uint *puVar10;
  int *piVar11;
  bool bVar12;
  
  piVar11 = (int *)PTR_LOOP_00427d38;
  do {
    if (piVar11[4] != -1) {
      puVar10 = (uint *)piVar11[2];
      piVar8 = (int *)(((int)puVar10 + (-0x18 - (int)piVar11) >> 3) * 0x1000 + piVar11[4]);
      for (; puVar10 < piVar11 + 0x806; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_00407970(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_LOOP_00427d38 = (uint *)piVar11;
            *puVar10 = *puVar10 - param_1;
            piVar11[2] = (int)puVar10;
            return piVar5;
          }
          puVar10[1] = param_1;
        }
        piVar8 = piVar8 + 0x400;
      }
      puVar2 = (uint *)piVar11[2];
      piVar8 = (int *)piVar11[4];
      for (puVar10 = (uint *)(piVar11 + 6); puVar10 < puVar2; puVar10 = puVar10 + 2) {
        if (((int)param_1 <= (int)*puVar10) && (param_1 < puVar10[1])) {
          piVar5 = (int *)FUN_00407970(piVar8,*puVar10,param_1);
          if (piVar5 != (int *)0x0) {
            PTR_LOOP_00427d38 = (uint *)piVar11;
            *puVar10 = *puVar10 - param_1;
            piVar11[2] = (int)puVar10;
            return piVar5;
          }
          puVar10[1] = param_1;
        }
        piVar8 = piVar8 + 0x400;
      }
    }
    piVar11 = (int *)*piVar11;
  } while (piVar11 != (int *)PTR_LOOP_00427d38);
  ppuVar7 = &PTR_LOOP_00425d18;
  while ((ppuVar7[4] == (uint *)0xffffffff || (ppuVar7[3] == (uint *)0x0))) {
    ppuVar7 = (uint **)*ppuVar7;
    if (ppuVar7 == &PTR_LOOP_00425d18) {
      ppuVar7 = FUN_004073d0();
      if (ppuVar7 == (uint **)0x0) {
        return (int *)0x0;
      }
      piVar11 = (int *)ppuVar7[4];
      *(char *)(piVar11 + 2) = (char)param_1;
      PTR_LOOP_00427d38 = (uint *)ppuVar7;
      *piVar11 = (int)piVar11 + param_1 + 8;
      piVar11[1] = 0xf0 - param_1;
      ppuVar7[6] = ppuVar7[6] + -(param_1 & 0xff);
      return piVar11 + 0x40;
    }
  }
  ppuVar3 = (uint **)ppuVar7[3];
  puVar4 = *ppuVar3;
  piVar11 = (int *)(ppuVar7[4] + ((int)ppuVar3 + (-0x18 - (int)ppuVar7) >> 3) * 0x1000);
  ppuVar6 = ppuVar3;
  for (iVar9 = 0; (puVar4 == (uint *)0xffffffff && (iVar9 < 0x10)); iVar9 = iVar9 + 1) {
    puVar4 = ppuVar6[2];
    ppuVar6 = ppuVar6 + 2;
  }
  piVar8 = VirtualAlloc(piVar11,iVar9 << 0xc,0x1000,4);
  if (piVar8 != piVar11) {
    return (int *)0x0;
  }
  ppuVar6 = ppuVar3;
  if (0 < iVar9) {
    piVar8 = piVar11 + 1;
    do {
      *piVar8 = 0xf0;
      piVar8[-1] = (int)(piVar8 + 1);
      *(uint8_t *)(piVar8 + 0x3d) = 0xff;
      *ppuVar6 = (uint *)0xf0;
      ppuVar6[1] = (uint *)0xf1;
      piVar8 = piVar8 + 0x400;
      ppuVar6 = ppuVar6 + 2;
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  ppuVar1 = ppuVar7 + 0x806;
  bVar12 = false;
  if (ppuVar6 < ppuVar1) {
    do {
      if (*ppuVar6 == (uint *)0xffffffff) break;
      ppuVar6 = ppuVar6 + 2;
    } while (ppuVar6 < ppuVar1);
    bVar12 = ppuVar6 < ppuVar1;
  }
  PTR_LOOP_00427d38 = (uint *)ppuVar7;
  ppuVar7[3] = (uint *)(-(uint)bVar12 & (uint)ppuVar6);
  *(char *)(piVar11 + 2) = (char)param_1;
  ppuVar7[2] = (uint *)ppuVar3;
  *ppuVar3 = *ppuVar3 + -param_1;
  piVar11[1] = piVar11[1] - param_1;
  *piVar11 = (int)piVar11 + param_1 + 8;
  return piVar11 + 0x40;
}



int __cdecl FUN_00407970(int *param_1,uint param_2,uint param_3)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  uint uVar5;
  byte *pbVar6;
  
  pbVar2 = (byte *)*param_1;
  if (param_3 <= (uint)param_1[1]) {
    *pbVar2 = (byte)param_3;
    if (pbVar2 + param_3 < param_1 + 0x3e) {
      *param_1 = *param_1 + param_3;
      param_1[1] = param_1[1] - param_3;
    }
    else {
      param_1[1] = 0;
      *param_1 = (int)(param_1 + 2);
    }
    return (int)(pbVar2 + 8) * 0x10 + (int)param_1 * -0xf;
  }
  pbVar6 = pbVar2;
  if (pbVar2[param_1[1]] != 0) {
    pbVar6 = pbVar2 + param_1[1];
  }
  if (pbVar6 + param_3 < param_1 + 0x3e) {
    do {
      if (*pbVar6 == 0) {
        pbVar3 = pbVar6 + 1;
        uVar5 = 1;
        bVar1 = pbVar6[1];
        while (bVar1 == 0) {
          pbVar3 = pbVar3 + 1;
          uVar5 = uVar5 + 1;
          bVar1 = *pbVar3;
        }
        if (param_3 <= uVar5) {
          if (param_1 + 0x3e <= pbVar6 + param_3) {
            *param_1 = (int)(param_1 + 2);
            goto LAB_00407abf;
          }
          *param_1 = (int)(pbVar6 + param_3);
          param_1[1] = uVar5 - param_3;
          goto LAB_00407ac6;
        }
        if (pbVar6 == pbVar2) {
          param_1[1] = uVar5;
        }
        else {
          param_2 = param_2 - uVar5;
          if (param_2 < param_3) {
            return 0;
          }
        }
      }
      else {
        pbVar3 = pbVar6 + *pbVar6;
      }
      pbVar6 = pbVar3;
    } while (pbVar3 + param_3 < param_1 + 0x3e);
  }
  pbVar3 = (byte *)(param_1 + 2);
  pbVar6 = pbVar3;
  if (pbVar3 < pbVar2) {
    while (pbVar6 + param_3 < param_1 + 0x3e) {
      if (*pbVar6 == 0) {
        pbVar4 = pbVar6 + 1;
        uVar5 = 1;
        bVar1 = pbVar6[1];
        while (bVar1 == 0) {
          pbVar4 = pbVar4 + 1;
          uVar5 = uVar5 + 1;
          bVar1 = *pbVar4;
        }
        if (param_3 <= uVar5) {
          if (pbVar6 + param_3 < param_1 + 0x3e) {
            *param_1 = (int)(pbVar6 + param_3);
            param_1[1] = uVar5 - param_3;
          }
          else {
            *param_1 = (int)pbVar3;
LAB_00407abf:
            param_1[1] = 0;
          }
LAB_00407ac6:
          *pbVar6 = (byte)param_3;
          return (int)(pbVar6 + 8) * 0x10 + (int)param_1 * -0xf;
        }
        param_2 = param_2 - uVar5;
        if (param_2 < param_3) {
          return 0;
        }
      }
      else {
        pbVar4 = pbVar6 + *pbVar6;
      }
      pbVar6 = pbVar4;
      if (pbVar2 <= pbVar4) {
        return 0;
      }
    }
  }
  return 0;
}



uint32_t __cdecl FUN_00407af0(int param_1,int *param_2,byte *param_3,uint param_4)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  uint32_t uVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  
  uVar5 = 0;
  piVar3 = (int *)(param_1 + 0x18 + ((int)param_2 - *(int *)(param_1 + 0x10) >> 0xc) * 8);
  uVar7 = (uint)*param_3;
  if (uVar7 <= param_4) {
    if ((uVar7 < param_4) && (pbVar1 = param_3 + param_4, pbVar1 <= param_2 + 0x3e)) {
      for (pbVar8 = param_3 + uVar7; (pbVar8 < pbVar1 && (*pbVar8 == 0)); pbVar8 = pbVar8 + 1) {
      }
      if (pbVar8 == pbVar1) {
        *param_3 = (byte)param_4;
        if ((param_3 <= (byte *)*param_2) && ((byte *)*param_2 < pbVar1)) {
          if (pbVar1 < param_2 + 0x3e) {
            *param_2 = (int)pbVar1;
            iVar6 = 0;
            bVar4 = *pbVar1;
            while (bVar4 == 0) {
              iVar2 = iVar6 + 1;
              iVar6 = iVar6 + 1;
              bVar4 = pbVar1[iVar2];
            }
            param_2[1] = iVar6;
          }
          else {
            param_2[1] = 0;
            *param_2 = (int)(param_2 + 2);
          }
        }
        *piVar3 = *piVar3 + (uVar7 - param_4);
        uVar5 = 1;
      }
    }
    return uVar5;
  }
  *param_3 = (byte)param_4;
  piVar3[1] = 0xf1;
  *piVar3 = *piVar3 + (uVar7 - param_4);
  return 1;
}



int * __cdecl FUN_00407bc0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint dwBytes;
  int *piVar3;
  int *piVar4;
  
  dwBytes = param_2 * param_1;
  if (dwBytes < 0xffffffe1) {
    if (dwBytes == 0) {
      dwBytes = 0x10;
    }
    else {
      dwBytes = dwBytes + 0xf & 0xfffffff0;
    }
  }
  do {
    piVar3 = (int *)0x0;
    if (dwBytes < 0xffffffe1) {
      if (DAT_00427d3c < dwBytes) {
LAB_00407c34:
        if (piVar3 != (int *)0x0) {
          return piVar3;
        }
      }
      else {
        FUN_00407250(9);
        piVar3 = FUN_00407730(dwBytes >> 4);
        FUN_004072d0(9);
        if (piVar3 != (int *)0x0) {
          piVar4 = piVar3;
          for (uVar2 = dwBytes >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            *piVar4 = 0;
            piVar4 = piVar4 + 1;
          }
          for (uVar2 = dwBytes & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
            *(uint8_t *)piVar4 = 0;
            piVar4 = (int *)((int)piVar4 + 1);
          }
          goto LAB_00407c34;
        }
      }
      piVar3 = HeapAlloc(DAT_0042c26c,8,dwBytes);
    }
    if ((piVar3 != (int *)0x0) || (DAT_0042b084 == 0)) {
      return piVar3;
    }
    iVar1 = FUN_00407c70(dwBytes);
    if (iVar1 == 0) {
      return (int *)0x0;
    }
  } while( true );
}



uint32_t __cdecl FUN_00407c70(uint32_t param_1)

{
  int iVar1;
  
  if (DAT_0042b088 != (code *)0x0) {
    iVar1 = (*DAT_0042b088)(param_1);
    if (iVar1 != 0) {
      return 1;
    }
  }
  return 0;
}


int __cdecl
FUN_00407da0(LCID param_1,uint param_2,char *param_3,LPCWSTR param_4,LPWSTR param_5,int param_6,
            UINT param_7,int param_8)

{
  int iVar1;
  LPCWSTR cbMultiByte;
  LPCWSTR lpWideCharStr;
  int iVar2;
  
  if (DAT_0042b090 == 0) {
    iVar1 = LCMapStringW(0,0x100,L"",1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = LCMapStringA(0,0x100,"",1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_0042b090 = 2;
    }
    else {
      DAT_0042b090 = 1;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPCWSTR)FUN_0040c570(param_3,(int)param_4);
  }
  if (DAT_0042b090 == 2) {
    iVar1 = LCMapStringA(param_1,param_2,param_3,(int)cbMultiByte,(LPSTR)param_5,param_6);
    return iVar1;
  }
  if (DAT_0042b090 != 1) {
    return DAT_0042b090;
  }
  param_4 = (LPCWSTR)0x0;
  if (param_7 == 0) {
    param_7 = DAT_0042b0b8;
  }
  iVar1 = MultiByteToWideChar(param_7,(-(uint)(param_8 != 0) & 8) + 1,param_3,(int)cbMultiByte,
                              (LPWSTR)0x0,0);
  if (iVar1 == 0) {
    return 0;
  }
  lpWideCharStr = (LPCWSTR)FUN_00403b50(iVar1 * 2);
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  iVar2 = MultiByteToWideChar(param_7,1,param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
  if ((iVar2 != 0) &&
     (iVar2 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,(LPWSTR)0x0,0), iVar2 != 0)) {
    if ((param_2 & 0x400) == 0) {
      param_4 = (LPCWSTR)FUN_00403b50(iVar2 * 2);
      if ((param_4 == (LPCWSTR)0x0) ||
         (iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar2), iVar1 == 0))
      goto LAB_00407fa8;
      if (param_6 == 0) {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0
                                   );
        iVar1 = iVar2;
      }
      else {
        iVar2 = WideCharToMultiByte(param_7,0x220,param_4,iVar2,(LPSTR)param_5,param_6,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        iVar1 = iVar2;
      }
    }
    else {
      if (param_6 == 0) goto LAB_00407f0f;
      if (param_6 < iVar2) goto LAB_00407fa8;
      iVar1 = LCMapStringW(param_1,param_2,lpWideCharStr,iVar1,param_5,param_6);
    }
    if (iVar1 != 0) {
LAB_00407f0f:
      FUN_004039d0((uint *)lpWideCharStr);
      FUN_004039d0((uint *)param_4);
      return iVar2;
    }
  }
LAB_00407fa8:
  FUN_004039d0((uint *)lpWideCharStr);
  FUN_004039d0((uint *)param_4);
  return 0;
}



int FUN_00408000(int *param_1)

{
  int *piVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  
  piVar1 = (int *)*param_1;
  if (((*piVar1 == -0x1f928c9d) && (piVar1[4] == 3)) && (piVar1[5] == 0x19930520)) {
    FUN_00406400();
    return 1;
  }
  if (DAT_0042b094 != (FARPROC)0x0) {
    bVar2 = FUN_00409b60(DAT_0042b094);
    if (CONCAT31(extraout_var,bVar2) != 0) {
      iVar3 = (*DAT_0042b094)(param_1);
      return iVar3;
    }
  }
  return 0;
}


uint __cdecl FUN_004081c0(uint param_1,int *param_2)

{
  uint uVar1;
  char *pcVar2;
  int *piVar3;
  byte bVar4;
  undefined3 extraout_var;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  piVar3 = param_2;
  uVar7 = param_2[3];
  uVar1 = param_2[4];
  if (((uVar7 & 0x82) == 0) || ((uVar7 & 0x40) != 0)) {
LAB_004082e3:
    param_2[3] = uVar7 | 0x20;
    return 0xffffffff;
  }
  uVar6 = 0;
  if ((uVar7 & 1) != 0) {
    param_2[1] = 0;
    if ((uVar7 & 0x10) == 0) goto LAB_004082e3;
    *param_2 = param_2[2];
    param_2[3] = uVar7 & 0xfffffffe;
  }
  uVar7 = param_2[3];
  param_2[1] = 0;
  param_2[3] = uVar7 & 0xffffffef | 2;
  if ((uVar7 & 0x10c) == 0) {
    if ((param_2 == (int *)&DAT_00428210) || (param_2 == (int *)&DAT_00428230)) {
      bVar4 = FUN_0040a200(uVar1);
      if (CONCAT31(extraout_var,bVar4) != 0) goto LAB_00408233;
    }
    FUN_0040a1a0(piVar3);
  }
LAB_00408233:
  if ((piVar3[3] & 0x108U) == 0) {
    uVar7 = 1;
    uVar6 = FUN_00409f10(uVar1,(char *)&param_1,1);
  }
  else {
    pcVar2 = (char *)piVar3[2];
    uVar7 = *piVar3 - (int)pcVar2;
    *piVar3 = (int)(pcVar2 + 1);
    piVar3[1] = piVar3[6] + -1;
    if ((int)uVar7 < 1) {
      if (uVar1 == 0xffffffff) {
        puVar5 = &DAT_00425ba0;
      }
      else {
        puVar5 = (uint *)((&DAT_0042c280)[(int)uVar1 >> 5] + (uVar1 & 0x1f) * 0x24);
      }
      if ((puVar5[4] & 0x20) != 0) {
        FUN_00409e10(uVar1,0,2);
      }
      *(uint8_t *)piVar3[2] = (uint8_t)param_1;
    }
    else {
      uVar6 = FUN_00409f10(uVar1,pcVar2,uVar7);
      *(uint8_t *)piVar3[2] = (uint8_t)param_1;
    }
  }
  if (uVar6 != uVar7) {
    piVar3[3] = piVar3[3] | 0x20;
    return 0xffffffff;
  }
  return param_1 & 0xff;
}



int __cdecl FUN_004082f0(int *param_1,char *param_2,uint32_t *param_3)

{
  WCHAR WVar1;
  uint uVar2;
  short *psVar3;
  int *piVar4;
  uint32_t uVar5;
  WCHAR *pWVar6;
  int iVar7;
  char cVar8;
  uint8_t *puVar9;
  uint8_t *puVar10;
  char *pcVar11;
  int iVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  longlong lVar15;
  uint uVar16;
  uint local_24c;
  WCHAR *local_248;
  int local_244;
  int local_240;
  char local_23a;
  char local_239;
  int local_238;
  int local_234;
  int local_230;
  uint local_22c;
  int local_228;
  int local_224;
  int local_220;
  uint local_21c;
  uint32_t local_218;
  CHAR local_214 [4];
  uint32_t local_210;
  uint32_t local_20c;
  uint local_204;
  uint8_t local_200 [511];
  uint8_t uStack_1;
  
  local_220 = 0;
  puVar10 = (uint8_t *)0x0;
  local_240 = 0;
  cVar8 = *param_2;
  local_21c = CONCAT31(local_21c._1_3_,cVar8);
  pcVar11 = param_2;
  do {
    if ((cVar8 == '\0') || (param_2 = pcVar11 + 1, local_240 < 0)) {
      return local_240;
    }
    if ((cVar8 < ' ') || ('x' < cVar8)) {
      uVar2 = 0;
    }
    else {
      uVar2 = (byte)"<program name unknown>"[cVar8] & 0xf;
    }
    local_220 = (int)(char)(&DAT_00420d60)[uVar2 * 8 + local_220] >> 4;
    switch(local_220) {
    case 0:
switchD_0040836d_caseD_0:
      local_230 = 0;
      if ((PTR_DAT_00427d48[(local_21c & 0xff) * 2 + 1] & 0x80) != 0) {
        FUN_00408c80((int)cVar8,param_1,&local_240);
        cVar8 = *param_2;
        param_2 = pcVar11 + 2;
      }
      FUN_00408c80((int)cVar8,param_1,&local_240);
      break;
    case 1:
      local_218 = 0;
      local_228 = 0;
      local_234 = 0;
      local_238 = 0;
      local_24c = 0;
      local_244 = -1;
      local_230 = 0;
      break;
    case 2:
      switch(cVar8) {
      case ' ':
        local_24c = local_24c | 2;
        break;
      case '#':
        local_24c = local_24c | 0x80;
        break;
      case '+':
        local_24c = local_24c | 1;
        break;
      case '-':
        local_24c = local_24c | 4;
        break;
      case '0':
        local_24c = local_24c | 8;
      }
      break;
    case 3:
      if (cVar8 == '*') {
        local_234 = FUN_00408d50((int *)&param_3);
        if (local_234 < 0) {
          local_24c = local_24c | 4;
          local_234 = -local_234;
        }
      }
      else {
        local_234 = cVar8 + -0x30 + local_234 * 10;
      }
      break;
    case 4:
      local_244 = 0;
      break;
    case 5:
      if (cVar8 == '*') {
        local_244 = FUN_00408d50((int *)&param_3);
        if (local_244 < 0) {
          local_244 = -1;
        }
      }
      else {
        local_244 = cVar8 + -0x30 + local_244 * 10;
      }
      break;
    case 6:
      switch(cVar8) {
      case 'I':
        if ((*param_2 != '6') || (pcVar11[2] != '4')) {
          local_220 = 0;
          goto switchD_0040836d_caseD_0;
        }
        param_2 = pcVar11 + 3;
        local_24c = local_24c | 0x8000;
        break;
      case 'h':
        local_24c = local_24c | 0x20;
        break;
      case 'l':
        local_24c = local_24c | 0x10;
        break;
      case 'w':
        local_24c = local_24c | 0x800;
      }
      break;
    case 7:
      switch(cVar8) {
      case 'C':
        if ((local_24c & 0x830) == 0) {
          local_24c = local_24c | 0x800;
        }
      case 'c':
        if ((local_24c & 0x810) == 0) {
          uVar5 = FUN_00408d50((int *)&param_3);
          local_200[0] = (char)uVar5;
          puVar10 = (uint8_t *)0x1;
        }
        else {
          uVar5 = FUN_00408d90(&param_3);
          puVar10 = (uint8_t *)FUN_0040a230(local_200,(WCHAR)uVar5);
          if ((int)puVar10 < 0) {
            local_248 = (WCHAR *)local_200;
            local_228 = 1;
            break;
          }
        }
        local_248 = (WCHAR *)local_200;
        break;
      case 'E':
      case 'G':
        local_218 = 1;
        cVar8 = cVar8 + ' ';
      case 'e':
      case 'f':
      case 'g':
        local_248 = (WCHAR *)local_200;
        if (local_244 < 0) {
          local_244 = 6;
        }
        else if ((local_244 == 0) && (cVar8 == 'g')) {
          local_244 = 1;
        }
        local_210 = *param_3;
        local_20c = param_3[1];
        param_3 = param_3 + 2;
        (*(code *)PTR_FUN_00428470)(&local_210,local_200,(int)cVar8,local_244,local_218);
        if (((local_24c & 0x80) != 0) && (local_244 == 0)) {
          (*(code *)PTR_FUN_0042847c)(local_200);
        }
        if ((cVar8 == 'g') && ((local_24c & 0x80) == 0)) {
          (*(code *)PTR_FUN_00428474)(local_200);
        }
        uVar2 = local_24c | 0x40;
        if (local_200[0] == '-') {
          local_248 = (WCHAR *)(local_200 + 1);
          uVar2 = local_24c | 0x140;
        }
        local_24c = uVar2;
        uVar2 = 0xffffffff;
        pWVar6 = local_248;
        do {
          if (uVar2 == 0) break;
          uVar2 = uVar2 - 1;
          WVar1 = *pWVar6;
          pWVar6 = (WCHAR *)((int)pWVar6 + 1);
        } while ((char)WVar1 != '\0');
        puVar10 = (uint8_t *)(~uVar2 - 1);
        break;
      case 'S':
        if ((local_24c & 0x830) == 0) {
          local_24c = local_24c | 0x800;
        }
      case 's':
        iVar12 = 0x7fffffff;
        if (local_244 != -1) {
          iVar12 = local_244;
        }
        local_248 = (WCHAR *)FUN_00408d50((int *)&param_3);
        if ((local_24c & 0x810) == 0) {
          pWVar6 = local_248;
          if (local_248 == (WCHAR *)0x0) {
            pWVar6 = (WCHAR *)PTR_DAT_00427d40;
            local_248 = (WCHAR *)PTR_DAT_00427d40;
          }
          for (; (iVar12 != 0 && (iVar12 = iVar12 + -1, (char)*pWVar6 != '\0'));
              pWVar6 = (WCHAR *)((int)pWVar6 + 1)) {
          }
          puVar10 = (uint8_t *)((int)pWVar6 - (int)local_248);
        }
        else {
          if (local_248 == (WCHAR *)0x0) {
            local_248 = (WCHAR *)PTR_DAT_00427d44;
          }
          local_230 = 1;
          for (pWVar6 = local_248; (iVar12 != 0 && (iVar12 = iVar12 + -1, *pWVar6 != L'\0'));
              pWVar6 = pWVar6 + 1) {
          }
          puVar10 = (uint8_t *)((int)pWVar6 - (int)local_248 >> 1);
        }
        break;
      case 'X':
        goto switchD_00408581_caseD_58;
      case 'Z':
        psVar3 = (short *)FUN_00408d50((int *)&param_3);
        if ((psVar3 == (short *)0x0) ||
           (local_248 = *(WCHAR **)(psVar3 + 2), local_248 == (WCHAR *)0x0)) {
          uVar2 = 0xffffffff;
          local_248 = (WCHAR *)PTR_DAT_00427d40;
          pcVar11 = PTR_DAT_00427d40;
          do {
            if (uVar2 == 0) break;
            uVar2 = uVar2 - 1;
            cVar8 = *pcVar11;
            pcVar11 = pcVar11 + 1;
          } while (cVar8 != '\0');
          puVar10 = (uint8_t *)(~uVar2 - 1);
        }
        else if ((local_24c & 0x800) == 0) {
          puVar10 = (uint8_t *)(int)*psVar3;
          local_230 = 0;
        }
        else {
          local_230 = 1;
          puVar10 = (uint8_t *)((uint)(int)*psVar3 >> 1);
        }
        break;
      case 'd':
      case 'i':
        local_22c = 10;
        local_24c = local_24c | 0x40;
        goto LAB_004088b7;
      case 'n':
        piVar4 = (int *)FUN_00408d50((int *)&param_3);
        if ((local_24c & 0x20) == 0) {
          local_228 = 1;
          *piVar4 = local_240;
        }
        else {
          local_228 = 1;
          *(undefined2 *)piVar4 = (undefined2)local_240;
        }
        break;
      case 'o':
        local_22c = 8;
        if ((local_24c & 0x80) != 0) {
          local_24c = local_24c | 0x200;
        }
        goto LAB_004088b7;
      case 'p':
        local_244 = 8;
switchD_00408581_caseD_58:
        local_224 = 7;
LAB_00408872:
        local_22c = 0x10;
        if ((local_24c & 0x80) != 0) {
          local_23a = '0';
          local_239 = (char)local_224 + 'Q';
          local_238 = 2;
        }
        goto LAB_004088b7;
      case 'u':
        local_22c = 10;
LAB_004088b7:
        if ((local_24c & 0x8000) == 0) {
          if ((local_24c & 0x20) == 0) {
            if ((local_24c & 0x40) == 0) {
              uVar2 = FUN_00408d50((int *)&param_3);
              uVar13 = (ulonglong)uVar2;
            }
            else {
              iVar12 = FUN_00408d50((int *)&param_3);
              uVar13 = (ulonglong)iVar12;
            }
          }
          else if ((local_24c & 0x40) == 0) {
            uVar2 = FUN_00408d50((int *)&param_3);
            uVar13 = (ulonglong)uVar2 & 0xffffffff0000ffff;
          }
          else {
            uVar5 = FUN_00408d50((int *)&param_3);
            uVar13 = (ulonglong)(int)(short)uVar5;
          }
        }
        else {
          uVar13 = FUN_00408d70((int *)&param_3);
        }
        iVar12 = (int)(uVar13 >> 0x20);
        if ((((local_24c & 0x40) != 0) && (iVar12 == 0 || (longlong)uVar13 < 0)) &&
           ((longlong)uVar13 < 0)) {
          local_24c = local_24c | 0x100;
          uVar13 = CONCAT44(-(iVar12 + (uint)((int)uVar13 != 0)),-(int)uVar13);
        }
        iVar12 = (int)(uVar13 >> 0x20);
        if ((local_24c & 0x8000) == 0) {
          iVar12 = 0;
        }
        lVar15 = CONCAT44(iVar12,(int)uVar13);
        if (local_244 < 0) {
          local_244 = 1;
        }
        else {
          local_24c = local_24c & 0xfffffff7;
        }
        local_248 = (WCHAR *)register0x00000010;
        if ((int)uVar13 == 0 && iVar12 == 0) {
          local_238 = 0;
        }
        while( true ) {
          uVar2 = local_22c;
          pWVar6 = (WCHAR *)((int)local_248 + -1);
          iVar12 = local_244 + -1;
          if ((local_244 < 1) && (lVar15 == 0)) break;
          local_204 = (int)local_22c >> 0x1f;
          uVar16 = (uint)((ulonglong)lVar15 >> 0x20);
          uVar14 = __aullrem((uint)lVar15,uVar16,local_22c,local_204);
          iVar7 = (int)uVar14 + 0x30;
          lVar15 = __aulldiv((uint)lVar15,uVar16,uVar2,local_204);
          if (0x39 < iVar7) {
            iVar7 = iVar7 + local_224;
          }
          *(char *)pWVar6 = (char)iVar7;
          local_244 = iVar12;
          local_248 = pWVar6;
        }
        puVar10 = &uStack_1 + -(int)pWVar6;
        local_244 = iVar12;
        if (((local_24c & 0x200) != 0) &&
           (((char)*local_248 != '0' || (puVar10 == (uint8_t *)0x0)))) {
          puVar10 = &stack0x00000000 + -(int)pWVar6;
          *(char *)pWVar6 = '0';
          local_248 = pWVar6;
        }
        break;
      case 'x':
        local_224 = 0x27;
        goto LAB_00408872;
      }
      if (local_228 == 0) {
        if ((local_24c & 0x40) != 0) {
          if ((local_24c & 0x100) == 0) {
            if ((local_24c & 1) == 0) {
              if ((local_24c & 2) == 0) goto LAB_00408a4f;
              local_23a = ' ';
            }
            else {
              local_23a = '+';
            }
          }
          else {
            local_23a = '-';
          }
          local_238 = 1;
        }
LAB_00408a4f:
        iVar12 = (local_234 - (int)puVar10) - local_238;
        if ((local_24c & 0xc) == 0) {
          FUN_00408cd0(0x20,iVar12,param_1,&local_240);
        }
        FUN_00408d10(&local_23a,local_238,param_1,&local_240);
        if (((local_24c & 8) != 0) && ((local_24c & 4) == 0)) {
          FUN_00408cd0(0x30,iVar12,param_1,&local_240);
        }
        if ((local_230 == 0) || (pWVar6 = local_248, puVar9 = puVar10, (int)puVar10 < 1)) {
          FUN_00408d10((char *)local_248,(int)puVar10,param_1,&local_240);
        }
        else {
          do {
            puVar9 = puVar9 + -1;
            iVar7 = FUN_0040a230(local_214,*pWVar6);
            if (iVar7 < 1) break;
            FUN_00408d10(local_214,iVar7,param_1,&local_240);
            pWVar6 = pWVar6 + 1;
          } while (puVar9 != (uint8_t *)0x0);
        }
        if ((local_24c & 4) != 0) {
          FUN_00408cd0(0x20,iVar12,param_1,&local_240);
        }
      }
    }
    cVar8 = *param_2;
    local_21c = CONCAT31(local_21c._1_3_,cVar8);
    pcVar11 = param_2;
  } while( true );
}



void __cdecl FUN_00408c80(uint param_1,int *param_2,int *param_3)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = param_2[1];
  param_2[1] = iVar1 + -1;
  if (iVar1 + -1 < 0) {
    uVar2 = FUN_004081c0(param_1,param_2);
  }
  else {
    *(char *)*param_2 = (char)param_1;
    uVar2 = param_1 & 0xff;
    *param_2 = *param_2 + 1;
  }
  if (uVar2 == 0xffffffff) {
    *param_3 = -1;
    return;
  }
  *param_3 = *param_3 + 1;
  return;
}



void __cdecl FUN_00408cd0(uint param_1,int param_2,int *param_3,int *param_4)

{
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    FUN_00408c80(param_1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



void __cdecl FUN_00408d10(char *param_1,int param_2,int *param_3,int *param_4)

{
  char cVar1;
  
  do {
    if (param_2 < 1) {
      return;
    }
    param_2 = param_2 + -1;
    cVar1 = *param_1;
    param_1 = param_1 + 1;
    FUN_00408c80((int)cVar1,param_3,param_4);
  } while (*param_4 != -1);
  return;
}



uint32_t __cdecl FUN_00408d50(int *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}



undefined8 __cdecl FUN_00408d70(int *param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)*param_1;
  *param_1 = (int)(puVar1 + 1);
  return *puVar1;
}



uint32_t __cdecl FUN_00408d90(uint32_t *param_1)

{
  undefined2 *puVar1;
  undefined2 *puVar2;
  
  puVar1 = (undefined2 *)*param_1;
  puVar2 = puVar1 + 2;
  *param_1 = puVar2;
  return CONCAT22((short)((uint)puVar2 >> 0x10),*puVar1);
}



uint __cdecl FUN_00408db0(int param_1,uint param_2)

{
  int iVar1;
  BOOL BVar2;
  uint local_4;
  
  iVar1 = param_1;
  if (param_1 + 1U < 0x101) {
    return *(ushort *)(PTR_DAT_00427d48 + param_1 * 2) & param_2;
  }
  if ((PTR_DAT_00427d48[(param_1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
    param_1._0_2_ = (ushort)(byte)param_1;
    iVar1 = 1;
  }
  else {
    param_1._0_2_ = CONCAT11((byte)param_1,(char)((uint)param_1 >> 8));
    param_1._3_1_ = SUB41(iVar1,3);
    param_1._0_3_ = (uint3)(ushort)param_1;
    iVar1 = 2;
  }
  BVar2 = FUN_00408fe0(1,(LPCSTR)&param_1,iVar1,(LPWORD)&local_4,0,0,1);
  if (BVar2 == 0) {
    return 0;
  }
  return local_4 & 0xffff & param_2;
}



BOOL __cdecl
FUN_00408e50(DWORD param_1,LPCWSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6)

{
  BOOL BVar1;
  int cbMultiByte;
  int *lpMultiByteStr;
  int iVar2;
  LPWORD lpCharType;
  BOOL local_4;
  
  lpCharType = (LPWORD)0x0;
  if (DAT_0042b098 == 0) {
    BVar1 = GetStringTypeW(1,L"",1,(LPWORD)&local_4);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,(LPWORD)&local_4);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_0042b098 = 2;
    }
    else {
      DAT_0042b098 = 1;
    }
  }
  if (DAT_0042b098 != 1) {
    local_4 = DAT_0042b098;
    if (DAT_0042b098 == 2) {
      local_4 = 0;
      if (param_5 == 0) {
        param_5 = DAT_0042b0b8;
      }
      cbMultiByte = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)0x0,0,(LPCSTR)0x0,
                                        (LPBOOL)0x0);
      if (cbMultiByte == 0) {
        return 0;
      }
      lpMultiByteStr = FUN_00407bc0(1,cbMultiByte);
      if (lpMultiByteStr == (int *)0x0) {
        return 0;
      }
      iVar2 = WideCharToMultiByte(param_5,0x220,param_2,param_3,(LPSTR)lpMultiByteStr,cbMultiByte,
                                  (LPCSTR)0x0,(LPBOOL)0x0);
      if ((iVar2 != 0) &&
         (lpCharType = (LPWORD)FUN_00403b50(cbMultiByte * 2 + 2), lpCharType != (LPWORD)0x0)) {
        if (param_6 == 0) {
          param_6 = DAT_0042b0a8;
        }
        lpCharType[param_3] = 0xffff;
        lpCharType[param_3 + -1] = 0xffff;
        local_4 = GetStringTypeA(param_6,param_1,(LPCSTR)lpMultiByteStr,cbMultiByte,lpCharType);
        if ((lpCharType[param_3 + -1] == 0xffff) || (lpCharType[param_3] != 0xffff)) {
          local_4 = 0;
        }
        else {
          FUN_00404460((uint32_t *)param_4,(uint32_t *)lpCharType,param_3 * 2);
        }
      }
      FUN_004039d0((uint *)lpMultiByteStr);
      FUN_004039d0((uint *)lpCharType);
    }
    return local_4;
  }
  BVar1 = GetStringTypeW(param_1,param_2,param_3,param_4);
  return BVar1;
}



BOOL __cdecl
FUN_00408fe0(DWORD param_1,LPCSTR param_2,int param_3,LPWORD param_4,UINT param_5,LCID param_6,
            int param_7)

{
  BOOL BVar1;
  int iVar2;
  LPCWSTR lpWideCharStr;
  WORD local_2;
  
  lpWideCharStr = (LPCWSTR)0x0;
  if (DAT_0042b09c == 0) {
    BVar1 = GetStringTypeW(1,L"",1,&local_2);
    if (BVar1 == 0) {
      BVar1 = GetStringTypeA(0,1,"",1,&local_2);
      if (BVar1 == 0) {
        return 0;
      }
      DAT_0042b09c = 2;
    }
    else {
      DAT_0042b09c = 1;
    }
  }
  if (DAT_0042b09c == 2) {
    if (param_6 == 0) {
      param_6 = DAT_0042b0a8;
    }
    BVar1 = GetStringTypeA(param_6,param_1,param_2,param_3,param_4);
    return BVar1;
  }
  param_6 = DAT_0042b09c;
  if (DAT_0042b09c == 1) {
    param_6 = 0;
    if (param_5 == 0) {
      param_5 = DAT_0042b0b8;
    }
    iVar2 = MultiByteToWideChar(param_5,(-(uint)(param_7 != 0) & 8) + 1,param_2,param_3,(LPWSTR)0x0,
                                0);
    if (iVar2 != 0) {
      lpWideCharStr = (LPCWSTR)FUN_00407bc0(2,iVar2);
      if (lpWideCharStr != (LPCWSTR)0x0) {
        iVar2 = MultiByteToWideChar(param_5,1,param_2,param_3,lpWideCharStr,iVar2);
        if (iVar2 != 0) {
          BVar1 = GetStringTypeW(param_1,lpWideCharStr,iVar2,param_4);
          FUN_004039d0((uint *)lpWideCharStr);
          return BVar1;
        }
      }
    }
    FUN_004039d0((uint *)lpWideCharStr);
  }
  return param_6;
}



void FUN_00409160(void)

{
  if (DAT_0042b178 == 0) {
    FUN_00407250(0xb);
    if (DAT_0042b178 == 0) {
      FUN_004091a0();
      DAT_0042b178 = DAT_0042b178 + 1;
    }
    FUN_004072d0(0xb);
  }
  return;
}



void FUN_004091a0(void)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  DWORD DVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  bool bVar10;
  
  FUN_00407250(0xc);
  DAT_0042b0c0 = 0;
  DAT_00428008 = 0xffffffff;
  DAT_00427ff8 = 0xffffffff;
  pbVar3 = (byte *)FUN_0040a6c0(&DAT_00420e18);
  if (pbVar3 == (byte *)0x0) {
    FUN_004072d0(0xc);
    DVar4 = GetTimeZoneInformation((LPTIME_ZONE_INFORMATION)&DAT_0042b0c8);
    if (DVar4 == 0xffffffff) {
      return;
    }
    DAT_0042b0c0 = 1;
    DAT_00427f60 = DAT_0042b0c8 * 0x3c;
    if (DAT_0042b10e != 0) {
      DAT_00427f60 = DAT_00427f60 + DAT_0042b11c * 0x3c;
    }
    if ((DAT_0042b162 == 0) || (DAT_0042b170 == 0)) {
      DAT_00427f64 = 0;
      DAT_00427f68 = 0;
    }
    else {
      DAT_00427f64 = 1;
      DAT_00427f68 = (DAT_0042b170 - DAT_0042b11c) * 0x3c;
    }
    FUN_0040a410(PTR_DAT_00427ff0,(LPCWSTR)&DAT_0042b0cc,0x40);
    FUN_0040a410(PTR_DAT_00427ff4,(LPCWSTR)&DAT_0042b120,0x40);
    PTR_DAT_00427ff4[0x3f] = 0;
    PTR_DAT_00427ff0[0x3f] = 0;
    return;
  }
  if (*pbVar3 != 0) {
    pbVar8 = pbVar3;
    pbVar9 = DAT_0042b174;
    if (DAT_0042b174 != (byte *)0x0) {
      do {
        bVar1 = *pbVar8;
        bVar10 = bVar1 < *pbVar9;
        if (bVar1 != *pbVar9) {
LAB_004092f7:
          iVar5 = (1 - (uint)bVar10) - (uint)(bVar10 != 0);
          goto LAB_004092fc;
        }
        if (bVar1 == 0) break;
        bVar1 = pbVar8[1];
        bVar10 = bVar1 < pbVar9[1];
        if (bVar1 != pbVar9[1]) goto LAB_004092f7;
        pbVar8 = pbVar8 + 2;
        pbVar9 = pbVar9 + 2;
      } while (bVar1 != 0);
      iVar5 = 0;
LAB_004092fc:
      if (iVar5 == 0) goto LAB_00409469;
    }
    FUN_004039d0(DAT_0042b174);
    uVar6 = 0xffffffff;
    pbVar8 = pbVar3;
    do {
      if (uVar6 == 0) break;
      uVar6 = uVar6 - 1;
      bVar1 = *pbVar8;
      pbVar8 = pbVar8 + 1;
    } while (bVar1 != 0);
    DAT_0042b174 = (byte *)FUN_00403b50(~uVar6);
    if (DAT_0042b174 != (byte *)0x0) {
      uVar6 = 0xffffffff;
      pbVar8 = pbVar3;
      do {
        pbVar9 = pbVar8;
        if (uVar6 == 0) break;
        uVar6 = uVar6 - 1;
        pbVar9 = pbVar8 + 1;
        bVar1 = *pbVar8;
        pbVar8 = pbVar9;
      } while (bVar1 != 0);
      uVar6 = ~uVar6;
      pbVar8 = pbVar9 + -uVar6;
      pbVar9 = DAT_0042b174;
      for (uVar7 = uVar6 >> 2; uVar7 != 0; uVar7 = uVar7 - 1) {
        *(uint32_t *)pbVar9 = *(uint32_t *)pbVar8;
        pbVar8 = pbVar8 + 4;
        pbVar9 = pbVar9 + 4;
      }
      for (uVar6 = uVar6 & 3; uVar6 != 0; uVar6 = uVar6 - 1) {
        *pbVar9 = *pbVar8;
        pbVar8 = pbVar8 + 1;
        pbVar9 = pbVar9 + 1;
      }
      FUN_004072d0(0xc);
      _strncpy(PTR_DAT_00427ff0,(char *)pbVar3,3);
      pbVar8 = pbVar3 + 3;
      PTR_DAT_00427ff0[3] = 0;
      bVar1 = *pbVar8;
      if (bVar1 == 0x2d) {
        pbVar8 = pbVar3 + 4;
      }
      iVar5 = FUN_004043b0(pbVar8);
      DAT_00427f60 = iVar5 * 0xe10;
      for (; (bVar2 = *pbVar8, bVar2 == 0x2b || (('/' < (char)bVar2 && ((char)bVar2 < ':'))));
          pbVar8 = pbVar8 + 1) {
      }
      if (*pbVar8 == 0x3a) {
        pbVar8 = pbVar8 + 1;
        iVar5 = FUN_004043b0(pbVar8);
        DAT_00427f60 = DAT_00427f60 + iVar5 * 0x3c;
        bVar2 = *pbVar8;
        while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
          pbVar3 = pbVar8 + 1;
          pbVar8 = pbVar8 + 1;
          bVar2 = *pbVar3;
        }
        if (*pbVar8 == 0x3a) {
          pbVar8 = pbVar8 + 1;
          iVar5 = FUN_004043b0(pbVar8);
          DAT_00427f60 = DAT_00427f60 + iVar5;
          bVar2 = *pbVar8;
          while (('/' < (char)bVar2 && ((char)bVar2 < ':'))) {
            pbVar3 = pbVar8 + 1;
            pbVar8 = pbVar8 + 1;
            bVar2 = *pbVar3;
          }
        }
      }
      if (bVar1 == 0x2d) {
        DAT_00427f60 = -DAT_00427f60;
      }
      DAT_00427f64 = (int)(char)*pbVar8;
      if (DAT_00427f64 == 0) {
        *PTR_DAT_00427ff4 = 0;
        return;
      }
      _strncpy(PTR_DAT_00427ff4,(char *)pbVar8,3);
      PTR_DAT_00427ff4[3] = 0;
      return;
    }
  }
LAB_00409469:
  FUN_004072d0(0xc);
  return;
}


bool __cdecl FUN_004094b0(int *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  
  if (DAT_00427f64 == 0) {
    return false;
  }
  uVar7 = param_1[5];
  if ((uVar7 == DAT_00427ff8) && (uVar7 == DAT_00428008)) goto LAB_00409684;
  if (DAT_0042b0c0 == 0) {
    FUN_00409720(1,1,uVar7,4,1,0,0,2,0,0,0);
    uVar7 = param_1[5];
    uVar11 = 0;
    uVar3 = 0;
    uVar10 = 0;
    uVar4 = 2;
    uVar1 = 0;
    uVar9 = 5;
    uVar8 = 10;
LAB_00409678:
    uVar5 = 0;
    iVar6 = 1;
  }
  else {
    if (DAT_0042b160 != 0) {
      uVar10 = (uint)DAT_0042b164._2_2_;
      uVar3 = 0;
      uVar1 = 0;
    }
    else {
      uVar3 = DAT_0042b164 & 0xffff;
      uVar10 = 0;
      uVar1 = (uint)DAT_0042b164._2_2_;
    }
    FUN_00409720(1,(uint)(DAT_0042b160 == 0),uVar7,(uint)DAT_0042b162,uVar1,uVar3,uVar10,
                 DAT_0042b168 & 0xffff,DAT_0042b168 >> 0x10,DAT_0042b16c & 0xffff,
                 DAT_0042b16c >> 0x10);
    if (DAT_0042b10c == 0) {
      uVar11 = (uint)DAT_0042b118._2_2_;
      uVar3 = DAT_0042b118 & 0xffff;
      uVar10 = (uint)DAT_0042b114._2_2_;
      uVar4 = DAT_0042b114 & 0xffff;
      uVar1 = DAT_0042b110 & 0xffff;
      uVar9 = (uint)DAT_0042b110._2_2_;
      uVar8 = (uint)DAT_0042b10e;
      uVar7 = param_1[5];
      goto LAB_00409678;
    }
    uVar11 = (uint)DAT_0042b118._2_2_;
    uVar3 = DAT_0042b118 & 0xffff;
    uVar10 = (uint)DAT_0042b114._2_2_;
    uVar5 = (uint)DAT_0042b110._2_2_;
    uVar4 = DAT_0042b114 & 0xffff;
    uVar7 = param_1[5];
    uVar8 = (uint)DAT_0042b10e;
    uVar1 = 0;
    uVar9 = 0;
    iVar6 = 0;
  }
  FUN_00409720(0,iVar6,uVar7,uVar8,uVar9,uVar1,uVar5,uVar4,uVar10,uVar3,uVar11);
LAB_00409684:
  iVar6 = param_1[7];
  if (DAT_00427ffc < DAT_0042800c) {
    if ((iVar6 < DAT_00427ffc) || (DAT_0042800c < iVar6)) {
      return false;
    }
    if ((DAT_00427ffc < iVar6) && (iVar6 < DAT_0042800c)) {
      return true;
    }
  }
  else {
    if ((iVar6 < DAT_0042800c) || (DAT_00427ffc < iVar6)) {
      return true;
    }
    if ((DAT_0042800c < iVar6) && (iVar6 < DAT_00427ffc)) {
      return false;
    }
  }
  iVar2 = (*param_1 + (param_1[1] + param_1[2] * 0x3c) * 0x3c) * 1000;
  if (iVar6 != DAT_00427ffc) {
    return iVar2 < DAT_00428010;
  }
  return DAT_00428000 <= iVar2;
}



void __cdecl
FUN_00409720(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,int param_7,
            int param_8,int param_9,int param_10,int param_11)

{
  int iVar1;
  int iVar2;
  
  if (param_2 == 1) {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_00428014 + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_0042804c + param_4 * 4);
    }
    iVar2 = (int)(((int)(param_3 - 1) >> 2) + -0x63db + param_3 * 0x16d + iVar1 + 1) % 7;
    if (iVar2 < param_6) {
      iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
    }
    else {
      iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
    }
    if (param_5 == 5) {
      if ((param_3 & 3) == 0) {
        iVar2 = *(int *)(&DAT_00428018 + param_4 * 4);
      }
      else {
        iVar2 = (&DAT_00428050)[param_4];
      }
      if (iVar2 < iVar1) {
        iVar1 = iVar1 + -7;
      }
    }
  }
  else {
    if ((param_3 & 3) == 0) {
      iVar1 = *(int *)(&DAT_00428014 + param_4 * 4);
    }
    else {
      iVar1 = *(int *)(&DAT_0042804c + param_4 * 4);
    }
    iVar1 = iVar1 + param_7;
  }
  if (param_1 == 1) {
    DAT_00427ffc = iVar1;
    DAT_00427ff8 = param_3;
    DAT_00428000 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c) * 1000;
    return;
  }
  DAT_0042800c = iVar1;
  DAT_00428010 = param_11 + (param_10 + (param_9 + param_8 * 0x3c) * 0x3c + DAT_00427f68) * 1000;
  if (DAT_00428010 < 0) {
    DAT_00428008 = param_3;
    DAT_00428010 = DAT_00428010 + 86399999;
    return;
  }
  if (86399999 < DAT_00428010) {
    DAT_00428010 = DAT_00428010 + -86399999;
  }
  DAT_00428008 = param_3;
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint __cdecl FUN_004098c0(byte *param_1,byte *param_2)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  char cVar6;
  uint uVar8;
  uint uVar9;
  uint uVar7;
  
  iVar2 = _DAT_0042c268;
  if (DAT_0042b0a8 == 0) {
    bVar5 = 0xff;
    do {
      do {
        cVar6 = '\0';
        if (bVar5 == 0) goto LAB_0040990e;
        bVar5 = *param_2;
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        param_1 = param_1 + 1;
      } while (bVar4 == bVar5);
      bVar3 = bVar5 + 0xbf + (-((byte)(bVar5 + 0xbf) < 0x1a) & 0x20U) + 0x41;
      bVar4 = bVar4 + 0xbf;
      bVar5 = bVar4 + (-(bVar4 < 0x1a) & 0x20U) + 0x41;
    } while (bVar5 == bVar3);
    cVar6 = (bVar5 < bVar3) * -2 + '\x01';
LAB_0040990e:
    uVar7 = (uint)cVar6;
  }
  else {
    LOCK();
    _DAT_0042c268 = _DAT_0042c268 + 1;
    UNLOCK();
    bVar1 = 0 < DAT_0042c264;
    if (bVar1) {
      LOCK();
      UNLOCK();
      _DAT_0042c268 = iVar2;
      FUN_00407250(0x13);
    }
    uVar9 = (uint)bVar1;
    uVar7 = 0xff;
    uVar8 = 0;
    do {
      do {
        if ((char)uVar7 == '\0') goto LAB_0040996f;
        bVar5 = *param_2;
        uVar7 = CONCAT31((int3)(uVar7 >> 8),bVar5);
        param_2 = param_2 + 1;
        bVar4 = *param_1;
        uVar8 = CONCAT31((int3)(uVar8 >> 8),bVar4);
        param_1 = param_1 + 1;
      } while (bVar5 == bVar4);
      uVar8 = FUN_0040b6c0(uVar8);
      uVar7 = FUN_0040b6c0(uVar7);
    } while ((byte)uVar8 == (byte)uVar7);
    uVar8 = (uint)((byte)uVar8 < (byte)uVar7);
    uVar7 = (1 - uVar8) - (uint)(uVar8 != 0);
LAB_0040996f:
    if (uVar9 == 0) {
      LOCK();
      _DAT_0042c268 = _DAT_0042c268 + -1;
      UNLOCK();
    }
    else {
      FUN_004072d0(0x13);
    }
  }
  return uVar7;
}



uint __cdecl FUN_00409990(uint param_1)

{
  bool bVar1;
  
  if (DAT_0042b0a8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    InterlockedIncrement((LONG *)&DAT_0042c268);
    bVar1 = DAT_0042c264 != 0;
    if (bVar1) {
      InterlockedDecrement((LONG *)&DAT_0042c268);
      FUN_00407250(0x13);
    }
    param_1 = FUN_00409a20(param_1);
    if (bVar1) {
      FUN_004072d0(0x13);
      return param_1;
    }
    InterlockedDecrement((LONG *)&DAT_0042c268);
  }
  return param_1;
}



uint __cdecl FUN_00409a20(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_0042b0a8 == 0) {
    if ((0x60 < (int)param_1) && ((int)param_1 < 0x7b)) {
      return param_1 - 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_00427f54 < 2) {
        uVar2 = (byte)PTR_DAT_00427d48[param_1 * 2] & 2;
      }
      else {
        uVar2 = FUN_00408db0(param_1,2);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_00427d48[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_00407da0(DAT_0042b0a8,0x200,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0,1);
    if (iVar4 == 0) {
      return uVar1;
    }
    if (iVar4 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}



bool __cdecl FUN_00409b20(void *param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadReadPtr(param_1,param_2);
  return BVar1 == 0;
}



bool __cdecl FUN_00409b40(LPVOID param_1,UINT_PTR param_2)

{
  BOOL BVar1;
  
  BVar1 = IsBadWritePtr(param_1,param_2);
  return BVar1 == 0;
}



bool __cdecl FUN_00409b60(FARPROC param_1)

{
  BOOL BVar1;
  
  BVar1 = IsBadCodePtr(param_1);
  return BVar1 == 0;
}



int __cdecl FUN_00409ba0(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  HMODULE hModule;
  int iVar1;
  
  iVar1 = 0;
  if (DAT_0042b188 != (FARPROC)0x0) {
LAB_00409bf0:
    if (DAT_0042b18c != (FARPROC)0x0) {
      iVar1 = (*DAT_0042b18c)();
    }
    if ((iVar1 != 0) && (DAT_0042b190 != (FARPROC)0x0)) {
      iVar1 = (*DAT_0042b190)(iVar1);
    }
    iVar1 = (*DAT_0042b188)(iVar1,param_1,param_2,param_3);
    return iVar1;
  }
  hModule = LoadLibraryA("user32.dll");
  if (hModule != (HMODULE)0x0) {
    DAT_0042b188 = GetProcAddress(hModule,"MessageBoxA");
    if (DAT_0042b188 != (FARPROC)0x0) {
      DAT_0042b18c = GetProcAddress(hModule,"GetActiveWindow");
      DAT_0042b190 = GetProcAddress(hModule,"GetLastActivePopup");
      goto LAB_00409bf0;
    }
  }
  return 0;
}


DWORD __cdecl FUN_00409e10(uint param_1,LONG param_2,DWORD param_3)

{
  DWORD DVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_0042c380) &&
     ((*(byte *)((&DAT_0042c280)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_0040bd20(param_1);
    DVar1 = FUN_00409e90(param_1,param_2,param_3);
    FUN_0040bd90(param_1);
    return DVar1;
  }
  pDVar2 = FUN_00404e50();
  *pDVar2 = 9;
  pDVar2 = FUN_00404e60();
  *pDVar2 = 0;
  return 0xffffffff;
}



DWORD __cdecl FUN_00409e90(uint param_1,LONG param_2,DWORD param_3)

{
  HANDLE hFile;
  DWORD *pDVar1;
  DWORD DVar2;
  uint *puVar3;
  
  hFile = (HANDLE)FUN_0040bcd0(param_1);
  if (hFile == (HANDLE)0xffffffff) {
    pDVar1 = FUN_00404e50();
    *pDVar1 = 9;
    return 0xffffffff;
  }
  DVar2 = SetFilePointer(hFile,param_2,(PLONG)0x0,param_3);
  if (DVar2 == 0xffffffff) {
    puVar3 = (uint *)GetLastError();
  }
  else {
    puVar3 = (uint *)0x0;
  }
  if (puVar3 != (uint *)0x0) {
    FUN_00404dd0(puVar3);
    return 0xffffffff;
  }
  *(byte *)((&DAT_0042c280)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) =
       *(byte *)((&DAT_0042c280)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0xfd;
  return DVar2;
}



int __cdecl FUN_00409f10(uint param_1,char *param_2,uint param_3)

{
  int iVar1;
  DWORD *pDVar2;
  
  if ((param_1 < DAT_0042c380) &&
     ((*(byte *)((&DAT_0042c280)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    FUN_0040bd20(param_1);
    iVar1 = FUN_00409f90(param_1,param_2,param_3);
    FUN_0040bd90(param_1);
    return iVar1;
  }
  pDVar2 = FUN_00404e50();
  *pDVar2 = 9;
  pDVar2 = FUN_00404e60();
  *pDVar2 = 0;
  return -1;
}



int __cdecl FUN_00409f90(uint param_1,char *param_2,uint param_3)

{
  int *piVar1;
  char cVar2;
  char *pcVar3;
  BOOL BVar4;
  DWORD *pDVar5;
  int iVar6;
  char *pcVar7;
  DWORD local_41c;
  uint *local_414;
  DWORD local_410;
  int local_40c;
  int *local_408;
  char local_404 [1028];
  
  local_41c = 0;
  local_40c = 0;
  if (param_3 == 0) {
    return 0;
  }
  piVar1 = &DAT_0042c280 + ((int)param_1 >> 5);
  iVar6 = (param_1 & 0x1f) * 0x24;
  local_408 = piVar1;
  if ((*(byte *)(iVar6 + 4 + *piVar1) & 0x20) != 0) {
    FUN_00409e90(param_1,0,2);
  }
  if ((*(byte *)((uint32_t *)(*piVar1 + iVar6) + 1) & 0x80) == 0) {
    BVar4 = WriteFile(*(HANDLE *)(*piVar1 + iVar6),param_2,param_3,&local_410,(LPOVERLAPPED)0x0);
    if (BVar4 == 0) {
      local_414 = (uint *)GetLastError();
    }
    else {
      local_41c = local_410;
      local_414 = (uint *)0x0;
    }
  }
  else {
    local_414 = (uint *)0x0;
    pcVar7 = param_2;
    if (param_3 != 0) {
      do {
        pcVar3 = local_404;
        do {
          if (param_3 <= (uint)((int)pcVar7 - (int)param_2)) break;
          cVar2 = *pcVar7;
          pcVar7 = pcVar7 + 1;
          if (cVar2 == '\n') {
            *pcVar3 = '\r';
            local_40c = local_40c + 1;
            pcVar3 = pcVar3 + 1;
          }
          *pcVar3 = cVar2;
          pcVar3 = pcVar3 + 1;
        } while ((int)pcVar3 - (int)local_404 < 0x400);
        BVar4 = WriteFile(*(HANDLE *)(iVar6 + *local_408),local_404,(int)pcVar3 - (int)local_404,
                          &local_410,(LPOVERLAPPED)0x0);
        if (BVar4 == 0) {
          local_414 = (uint *)GetLastError();
          break;
        }
        local_41c = local_41c + local_410;
        if (((int)local_410 < (int)pcVar3 - (int)local_404) ||
           (param_3 <= (uint)((int)pcVar7 - (int)param_2))) break;
      } while( true );
    }
  }
  if (local_41c != 0) {
    return local_41c - local_40c;
  }
  if (local_414 == (uint *)0x0) {
    if (((*(byte *)(iVar6 + 4 + *local_408) & 0x40) != 0) && (*param_2 == '\x1a')) {
      return 0;
    }
    pDVar5 = FUN_00404e50();
    *pDVar5 = 0x1c;
    pDVar5 = FUN_00404e60();
    *pDVar5 = 0;
    return -1;
  }
  if (local_414 != (uint *)0x5) {
    FUN_00404dd0(local_414);
    return -1;
  }
  pDVar5 = FUN_00404e50();
  *pDVar5 = 9;
  pDVar5 = FUN_00404e60();
  *pDVar5 = 5;
  return -1;
}



void __cdecl FUN_0040a1a0(int *param_1)

{
  int iVar1;
  
  DAT_0042b194 = DAT_0042b194 + 1;
  iVar1 = FUN_00403b50(0x1000);
  param_1[2] = iVar1;
  if (iVar1 != 0) {
    param_1[3] = param_1[3] | 8;
    param_1[6] = 0x1000;
    *param_1 = param_1[2];
    param_1[1] = 0;
    return;
  }
  param_1[6] = 2;
  param_1[3] = param_1[3] | 4;
  param_1[2] = (int)(param_1 + 5);
  *param_1 = (int)(param_1 + 5);
  param_1[1] = 0;
  return;
}



byte __cdecl FUN_0040a200(uint param_1)

{
  if (DAT_0042c380 <= param_1) {
    return 0;
  }
  return *(byte *)((&DAT_0042c280)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 0x40;
}



int __cdecl FUN_0040a230(LPSTR param_1,WCHAR param_2)

{
  int iVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_0042c268);
  bVar2 = DAT_0042c264 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_0042c268);
    FUN_00407250(0x13);
  }
  iVar1 = FUN_0040a2a0(param_1,param_2);
  if (!bVar2) {
    InterlockedDecrement((LONG *)&DAT_0042c268);
    return iVar1;
  }
  FUN_004072d0(0x13);
  return iVar1;
}



int __cdecl FUN_0040a2a0(LPSTR param_1,WCHAR param_2)

{
  LPSTR lpMultiByteStr;
  int iVar1;
  DWORD *pDVar2;
  
  lpMultiByteStr = param_1;
  if (param_1 == (LPSTR)0x0) {
    return 0;
  }
  if (DAT_0042b0a8 == 0) {
    if ((ushort)param_2 < 0x100) {
      *param_1 = (CHAR)param_2;
      return 1;
    }
  }
  else {
    param_1 = (LPSTR)0x0;
    iVar1 = WideCharToMultiByte(DAT_0042b0b8,0x220,&param_2,1,lpMultiByteStr,DAT_00427f54,
                                (LPCSTR)0x0,(LPBOOL)&param_1);
    if ((iVar1 != 0) && (param_1 == (LPSTR)0x0)) {
      return iVar1;
    }
  }
  pDVar2 = FUN_00404e50();
  *pDVar2 = 0x2a;
  return -1;
}


uint __cdecl FUN_0040a410(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  uint uVar1;
  bool bVar2;
  
  InterlockedIncrement((LONG *)&DAT_0042c268);
  bVar2 = DAT_0042c264 != 0;
  if (bVar2) {
    InterlockedDecrement((LONG *)&DAT_0042c268);
    FUN_00407250(0x13);
  }
  uVar1 = FUN_0040a490(param_1,param_2,param_3);
  if (!bVar2) {
    InterlockedDecrement((LONG *)&DAT_0042c268);
    return uVar1;
  }
  FUN_004072d0(0x13);
  return uVar1;
}



uint __cdecl FUN_0040a490(LPSTR param_1,LPCWSTR param_2,uint param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  DWORD DVar5;
  DWORD *pDVar6;
  LPCWSTR pWVar7;
  int iVar8;
  BOOL local_4;
  
  uVar4 = param_3;
  pWVar7 = param_2;
  uVar2 = 0;
  local_4 = 0;
  if ((param_1 != (LPSTR)0x0) && (param_3 == 0)) {
    return uVar2;
  }
  if (param_1 == (LPSTR)0x0) {
    if (DAT_0042b0a8 == 0) {
      uVar4 = FUN_00403f60(param_2);
      return uVar4;
    }
    iVar3 = WideCharToMultiByte(DAT_0042b0b8,0x220,param_2,-1,(LPSTR)0x0,0,(LPCSTR)0x0,&local_4);
    if ((iVar3 != 0) && (local_4 == 0)) {
      return iVar3 - 1;
    }
  }
  else if (DAT_0042b0a8 == 0) {
    if (param_3 == 0) {
      return 0;
    }
    while ((ushort)*pWVar7 < 0x100) {
      param_1[uVar2] = (CHAR)*pWVar7;
      if (*pWVar7 == L'\0') {
        return uVar2;
      }
      uVar2 = uVar2 + 1;
      pWVar7 = pWVar7 + 1;
      if (param_3 <= uVar2) {
        return uVar2;
      }
    }
  }
  else if (DAT_00427f54 == 1) {
    iVar3 = 0;
    if (param_3 != 0) {
      iVar3 = FUN_0040a680(param_2,param_3);
    }
    uVar4 = WideCharToMultiByte(DAT_0042b0b8,0x220,pWVar7,iVar3,param_1,iVar3,(LPCSTR)0x0,&local_4);
    if ((uVar4 != 0) && (local_4 == 0)) {
      if (param_1[uVar4 - 1] != '\0') {
        return uVar4;
      }
      return uVar4 - 1;
    }
  }
  else {
    iVar3 = WideCharToMultiByte(DAT_0042b0b8,0x220,param_2,-1,param_1,param_3,(LPCSTR)0x0,&local_4);
    if (iVar3 == 0) {
      if ((local_4 == 0) && (DVar5 = GetLastError(), DVar5 == 0x7a)) {
        uVar2 = 0;
        if (uVar4 != 0) {
          do {
            iVar3 = WideCharToMultiByte(DAT_0042b0b8,0,pWVar7,1,(LPSTR)&param_2,DAT_00427f54,
                                        (LPCSTR)0x0,&local_4);
            if ((iVar3 == 0) || (local_4 != 0)) goto LAB_0040a666;
            if (uVar4 < iVar3 + uVar2) {
              return uVar2;
            }
            iVar8 = 0;
            if (0 < iVar3) {
              do {
                cVar1 = *(char *)((int)&param_2 + iVar8);
                param_1[uVar2] = cVar1;
                if (cVar1 == '\0') {
                  return uVar2;
                }
                iVar8 = iVar8 + 1;
                uVar2 = uVar2 + 1;
              } while (iVar8 < iVar3);
            }
            pWVar7 = pWVar7 + 1;
          } while (uVar2 < uVar4);
        }
        return uVar2;
      }
    }
    else if (local_4 == 0) {
      return iVar3 - 1;
    }
  }
LAB_0040a666:
  pDVar6 = FUN_00404e50();
  *pDVar6 = 0x2a;
  return 0xffffffff;
}



int __cdecl FUN_0040a680(short *param_1,int param_2)

{
  short *psVar1;
  int iVar2;
  
  psVar1 = param_1;
  iVar2 = param_2;
  if (param_2 != 0) {
    do {
      if (*psVar1 == 0) break;
      psVar1 = psVar1 + 1;
      iVar2 = iVar2 + -1;
    } while (iVar2 != 0);
    if ((iVar2 != 0) && (*psVar1 == 0)) {
      return ((int)psVar1 - (int)param_1 >> 1) + 1;
    }
  }
  return param_2;
}



int __cdecl FUN_0040a6c0(byte *param_1)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  LPWSTR pWVar4;
  byte *pbVar5;
  int *piVar6;
  byte *pbVar7;
  
  if (((DAT_0042ac80 != (int *)0x0) ||
      (((DAT_0042ac88 == 0 || (iVar2 = FUN_0040be10(), iVar2 == 0)) && (DAT_0042ac80 != (int *)0x0))
      )) && (param_1 != (byte *)0x0)) {
    uVar3 = 0xffffffff;
    pbVar5 = (byte *)*DAT_0042ac80;
    pbVar7 = param_1;
    do {
      if (uVar3 == 0) break;
      uVar3 = uVar3 - 1;
      bVar1 = *pbVar7;
      pbVar7 = pbVar7 + 1;
    } while (bVar1 != 0);
    pWVar4 = (LPWSTR)(~uVar3 - 1);
    piVar6 = DAT_0042ac80;
    if (pbVar5 != (byte *)0x0) {
      do {
        uVar3 = 0xffffffff;
        pbVar7 = pbVar5;
        do {
          if (uVar3 == 0) break;
          uVar3 = uVar3 - 1;
          bVar1 = *pbVar7;
          pbVar7 = pbVar7 + 1;
        } while (bVar1 != 0);
        if (((pWVar4 < (LPWSTR)(~uVar3 - 1)) && (*(byte *)((int)pWVar4 + (int)pbVar5) == 0x3d)) &&
           (iVar2 = FUN_0040bdd0(pbVar5,param_1,pWVar4), iVar2 == 0)) {
          return *piVar6 + 1 + (int)pWVar4;
        }
        pbVar5 = (byte *)piVar6[1];
        piVar6 = piVar6 + 1;
        if (pbVar5 == (byte *)0x0) {
          return 0;
        }
      } while( true );
    }
  }
  return 0;
}



uint __cdecl FUN_0040a800(char *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  uint uVar26;
  uint uVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint uVar36;
  uint uVar37;
  uint uVar38;
  uint uVar39;
  uint uVar40;
  uint uVar41;
  uint uVar42;
  uint uVar43;
  char *pcVar44;
  
  uVar40 = (uint)DAT_0042b1d6;
  pcVar44 = (char *)(uint)DAT_0042b1d8;
  if (param_1 == (char *)0x0) {
    return 0xffffffff;
  }
  uVar1 = FUN_0040be90(1,uVar40,0x31,param_1 + 4);
  uVar2 = FUN_0040be90(1,uVar40,0x32,param_1 + 8);
  uVar3 = FUN_0040be90(1,uVar40,0x33,param_1 + 0xc);
  uVar4 = FUN_0040be90(1,uVar40,0x34,param_1 + 0x10);
  uVar5 = FUN_0040be90(1,uVar40,0x35,param_1 + 0x14);
  uVar6 = FUN_0040be90(1,uVar40,0x36,param_1 + 0x18);
  uVar7 = FUN_0040be90(1,uVar40,0x37,param_1);
  uVar8 = FUN_0040be90(1,uVar40,0x2a,param_1 + 0x20);
  uVar9 = FUN_0040be90(1,uVar40,0x2b,param_1 + 0x24);
  uVar10 = FUN_0040be90(1,uVar40,0x2c,param_1 + 0x28);
  uVar11 = FUN_0040be90(1,uVar40,0x2d,param_1 + 0x2c);
  uVar12 = FUN_0040be90(1,uVar40,0x2e,param_1 + 0x30);
  uVar13 = FUN_0040be90(1,uVar40,0x2f,param_1 + 0x34);
  uVar14 = FUN_0040be90(1,uVar40,0x30,param_1 + 0x1c);
  uVar15 = FUN_0040be90(1,uVar40,0x44,param_1 + 0x38);
  uVar16 = FUN_0040be90(1,uVar40,0x45,param_1 + 0x3c);
  uVar17 = FUN_0040be90(1,uVar40,0x46,param_1 + 0x40);
  uVar18 = FUN_0040be90(1,uVar40,0x47,param_1 + 0x44);
  uVar19 = FUN_0040be90(1,uVar40,0x48,param_1 + 0x48);
  uVar20 = FUN_0040be90(1,uVar40,0x49,param_1 + 0x4c);
  uVar21 = FUN_0040be90(1,uVar40,0x4a,param_1 + 0x50);
  uVar22 = FUN_0040be90(1,uVar40,0x4b,param_1 + 0x54);
  uVar23 = FUN_0040be90(1,uVar40,0x4c,param_1 + 0x58);
  uVar24 = FUN_0040be90(1,uVar40,0x4d,param_1 + 0x5c);
  uVar25 = FUN_0040be90(1,uVar40,0x4e,param_1 + 0x60);
  uVar26 = FUN_0040be90(1,uVar40,0x4f,param_1 + 100);
  uVar27 = FUN_0040be90(1,uVar40,0x38,param_1 + 0x68);
  uVar28 = FUN_0040be90(1,uVar40,0x39,param_1 + 0x6c);
  uVar29 = FUN_0040be90(1,uVar40,0x3a,param_1 + 0x70);
  uVar30 = FUN_0040be90(1,uVar40,0x3b,param_1 + 0x74);
  uVar31 = FUN_0040be90(1,uVar40,0x3c,param_1 + 0x78);
  uVar32 = FUN_0040be90(1,uVar40,0x3d,param_1 + 0x7c);
  uVar33 = FUN_0040be90(1,uVar40,0x3e,param_1 + 0x80);
  uVar34 = FUN_0040be90(1,uVar40,0x3f,param_1 + 0x84);
  uVar35 = FUN_0040be90(1,uVar40,0x40,param_1 + 0x88);
  uVar36 = FUN_0040be90(1,uVar40,0x41,param_1 + 0x8c);
  uVar37 = FUN_0040be90(1,uVar40,0x42,param_1 + 0x90);
  uVar38 = FUN_0040be90(1,uVar40,0x43,param_1 + 0x94);
  uVar39 = FUN_0040be90(1,uVar40,0x28,param_1 + 0x98);
  uVar40 = FUN_0040be90(1,uVar40,0x29,param_1 + 0x9c);
  uVar41 = FUN_0040be90(1,(LCID)pcVar44,0x1f,param_1 + 0xa0);
  uVar42 = FUN_0040be90(1,(LCID)pcVar44,0x20,param_1 + 0xa4);
  uVar43 = FUN_0040adc0(pcVar44,(int)param_1);
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15 | uVar16 | uVar17 | uVar18 | uVar19 | uVar20 | uVar21 |
         uVar22 | uVar23 | uVar24 | uVar25 | uVar26 | uVar27 | uVar28 | uVar29 | uVar30 | uVar31 |
         uVar32 | uVar33 | uVar34 | uVar35 | uVar36 | uVar37 | uVar38 | uVar39 | uVar40 | uVar41 |
         uVar42 | uVar43;
}



void __cdecl FUN_0040ab80(uint32_t *param_1)

{
  if (param_1 != (uint32_t *)0x0) {
    FUN_004039d0((uint *)param_1[1]);
    FUN_004039d0((uint *)param_1[2]);
    FUN_004039d0((uint *)param_1[3]);
    FUN_004039d0((uint *)param_1[4]);
    FUN_004039d0((uint *)param_1[5]);
    FUN_004039d0((uint *)param_1[6]);
    FUN_004039d0((uint *)*param_1);
    FUN_004039d0((uint *)param_1[8]);
    FUN_004039d0((uint *)param_1[9]);
    FUN_004039d0((uint *)param_1[10]);
    FUN_004039d0((uint *)param_1[0xb]);
    FUN_004039d0((uint *)param_1[0xc]);
    FUN_004039d0((uint *)param_1[0xd]);
    FUN_004039d0((uint *)param_1[7]);
    FUN_004039d0((uint *)param_1[0xe]);
    FUN_004039d0((uint *)param_1[0xf]);
    FUN_004039d0((uint *)param_1[0x10]);
    FUN_004039d0((uint *)param_1[0x11]);
    FUN_004039d0((uint *)param_1[0x12]);
    FUN_004039d0((uint *)param_1[0x13]);
    FUN_004039d0((uint *)param_1[0x14]);
    FUN_004039d0((uint *)param_1[0x15]);
    FUN_004039d0((uint *)param_1[0x16]);
    FUN_004039d0((uint *)param_1[0x17]);
    FUN_004039d0((uint *)param_1[0x18]);
    FUN_004039d0((uint *)param_1[0x19]);
    FUN_004039d0((uint *)param_1[0x1a]);
    FUN_004039d0((uint *)param_1[0x1b]);
    FUN_004039d0((uint *)param_1[0x1c]);
    FUN_004039d0((uint *)param_1[0x1d]);
    FUN_004039d0((uint *)param_1[0x1e]);
    FUN_004039d0((uint *)param_1[0x1f]);
    FUN_004039d0((uint *)param_1[0x20]);
    FUN_004039d0((uint *)param_1[0x21]);
    FUN_004039d0((uint *)param_1[0x22]);
    FUN_004039d0((uint *)param_1[0x23]);
    FUN_004039d0((uint *)param_1[0x24]);
    FUN_004039d0((uint *)param_1[0x25]);
    FUN_004039d0((uint *)param_1[0x26]);
    FUN_004039d0((uint *)param_1[0x27]);
    FUN_004039d0((uint *)param_1[0x28]);
    FUN_004039d0((uint *)param_1[0x29]);
    FUN_004039d0((uint *)param_1[0x2a]);
  }
  return;
}



uint __cdecl FUN_0040adc0(char *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint8_t *puVar6;
  char *pcVar7;
  char *pcVar8;
  int local_8;
  int local_4;
  
  pcVar7 = param_1;
  local_4 = 0;
  local_8 = 0;
  uVar3 = FUN_0040be90(0,(LCID)param_1,0x23,(char *)&local_4);
  uVar4 = FUN_0040be90(0,(LCID)pcVar7,0x25,(char *)&local_8);
  uVar5 = FUN_0040be90(1,(LCID)pcVar7,0x1e,(char *)&param_1);
  uVar5 = uVar3 | uVar4 | uVar5;
  if (uVar5 != 0) {
    return uVar5;
  }
  puVar6 = (uint8_t *)FUN_00403b50(0xd);
  *(uint8_t **)(param_2 + 0xa8) = puVar6;
  if (local_4 == 0) {
    *puVar6 = 0x68;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_0040ae5c;
    *pcVar7 = 'h';
  }
  else {
    *puVar6 = 0x48;
    pcVar7 = puVar6 + 1;
    if (local_8 == 0) goto LAB_0040ae5c;
    *pcVar7 = 'H';
  }
  pcVar7 = puVar6 + 2;
LAB_0040ae5c:
  cVar2 = *param_1;
  pcVar8 = param_1;
  while (cVar2 != '\0') {
    *pcVar7 = cVar2;
    pcVar1 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar7 = 'm';
  pcVar8 = pcVar7 + 1;
  if (local_8 != 0) {
    *pcVar8 = 'm';
    pcVar8 = pcVar7 + 2;
  }
  cVar2 = *param_1;
  pcVar7 = param_1;
  while (cVar2 != '\0') {
    *pcVar8 = cVar2;
    pcVar1 = pcVar7 + 1;
    pcVar8 = pcVar8 + 1;
    pcVar7 = pcVar7 + 1;
    cVar2 = *pcVar1;
  }
  *pcVar8 = 's';
  pcVar8[1] = 's';
  pcVar8[2] = '\0';
  FUN_004039d0(param_1);
  return 0;
}



uint __cdecl FUN_0040b1b0(int param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  
  uVar15 = (uint)DAT_0042b1cc;
  if (param_1 == 0) {
    return 0xffffffff;
  }
  uVar1 = FUN_0040be90(1,uVar15,0x15,(char *)(param_1 + 0xc));
  uVar2 = FUN_0040be90(1,uVar15,0x14,(char *)(param_1 + 0x10));
  uVar3 = FUN_0040be90(1,uVar15,0x16,(char *)(param_1 + 0x14));
  uVar4 = FUN_0040be90(1,uVar15,0x17,(char *)(param_1 + 0x18));
  uVar5 = FUN_0040be90(1,uVar15,0x18,(char *)(param_1 + 0x1c));
  FUN_0040b300(*(char **)(param_1 + 0x1c));
  uVar6 = FUN_0040be90(1,uVar15,0x50,(char *)(param_1 + 0x20));
  uVar7 = FUN_0040be90(1,uVar15,0x51,(char *)(param_1 + 0x24));
  uVar8 = FUN_0040be90(0,uVar15,0x1a,(char *)(param_1 + 0x28));
  uVar9 = FUN_0040be90(0,uVar15,0x19,(char *)(param_1 + 0x29));
  uVar10 = FUN_0040be90(0,uVar15,0x54,(char *)(param_1 + 0x2a));
  uVar11 = FUN_0040be90(0,uVar15,0x55,(char *)(param_1 + 0x2b));
  uVar12 = FUN_0040be90(0,uVar15,0x56,(char *)(param_1 + 0x2c));
  uVar13 = FUN_0040be90(0,uVar15,0x57,(char *)(param_1 + 0x2d));
  uVar14 = FUN_0040be90(0,uVar15,0x52,(char *)(param_1 + 0x2e));
  uVar15 = FUN_0040be90(0,uVar15,0x53,(char *)(param_1 + 0x2f));
  return uVar1 | uVar2 | uVar3 | uVar4 | uVar5 | uVar6 | uVar7 | uVar8 | uVar9 | uVar10 | uVar11 |
         uVar12 | uVar13 | uVar14 | uVar15;
}



void __cdecl FUN_0040b300(char *param_1)

{
  char *pcVar1;
  char cVar2;
  char *pcVar3;
  
  cVar2 = *param_1;
  do {
    if (cVar2 == '\0') {
      return;
    }
    if ((cVar2 < '0') || ('9' < cVar2)) {
      pcVar3 = param_1;
      if (cVar2 != ';') goto LAB_0040b316;
      do {
        *pcVar3 = pcVar3[1];
        pcVar1 = pcVar3 + 1;
        pcVar3 = pcVar3 + 1;
      } while (*pcVar1 != '\0');
    }
    else {
      *param_1 = cVar2 + -0x30;
LAB_0040b316:
      param_1 = param_1 + 1;
    }
    cVar2 = *param_1;
  } while( true );
}



void __cdecl FUN_0040b340(int param_1)

{
  if ((param_1 != 0) && (*(uint **)(param_1 + 0xc) != &DAT_0042b220)) {
    FUN_004039d0(*(uint **)(param_1 + 0xc));
    FUN_004039d0(*(uint **)(param_1 + 0x10));
    FUN_004039d0(*(uint **)(param_1 + 0x14));
    FUN_004039d0(*(uint **)(param_1 + 0x18));
    FUN_004039d0(*(uint **)(param_1 + 0x1c));
    FUN_004039d0(*(uint **)(param_1 + 0x20));
    FUN_004039d0(*(uint **)(param_1 + 0x24));
  }
  return;
}

uint __cdecl FUN_0040b6c0(uint param_1)

{
  uint uVar1;
  uint uVar2;
  LPCWSTR pWVar3;
  int iVar4;
  uint local_8 [2];
  
  uVar1 = param_1;
  if (DAT_0042b0a8 == 0) {
    if ((0x40 < (int)param_1) && ((int)param_1 < 0x5b)) {
      return param_1 + 0x20;
    }
  }
  else {
    if ((int)param_1 < 0x100) {
      if (DAT_00427f54 < 2) {
        uVar2 = (byte)PTR_DAT_00427d48[param_1 * 2] & 1;
      }
      else {
        uVar2 = FUN_00408db0(param_1,1);
      }
      if (uVar2 == 0) {
        return uVar1;
      }
    }
    uVar2 = param_1;
    if ((PTR_DAT_00427d48[((int)uVar1 >> 8 & 0xffU) * 2 + 1] & 0x80) == 0) {
      param_1._0_2_ = (ushort)(byte)uVar1;
      pWVar3 = (LPCWSTR)0x1;
    }
    else {
      param_1._0_2_ = CONCAT11((byte)uVar1,(char)(uVar1 >> 8));
      param_1._3_1_ = SUB41(uVar2,3);
      param_1._0_3_ = (uint3)(ushort)param_1;
      pWVar3 = (LPCWSTR)0x2;
    }
    iVar4 = FUN_00407da0(DAT_0042b0a8,0x100,(char *)&param_1,pWVar3,(LPWSTR)local_8,3,0,1);
    if (iVar4 == 0) {
      return uVar1;
    }
    if (iVar4 == 1) {
      return local_8[0] & 0xff;
    }
    param_1 = (local_8[0] >> 8 & 0xff) << 8 | local_8[0] & 0xff;
  }
  return param_1;
}



uint32_t __cdecl FUN_0040b7c0(DWORD *param_1)

{
  DWORD *pDVar1;
  bool bVar2;
  DWORD *pDVar3;
  DWORD *pDVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  code *pcVar8;
  uint32_t *puVar9;
  bool bVar10;
  DWORD local_4;
  
  pDVar3 = param_1;
  bVar2 = false;
  pDVar4 = param_1;
  switch(param_1) {
  case (DWORD *)0x2:
    puVar9 = &DAT_0042b200;
    bVar2 = true;
    pcVar8 = DAT_0042b200;
    break;
  default:
    return 0xffffffff;
  case (DWORD *)0x4:
  case (DWORD *)0x8:
  case (DWORD *)0xb:
    pDVar4 = FUN_00406380();
    uVar5 = FUN_0040b9d0((int)param_1,pDVar4[0x14]);
    puVar9 = (uint32_t *)(uVar5 + 8);
    pcVar8 = (code *)*puVar9;
    break;
  case (DWORD *)0xf:
    puVar9 = &DAT_0042b20c;
    bVar2 = true;
    pcVar8 = DAT_0042b20c;
    break;
  case (DWORD *)0x15:
    puVar9 = &DAT_0042b204;
    bVar2 = true;
    pcVar8 = DAT_0042b204;
    break;
  case (DWORD *)0x16:
    puVar9 = &DAT_0042b208;
    bVar2 = true;
    pcVar8 = DAT_0042b208;
  }
  if (bVar2) {
    FUN_00407250(1);
  }
  if (pcVar8 == (code *)0x1) {
    if (!bVar2) {
      return 0;
    }
    FUN_004072d0(1);
    return 0;
  }
  if (pcVar8 == (code *)0x0) {
    if (bVar2) {
      FUN_004072d0(1);
    }
                    // WARNING: Subroutine does not return
    __exit(3);
  }
  if (((param_1 == (DWORD *)0x8) || (param_1 == (DWORD *)0xb)) || (param_1 == (DWORD *)0x4)) {
    pDVar1 = (DWORD *)pDVar4[0x15];
    bVar10 = param_1 == (DWORD *)0x8;
    pDVar4[0x15] = 0;
    param_1 = pDVar1;
    if (bVar10) {
      local_4 = pDVar4[0x16];
      pDVar4[0x16] = 0x8c;
      goto LAB_0040b8f3;
    }
  }
  else {
LAB_0040b8f3:
    if (pDVar3 == (DWORD *)0x8) {
      if (DAT_00425b90 < DAT_00425b94 + DAT_00425b90) {
        iVar7 = DAT_00425b90 * 0xc;
        iVar6 = DAT_00425b90;
        do {
          iVar6 = iVar6 + 1;
          *(uint32_t *)(pDVar4[0x14] + 8 + iVar7) = 0;
          iVar7 = iVar7 + 0xc;
        } while (iVar6 < DAT_00425b94 + DAT_00425b90);
      }
      goto LAB_0040b938;
    }
  }
  *puVar9 = 0;
LAB_0040b938:
  if (bVar2) {
    FUN_004072d0(1);
  }
  if (pDVar3 == (DWORD *)0x8) {
    (*pcVar8)(8,pDVar4[0x16]);
  }
  else {
    (*pcVar8)(pDVar3);
    if ((pDVar3 != (DWORD *)0xb) && (pDVar3 != (DWORD *)0x4)) {
      return 0;
    }
  }
  pDVar4[0x15] = (DWORD)param_1;
  if (pDVar3 == (DWORD *)0x8) {
    pDVar4[0x16] = local_4;
  }
  return 0;
}



uint __cdecl FUN_0040b9d0(int param_1,uint param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_2;
  if (*(int *)(param_2 + 4) != param_1) {
    uVar3 = param_2;
    do {
      uVar2 = uVar3 + 0xc;
      if (param_2 + DAT_00425b9c * 0xc <= uVar2) break;
      piVar1 = (int *)(uVar3 + 0x10);
      uVar3 = uVar2;
    } while (*piVar1 != param_1);
  }
  if ((param_2 + DAT_00425b9c * 0xc <= uVar2) || (*(int *)(uVar2 + 4) != param_1)) {
    uVar2 = 0;
  }
  return uVar2;
}



uint32_t __cdecl FUN_0040bcd0(uint param_1)

{
  DWORD *pDVar1;
  
  if ((param_1 < DAT_0042c380) &&
     ((*(byte *)((&DAT_0042c280)[(int)param_1 >> 5] + 4 + (param_1 & 0x1f) * 0x24) & 1) != 0)) {
    return *(uint32_t *)((&DAT_0042c280)[(int)param_1 >> 5] + (param_1 & 0x1f) * 0x24);
  }
  pDVar1 = FUN_00404e50();
  *pDVar1 = 9;
  pDVar1 = FUN_00404e60();
  *pDVar1 = 0;
  return 0xffffffff;
}



void __cdecl FUN_0040bd20(uint param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (param_1 & 0x1f) * 0x24;
  iVar1 = (&DAT_0042c280)[(int)param_1 >> 5] + iVar2;
  if (*(int *)(iVar1 + 8) == 0) {
    FUN_00407250(0x11);
    if (*(int *)(iVar1 + 8) == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)(iVar1 + 0xc));
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
    }
    FUN_004072d0(0x11);
  }
  EnterCriticalSection((LPCRITICAL_SECTION)((&DAT_0042c280)[(int)param_1 >> 5] + 0xc + iVar2));
  return;
}



void __cdecl FUN_0040bd90(uint param_1)

{
  LeaveCriticalSection
            ((LPCRITICAL_SECTION)
             ((&DAT_0042c280)[(int)param_1 >> 5] + 0xc + (param_1 & 0x1f) * 0x24));
  return;
}



void FUN_0040bdc0(void)

{
  __amsg_exit(2);
  return;
}



int __cdecl FUN_0040bdd0(byte *param_1,byte *param_2,LPWSTR param_3)

{
  int iVar1;
  
  if (param_3 == (LPWSTR)0x0) {
    return 0;
  }
  iVar1 = FUN_0040c2a0(DAT_0042aeb4,1,param_1,param_3,param_2,(int)param_3,DAT_0042aeb0);
  if (iVar1 == 0) {
    return 0x7fffffff;
  }
  return iVar1 + -2;
}



uint32_t FUN_0040be10(void)

{
  LPCWSTR lpWideCharStr;
  uint cbMultiByte;
  byte *lpMultiByteStr;
  int iVar1;
  int *piVar2;
  
  lpWideCharStr = (LPCWSTR)*DAT_0042ac88;
  piVar2 = DAT_0042ac88;
  if (lpWideCharStr == (LPCWSTR)0x0) {
    return 0;
  }
  while (((cbMultiByte = WideCharToMultiByte(1,0,lpWideCharStr,-1,(LPSTR)0x0,0,(LPCSTR)0x0,
                                             (LPBOOL)0x0), cbMultiByte != 0 &&
          (lpMultiByteStr = (byte *)FUN_00403b50(cbMultiByte), lpMultiByteStr != (byte *)0x0)) &&
         (iVar1 = WideCharToMultiByte(1,0,(LPCWSTR)*piVar2,-1,(LPSTR)lpMultiByteStr,cbMultiByte,
                                      (LPCSTR)0x0,(LPBOOL)0x0), iVar1 != 0))) {
    FUN_0040c5a0(lpMultiByteStr,0);
    lpWideCharStr = (LPCWSTR)piVar2[1];
    piVar2 = piVar2 + 1;
    if (lpWideCharStr == (LPCWSTR)0x0) {
      return 0;
    }
  }
  return 0xffffffff;
}



uint32_t __cdecl FUN_0040be90(int param_1,LCID param_2,LCTYPE param_3,char *param_4)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  DWORD DVar4;
  LPSTR _Source;
  char *_Dest;
  int iVar5;
  byte *pbVar6;
  CHAR local_80 [128];
  
  if (param_1 != 1) {
    if (param_1 != 0) {
      return 0xffffffff;
    }
    iVar5 = FUN_0040c8a0(param_2,param_3,(LPWSTR)&DAT_0042b218,4,0);
    if (iVar5 != 0) {
      pbVar6 = &DAT_0042b218;
      *param_4 = '\0';
      while( true ) {
        bVar1 = *pbVar6;
        if (DAT_00427f54 < 2) {
          uVar3 = (byte)PTR_DAT_00427d48[(uint)bVar1 * 2] & 4;
        }
        else {
          uVar3 = FUN_00408db0((uint)bVar1,4);
        }
        if (uVar3 == 0) break;
        pbVar6 = pbVar6 + 2;
        *param_4 = *param_4 * '\n' + bVar1 + -0x30;
        if (0x42b21f < (int)pbVar6) {
          return 0;
        }
      }
      return 0;
    }
    return 0xffffffff;
  }
  _Source = local_80;
  bVar2 = false;
  uVar3 = FUN_0040c9d0(param_2,param_3,local_80,0x80,0);
  if (uVar3 == 0) {
    DVar4 = GetLastError();
    if (((DVar4 != 0x7a) || (uVar3 = FUN_0040c9d0(param_2,param_3,(LPSTR)0x0,0,0), uVar3 == 0)) ||
       (_Source = (LPSTR)FUN_00403b50(uVar3), _Source == (LPSTR)0x0)) goto LAB_0040bf40;
    bVar2 = true;
    uVar3 = FUN_0040c9d0(param_2,param_3,_Source,uVar3,0);
    if (uVar3 == 0) goto LAB_0040bf40;
  }
  _Dest = (char *)FUN_00403b50(uVar3);
  *(char **)param_4 = _Dest;
  if (_Dest != (char *)0x0) {
    _strncpy(_Dest,_Source,uVar3);
    if (!bVar2) {
      return 0;
    }
    FUN_004039d0(_Source);
    return 0;
  }
LAB_0040bf40:
  if (!bVar2) {
    return 0xffffffff;
  }
  FUN_004039d0(_Source);
  return 0xffffffff;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t __cdecl FUN_0040c040(byte *param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  byte bVar3;
  ushort uVar4;
  uint uVar5;
  uint32_t uVar6;
  uint uVar7;
  bool bVar8;
  uint uVar9;
  
  iVar2 = _DAT_0042c268;
  uVar6 = 0;
  if (param_3 != 0) {
    if (DAT_0042b0a8 == 0) {
      do {
        bVar3 = *param_1;
        cVar1 = *param_2;
        uVar4 = CONCAT11(bVar3,cVar1);
        if (bVar3 == 0) break;
        uVar4 = CONCAT11(bVar3,cVar1);
        uVar7 = (uint)uVar4;
        if (cVar1 == '\0') break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar7 = (uint)CONCAT11(bVar3 + 0x20,cVar1);
        }
        uVar4 = (ushort)uVar7;
        bVar3 = (byte)uVar7;
        if ((0x40 < bVar3) && (bVar3 < 0x5b)) {
          uVar4 = (ushort)CONCAT31((int3)(uVar7 >> 8),bVar3 + 0x20);
        }
        bVar3 = (byte)(uVar4 >> 8);
        bVar8 = bVar3 < (byte)uVar4;
        if (bVar3 != (byte)uVar4) goto LAB_0040c09f;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar3 = (byte)(uVar4 >> 8);
      bVar8 = bVar3 < (byte)uVar4;
      if (bVar3 != (byte)uVar4) {
LAB_0040c09f:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
    }
    else {
      LOCK();
      _DAT_0042c268 = _DAT_0042c268 + 1;
      UNLOCK();
      bVar8 = 0 < DAT_0042c264;
      if (bVar8) {
        LOCK();
        UNLOCK();
        _DAT_0042c268 = iVar2;
        FUN_00407250(0x13);
      }
      uVar9 = (uint)bVar8;
      uVar7 = 0;
      uVar5 = 0;
      do {
        uVar5 = CONCAT31((int3)(uVar5 >> 8),*param_1);
        uVar7 = CONCAT31((int3)(uVar7 >> 8),*param_2);
        if ((uVar5 == 0) || (uVar7 == 0)) break;
        param_1 = param_1 + 1;
        param_2 = param_2 + 1;
        uVar7 = FUN_0040b6c0(uVar7);
        uVar5 = FUN_0040b6c0(uVar5);
        bVar8 = uVar5 < uVar7;
        if (uVar5 != uVar7) goto LAB_0040c115;
        param_3 = param_3 + -1;
      } while (param_3 != 0);
      uVar6 = 0;
      bVar8 = uVar5 < uVar7;
      if (uVar5 != uVar7) {
LAB_0040c115:
        uVar6 = 0xffffffff;
        if (!bVar8) {
          uVar6 = 1;
        }
      }
      if (uVar9 == 0) {
        LOCK();
        _DAT_0042c268 = _DAT_0042c268 + -1;
        UNLOCK();
      }
      else {
        FUN_004072d0(0x13);
      }
    }
  }
  return uVar6;
}



int __cdecl
FUN_0040c2a0(LCID param_1,DWORD param_2,byte *param_3,LPWSTR param_4,byte *param_5,int param_6,
            UINT param_7)

{
  int iVar1;
  LPWSTR cbMultiByte;
  BOOL BVar2;
  BYTE *pBVar3;
  PCNZWCH lpWideCharStr;
  int iVar4;
  int iVar5;
  int local_18;
  _cpinfo local_14;
  
  if (DAT_0042b228 == 0) {
    iVar1 = CompareStringW(0,0,L"",1,L"",1);
    if (iVar1 == 0) {
      iVar1 = CompareStringA(0,0,"",1,"",1);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_0042b228 = 2;
    }
    else {
      DAT_0042b228 = 1;
    }
  }
  cbMultiByte = param_4;
  if (0 < (int)param_4) {
    cbMultiByte = (LPWSTR)FUN_0040c570((char *)param_3,(int)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_0040c570((char *)param_5,param_6);
  }
  if (DAT_0042b228 == 2) {
    iVar1 = CompareStringA(param_1,param_2,(PCNZCH)param_3,(int)cbMultiByte,(PCNZCH)param_5,param_6)
    ;
    return iVar1;
  }
  local_18 = DAT_0042b228;
  if (DAT_0042b228 == 1) {
    local_18 = 0;
    param_4 = (LPWSTR)0x0;
    if (param_7 == 0) {
      param_7 = DAT_0042b0b8;
    }
    if ((cbMultiByte == (LPWSTR)0x0) || (param_6 == 0)) {
      if (cbMultiByte == (LPWSTR)param_6) {
        return 2;
      }
      if (1 < param_6) {
        return 1;
      }
      if (1 < (int)cbMultiByte) {
        return 3;
      }
      BVar2 = GetCPInfo(param_7,&local_14);
      if (BVar2 == 0) {
        return 0;
      }
      if (0 < (int)cbMultiByte) {
        if (local_14.MaxCharSize < 2) {
          return 3;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 3;
          }
          if ((*pBVar3 <= *param_3) && (*param_3 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
      if (0 < param_6) {
        if (local_14.MaxCharSize < 2) {
          return 1;
        }
        pBVar3 = local_14.LeadByte;
        while( true ) {
          if ((local_14.LeadByte[0] == 0) || (pBVar3[1] == 0)) {
            return 1;
          }
          if ((*pBVar3 <= *param_5) && (*param_5 <= pBVar3[1])) break;
          local_14.LeadByte[0] = pBVar3[2];
          pBVar3 = pBVar3 + 2;
        }
        return 2;
      }
    }
    iVar1 = MultiByteToWideChar(param_7,9,(LPCSTR)param_3,(int)cbMultiByte,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      return 0;
    }
    lpWideCharStr = (PCNZWCH)FUN_00403b50(iVar1 * 2);
    if (lpWideCharStr == (PCNZWCH)0x0) {
      return 0;
    }
    iVar4 = MultiByteToWideChar(param_7,1,(LPCSTR)param_3,(int)cbMultiByte,lpWideCharStr,iVar1);
    if ((((iVar4 != 0) &&
         (iVar4 = MultiByteToWideChar(param_7,9,(LPCSTR)param_5,param_6,(LPWSTR)0x0,0), iVar4 != 0))
        && (param_4 = (LPWSTR)FUN_00403b50(iVar4 * 2), param_4 != (LPWSTR)0x0)) &&
       (iVar5 = MultiByteToWideChar(param_7,1,(LPCSTR)param_5,param_6,param_4,iVar4), iVar5 != 0)) {
      local_18 = CompareStringW(param_1,param_2,lpWideCharStr,iVar1,param_4,iVar4);
    }
    FUN_004039d0((uint *)lpWideCharStr);
    FUN_004039d0((uint *)param_4);
  }
  return local_18;
}



int __cdecl FUN_0040c570(char *param_1,int param_2)

{
  char *pcVar1;
  int iVar2;
  
  iVar2 = param_2;
  for (pcVar1 = param_1; (iVar2 != 0 && (iVar2 = iVar2 + -1, *pcVar1 != '\0')); pcVar1 = pcVar1 + 1)
  {
  }
  if (*pcVar1 != '\0') {
    return param_2;
  }
  return (int)pcVar1 - (int)param_1;
}



uint32_t __cdecl FUN_0040c5a0(byte *param_1,int param_2)

{
  byte bVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  LPWSTR pWVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  byte *pbVar11;
  bool bVar12;
  
  if (param_1 == (byte *)0x0) {
    return 0xffffffff;
  }
  pbVar4 = FUN_00403f80(param_1,0x3d);
  if (pbVar4 == (byte *)0x0) {
    return 0xffffffff;
  }
  if (param_1 == pbVar4) {
    return 0xffffffff;
  }
  bVar12 = pbVar4[1] == 0;
  if (DAT_0042ac80 == DAT_0042ac84) {
    DAT_0042ac80 = FUN_0040c830(DAT_0042ac80);
  }
  if (DAT_0042ac80 == (int *)0x0) {
    if ((param_2 == 0) || (DAT_0042ac88 == (uint32_t *)0x0)) {
      if (bVar12) {
        return 0;
      }
      DAT_0042ac80 = (int *)FUN_00403b50(4);
      if (DAT_0042ac80 == (int *)0x0) {
        return 0xffffffff;
      }
      *DAT_0042ac80 = 0;
      if (DAT_0042ac88 == (uint32_t *)0x0) {
        DAT_0042ac88 = (uint32_t *)FUN_00403b50(4);
        if (DAT_0042ac88 == (uint32_t *)0x0) {
          return 0xffffffff;
        }
        *DAT_0042ac88 = 0;
      }
    }
    else {
      iVar5 = FUN_0040be10();
      if (iVar5 != 0) {
        return 0xffffffff;
      }
    }
  }
  piVar7 = DAT_0042ac80;
  pWVar6 = (LPWSTR)(pbVar4 + -(int)param_1);
  iVar5 = FUN_0040c7b0(param_1,pWVar6);
  if ((iVar5 < 0) || (*piVar7 == 0)) {
    if (bVar12) {
      return 0;
    }
    if (iVar5 < 0) {
      iVar5 = -iVar5;
    }
    piVar7 = FUN_004056d0(piVar7,iVar5 * 4 + 8);
    if (piVar7 == (int *)0x0) {
      return 0xffffffff;
    }
    piVar7[iVar5] = (int)param_1;
    piVar7[iVar5 + 1] = 0;
    DAT_0042ac80 = piVar7;
  }
  else if (bVar12) {
    FUN_004039d0((uint *)piVar7[iVar5]);
    iVar2 = piVar7[iVar5];
    piVar3 = piVar7 + iVar5;
    while (iVar2 != 0) {
      *piVar3 = piVar3[1];
      iVar5 = iVar5 + 1;
      iVar2 = piVar3[1];
      piVar3 = piVar3 + 1;
    }
    piVar7 = FUN_004056d0(piVar7,iVar5 * 4);
    if (piVar7 != (int *)0x0) {
      DAT_0042ac80 = piVar7;
    }
  }
  else {
    piVar7[iVar5] = (int)param_1;
  }
  if (param_2 != 0) {
    uVar8 = 0xffffffff;
    pbVar4 = param_1;
    do {
      if (uVar8 == 0) break;
      uVar8 = uVar8 - 1;
      bVar1 = *pbVar4;
      pbVar4 = pbVar4 + 1;
    } while (bVar1 != 0);
    pbVar4 = (byte *)FUN_00403b50(~uVar8 + 1);
    if (pbVar4 != (byte *)0x0) {
      uVar8 = 0xffffffff;
      do {
        pbVar10 = param_1;
        if (uVar8 == 0) break;
        uVar8 = uVar8 - 1;
        pbVar10 = param_1 + 1;
        bVar1 = *param_1;
        param_1 = pbVar10;
      } while (bVar1 != 0);
      uVar8 = ~uVar8;
      pbVar10 = pbVar10 + -uVar8;
      pbVar11 = pbVar4;
      for (uVar9 = uVar8 >> 2; uVar9 != 0; uVar9 = uVar9 - 1) {
        *(uint32_t *)pbVar11 = *(uint32_t *)pbVar10;
        pbVar10 = pbVar10 + 4;
        pbVar11 = pbVar11 + 4;
      }
      for (uVar8 = uVar8 & 3; uVar8 != 0; uVar8 = uVar8 - 1) {
        *pbVar11 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        pbVar11 = pbVar11 + 1;
      }
      pbVar4[(int)pWVar6] = 0;
      SetEnvironmentVariableA
                ((LPCSTR)pbVar4,(LPCSTR)(~-(uint)bVar12 & (uint)(pbVar4 + 1 + (int)pWVar6)));
      FUN_004039d0(pbVar4);
      return 0;
    }
  }
  return 0;
}



int __cdecl FUN_0040c7b0(byte *param_1,LPWSTR param_2)

{
  byte *pbVar1;
  int iVar2;
  int *piVar3;
  
  pbVar1 = (byte *)*DAT_0042ac80;
  piVar3 = DAT_0042ac80;
  if (pbVar1 == (byte *)0x0) {
    return 0;
  }
  while ((iVar2 = FUN_0040bdd0(param_1,pbVar1,param_2), iVar2 != 0 ||
         ((*(char *)(*piVar3 + (int)param_2) != '=' && (*(char *)(*piVar3 + (int)param_2) != '\0')))
         )) {
    pbVar1 = (byte *)piVar3[1];
    piVar3 = piVar3 + 1;
    if (pbVar1 == (byte *)0x0) {
      return -((int)piVar3 - (int)DAT_0042ac80 >> 2);
    }
  }
  return (int)piVar3 - (int)DAT_0042ac80 >> 2;
}



uint32_t * __cdecl FUN_0040c830(int *param_1)

{
  int iVar1;
  int *piVar2;
  uint32_t *puVar3;
  char *pcVar4;
  int iVar5;
  uint32_t *puVar6;
  
  iVar5 = 0;
  if (param_1 != (int *)0x0) {
    iVar1 = *param_1;
    piVar2 = param_1;
    while (iVar1 != 0) {
      piVar2 = piVar2 + 1;
      iVar5 = iVar5 + 1;
      iVar1 = *piVar2;
    }
    puVar3 = (uint32_t *)FUN_00403b50(iVar5 * 4 + 4);
    if (puVar3 == (uint32_t *)0x0) {
      __amsg_exit(9);
    }
    pcVar4 = (char *)*param_1;
    puVar6 = puVar3;
    while (pcVar4 != (char *)0x0) {
      param_1 = param_1 + 1;
      pcVar4 = FUN_00403810(pcVar4);
      *puVar6 = pcVar4;
      puVar6 = puVar6 + 1;
      pcVar4 = (char *)*param_1;
    }
    *puVar6 = 0;
    return puVar3;
  }
  return (uint32_t *)0x0;
}



int __cdecl FUN_0040c8a0(LCID param_1,LCTYPE param_2,LPWSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  uint cchData;
  LPSTR lpLCData;
  
  if (DAT_0042b22c == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_0042b22c = 2;
    }
    else {
      DAT_0042b22c = 1;
    }
  }
  if (DAT_0042b22c == 1) {
    iVar1 = GetLocaleInfoW(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_0042b22c != 2) {
    return DAT_0042b22c;
  }
  if (param_5 == 0) {
    param_5 = DAT_0042b0b8;
  }
  cchData = GetLocaleInfoA(param_1,param_2,(LPSTR)0x0,0);
  if (cchData != 0) {
    lpLCData = (LPSTR)FUN_00403b50(cchData);
    if (lpLCData == (LPSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoA(param_1,param_2,lpLCData,cchData);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,(LPWSTR)0x0,0);
        if (iVar1 != 0) {
          FUN_004039d0(lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = MultiByteToWideChar(param_5,1,lpLCData,-1,param_3,param_4);
        if (iVar1 != 0) {
          FUN_004039d0(lpLCData);
          return iVar1;
        }
      }
    }
    FUN_004039d0(lpLCData);
    return 0;
  }
  return 0;
}



int __cdecl FUN_0040c9d0(LCID param_1,LCTYPE param_2,LPSTR param_3,int param_4,UINT param_5)

{
  int iVar1;
  LPWSTR lpLCData;
  
  if (DAT_0042b230 == 0) {
    iVar1 = GetLocaleInfoW(0,1,(LPWSTR)0x0,0);
    if (iVar1 == 0) {
      iVar1 = GetLocaleInfoA(0,1,(LPSTR)0x0,0);
      if (iVar1 == 0) {
        return 0;
      }
      DAT_0042b230 = 2;
    }
    else {
      DAT_0042b230 = 1;
    }
  }
  if (DAT_0042b230 == 2) {
    iVar1 = GetLocaleInfoA(param_1,param_2,param_3,param_4);
    return iVar1;
  }
  if (DAT_0042b230 != 1) {
    return DAT_0042b230;
  }
  if (param_5 == 0) {
    param_5 = DAT_0042b0b8;
  }
  iVar1 = GetLocaleInfoW(param_1,param_2,(LPWSTR)0x0,0);
  if (iVar1 != 0) {
    lpLCData = (LPWSTR)FUN_00403b50(iVar1 * 2);
    if (lpLCData == (LPWSTR)0x0) {
      return 0;
    }
    iVar1 = GetLocaleInfoW(param_1,param_2,lpLCData,iVar1);
    if (iVar1 != 0) {
      if (param_4 == 0) {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,(LPSTR)0x0,0,(LPCSTR)0x0,(LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_004039d0((uint *)lpLCData);
          return iVar1;
        }
      }
      else {
        iVar1 = WideCharToMultiByte(param_5,0x220,lpLCData,-1,param_3,param_4,(LPCSTR)0x0,
                                    (LPBOOL)0x0);
        if (iVar1 != 0) {
          FUN_004039d0((uint *)lpLCData);
          return iVar1;
        }
      }
    }
    FUN_004039d0((uint *)lpLCData);
    return 0;
  }
  return 0;
}



void RtlUnwind(PVOID TargetFrame,PVOID TargetIp,PEXCEPTION_RECORD ExceptionRecord,PVOID ReturnValue)

{
                    // WARNING: Could not recover jumptable at 0x0040cc50. Too many branches
                    // WARNING: Treating indirect jump as call
  RtlUnwind(TargetFrame,TargetIp,ExceptionRecord,ReturnValue);
  return;
}



LPARAM ReuseDDElParam(LPARAM lParam,UINT msgIn,UINT msgOut,UINT_PTR uiLo,UINT_PTR uiHi)

{
  LPARAM LVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040cc56. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = ReuseDDElParam(lParam,msgIn,msgOut,uiLo,uiHi);
  return LVar1;
}



bool UnpackDDElParam(UINT msg,LPARAM lParam,PUINT_PTR puiLo,PUINT_PTR puiHi)

{
  bool BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040cc5c. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = UnpackDDElParam(msg,lParam,puiLo,puiHi);
  return BVar1;
}



short GetFileTitleA(LPCSTR param_1,LPSTR Buf,WORD cchSize)

{
  short sVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040cc62. Too many branches
                    // WARNING: Treating indirect jump as call
  sVar1 = GetFileTitleA(param_1,Buf,cchSize);
  return sVar1;
}



bool GetSaveFileNameA(LPOPENFILENAMEA param_1)

{
  bool BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040cc68. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetSaveFileNameA(param_1);
  return BVar1;
}



bool GetOpenFileNameA(LPOPENFILENAMEA param_1)
{
  bool BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040cc6e. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = GetOpenFileNameA(param_1);
  return BVar1;
}



bool ClosePrinter(HANDLE hPrinter)

{
  bool BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040cc74. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = ClosePrinter(hPrinter);
  return BVar1;
}



long DocumentPropertiesA(HWND hWnd,HANDLE hPrinter,LPSTR pDeviceName,PDEVMODEA pDevModeOutput,
                        PDEVMODEA pDevModeInput,DWORD fMode)

{
  long LVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040cc7a. Too many branches
                    // WARNING: Treating indirect jump as call
  LVar1 = DocumentPropertiesA(hWnd,hPrinter,pDeviceName,pDevModeOutput,pDevModeInput,fMode);
  return LVar1;
}



bool OpenPrinterA(LPSTR pPrinterName,LPHANDLE phPrinter,LPPRINTER_DEFAULTSA pDefault)

{
  bool BVar1;
  
                    // WARNING: Could not recover jumptable at 0x0040cc80. Too many branches
                    // WARNING: Treating indirect jump as call
  BVar1 = OpenPrinterA(pPrinterName,phPrinter,pDefault);
  return BVar1;
}



HANDLE __cdecl FUN_0040cc90(HWND param_1)

{
  HANDLE pvVar1;
  
  if (param_1 == (HWND)0x0) {
    return (HANDLE)0x0;
  }
  pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3ce);
  return pvVar1;
}



HANDLE __cdecl FUN_0040ccb0(HWND param_1,int param_2) {
  HANDLE hData;
  
  hData = FUN_0040cc90(param_1);
  if (hData == (HANDLE)0x0) {
    hData = DAT_0042ceb0;
    if (param_2 != 6) {
      hData = (HANDLE)(&DAT_0042ce24)[param_2 * 6];
    }
    SetPropA(param_1,(LPCSTR)(uint)DAT_0042c3ce,hData);
  }
  return hData;
}



void __cdecl FUN_0040cd00(HWND param_1,LONG param_2)

{
  HANDLE pvVar1;
  BOOL BVar2;
  CHAR local_10 [16];
  
  pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3c8);
  if (pvVar1 == (HANDLE)0x0) {
    pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3ce);
    if (pvVar1 == (HANDLE)0x0) {
      pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3d2);
      if (pvVar1 == (HANDLE)0x0) {
        pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3cc);
        if (pvVar1 == (HANDLE)0x0) {
          pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3d0);
          if (pvVar1 == (HANDLE)0x0) {
            pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3ca);
            if (pvVar1 == (HANDLE)0x0) {
              pvVar1 = FUN_0040cc90(param_1);
              if (pvVar1 == (HANDLE)0x0) {
                if (DAT_0042cec5 != '\0') {
                  BVar2 = IsWindowUnicode(param_1);
                  if (BVar2 == 0) {
                    GetClassNameA(param_1,local_10,0x10);
                    lstrcmpiA(local_10,&DAT_00428c50);
                  }
                }
                pvVar1 = (HANDLE)SetWindowLongA(param_1,-4,param_2);
                SetPropA(param_1,(LPCSTR)(uint)DAT_0042c3ce,pvVar1);
              }
            }
          }
        }
      }
    }
  }
  return;
}



void __cdecl FUN_0040cea0(uint32_t param_1,uint32_t param_2)

{
  DWORD dwThreadId;
  
  DAT_0042b23c = param_2;
  DAT_0042b234 = param_1;
  dwThreadId = GetCurrentThreadId();
  DAT_0042b238 = SetWindowsHookExA(4,(HOOKPROC)&LAB_0040cdf0,DAT_0042c3dc,dwThreadId);
  return;
}



LRESULT __cdecl FUN_0040cee0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  
  lpPrevWndFunc = FUN_0040ccb0(param_1,param_5);
  LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  RemovePropA(param_1,(LPCSTR)(uint)DAT_0042c3ce);
  RemovePropA(param_1,(LPCSTR)(uint)DAT_0042c3d4);
  return LVar1;
}



void __cdecl FUN_0040cf40(uint32_t *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}



void FUN_0040cf60(void)

{
  uint32_t *puVar1;
  
  puVar1 = &DAT_0042c404;
  do {
    FUN_0040cf40(puVar1);
    puVar1 = puVar1 + 1;
  } while (puVar1 < &DAT_0042c410);
  FUN_0040cf40(&DAT_0042c410);
  return;
}



void __cdecl FUN_0040cf90(HDC param_1,int *param_2)

{
  PatBlt(param_1,*param_2,param_2[1],param_2[2] - *param_2,param_2[3] - param_2[1],0xf00021);
  return;
}



void __cdecl FUN_0040cfc0(HDC param_1,int *param_2,ushort param_3,ushort param_4,ushort param_5)

{
  COLORREF color;
  RECT local_10;
  
  color = SetBkColor(param_1,*(COLORREF *)(&DAT_0042c3e4 + (uint)param_3 * 4));
  local_10.left = *param_2;
  local_10.top = param_2[1];
  local_10.right = param_2[2];
  local_10.bottom = local_10.top + 1;
  if ((param_5 & 2) != 0) {
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  local_10.bottom = param_2[3];
  local_10.right = local_10.left + 1;
  if ((param_5 & 1) != 0) {
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  if (param_3 != param_4) {
    SetBkColor(param_1,*(COLORREF *)(&DAT_0042c3e4 + (uint)param_4 * 4));
  }
  local_10.right = param_2[2];
  local_10.left = local_10.right + -1;
  if ((param_5 & 4) != 0) {
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  if ((param_5 & 8) != 0) {
    local_10.left = *param_2;
    local_10.top = local_10.bottom + -1;
    if ((param_5 & 0x1000) != 0) {
      local_10.right = local_10.right + -2;
    }
    ExtTextOutA(param_1,0,0,2,&local_10,(LPCSTR)0x0,0,(INT *)0x0);
  }
  SetBkColor(param_1,color);
  return;
}



void __cdecl FUN_0040d100(HDC param_1,int *param_2,ushort param_3)

{
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  local_10 = *param_2;
  local_c = param_2[1];
  local_8 = param_2[2];
  local_4 = param_2[3];
  FUN_0040cfc0(param_1,&local_10,7,1,param_3 & 0xf);
  local_10 = local_10 + -1;
  local_c = local_c + -1;
  local_8 = local_8 + 1;
  local_4 = local_4 + 1;
  FUN_0040cfc0(param_1,&local_10,2,0,param_3);
  return;
}



void __cdecl FUN_0040d1b0(HDC param_1,char *param_2,LONG *param_3,LONG *param_4)

{
  char cVar1;
  int c;
  char *pcVar2;
  tagSIZE *lpsz;
  tagSIZE local_108;
  char local_100 [256];
  
  pcVar2 = local_100;
  cVar1 = *param_2;
  while (cVar1 != '\0') {
    cVar1 = *param_2;
    if (cVar1 == '&') {
      param_2 = param_2 + 1;
      if (*param_2 == '\0') break;
LAB_0040d207:
      cVar1 = *param_2;
      param_2 = param_2 + 1;
      *pcVar2 = cVar1;
      pcVar2 = pcVar2 + 1;
    }
    else {
      if (DAT_0042cec5 == '\0') goto LAB_0040d207;
      if (cVar1 == DAT_0042cec4) {
        param_2 = param_2 + 1;
        if (*param_2 != '\0') goto LAB_0040d207;
        break;
      }
      if ((cVar1 != '\x1e') && (cVar1 != '\x1f')) goto LAB_0040d207;
      if (param_2[1] == '\0') break;
      param_2 = CharNextA(param_2 + 1);
    }
    cVar1 = *param_2;
  }
  lpsz = &local_108;
  *pcVar2 = '\0';
  c = lstrlenA(local_100);
  GetTextExtentPointA(param_1,local_100,c,lpsz);
  *param_3 = local_108.cx;
  *param_4 = local_108.cy;
  return;
}



uint32_t FUN_0040d260(uint32_t param_1)

{
  int iVar1;
  
  InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  DAT_0042c3c4 = DAT_0042c3c4 + 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  if (DAT_0042c3c4 == 1) {
    FUN_00410160(param_1,1);
    FUN_0040dd30();
  }
  iVar1 = FUN_0040d4e0();
  if (iVar1 != 0) {
    FUN_0040d390(param_1);
  }
  return DAT_0042c3c0;
}



uint32_t FUN_0040d2d0(int param_1)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  uint32_t *puVar4;
  uint32_t *puVar5;
  uint32_t *puVar6;
  
  iVar3 = 0;
  DVar1 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  if (0 < DAT_0042c41c) {
    do {
      if (((&DAT_0042c424)[iVar3 * 5] == DVar1) &&
         ((iVar2 = (&DAT_0042c42c)[iVar3 * 5], (&DAT_0042c42c)[iVar3 * 5] = iVar2 + -1,
          iVar2 + -1 == 0 || ((&DAT_0042c420)[iVar3 * 5] == param_1)))) {
        UnhookWindowsHookEx((HHOOK)(&DAT_0042c428)[iVar3 * 5]);
        DAT_0042c41c = DAT_0042c41c + -1;
        if (iVar3 < DAT_0042c41c) {
          puVar5 = &DAT_0042c420 + iVar3 * 5;
          do {
            iVar3 = iVar3 + 1;
            puVar4 = puVar5 + 5;
            puVar6 = puVar5;
            for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = puVar5 + 5;
          } while (iVar3 < DAT_0042c41c);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0042c41c);
  }
  DAT_0042c3c4 = DAT_0042c3c4 + -1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  if (DAT_0042c3c4 == 0) {
    FUN_0040df20();
  }
  return 1;
}



void FUN_0040d390(uint32_t param_1)

{
  FUN_0040d3a0(param_1,0);
  return;
}



uint32_t FUN_0040d3a0(uint32_t param_1,uint param_2)

{
  DWORD dwThreadId;
  int iVar1;
  HHOOK pHVar2;
  DWORD *pDVar3;
  uint uVar4;
  
  if (DAT_0042c3e0 < 0x30a) {
    return 0;
  }
  if (DAT_0042c3c0 == 0) {
    return 0;
  }
  uVar4 = param_2 | 1;
  if ((param_2 & 2) != 0) {
    uVar4 = param_2 & 0xfffffffc;
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  if (DAT_0042c41c != 0x80) {
    dwThreadId = GetCurrentThreadId();
    iVar1 = 0;
    if (0 < DAT_0042c41c) {
      pDVar3 = &DAT_0042c424;
      do {
        if (*pDVar3 == dwThreadId) {
          (&DAT_0042c42c)[iVar1 * 5] = (&DAT_0042c42c)[iVar1 * 5] + 1;
          goto LAB_0040d4a6;
        }
        pDVar3 = pDVar3 + 5;
        iVar1 = iVar1 + 1;
      } while (iVar1 < DAT_0042c41c);
    }
    pHVar2 = SetWindowsHookExA(5,FUN_0040e500,DAT_0042c3dc,dwThreadId);
    if (pHVar2 != (HHOOK)0x0) {
      (&DAT_0042c420)[DAT_0042c41c * 5] = param_1;
      (&DAT_0042c424)[DAT_0042c41c * 5] = dwThreadId;
      (&DAT_0042c428)[DAT_0042c41c * 5] = pHVar2;
      (&DAT_0042c42c)[DAT_0042c41c * 5] = 1;
      *(uint *)(&DAT_0042c430 + DAT_0042c41c * 0x14) = uVar4;
      DAT_0042c418 = DAT_0042c41c;
      DAT_0042c41c = DAT_0042c41c + 1;
      DAT_0042c414 = dwThreadId;
LAB_0040d4a6:
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
      return 1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  return 0;
}



uint32_t FUN_0040d4e0(void)

{
  DWORD DVar1;
  DWORD *pDVar2;
  int iVar3;
  
  DVar1 = GetCurrentThreadId();
  iVar3 = 0;
  if (0 < DAT_0042c41c) {
    pDVar2 = &DAT_0042c424;
    do {
      if (*pDVar2 == DVar1) {
        return 1;
      }
      pDVar2 = pDVar2 + 5;
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0042c41c);
  }
  return 0;
}



uint32_t FUN_0040d510(void)

{
  DWORD DVar1;
  int iVar2;
  int iVar3;
  uint32_t *puVar4;
  uint32_t *puVar5;
  uint32_t *puVar6;
  
  iVar3 = 0;
  DVar1 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  if (0 < DAT_0042c41c) {
    do {
      if (((&DAT_0042c424)[iVar3 * 5] == DVar1) &&
         (iVar2 = (&DAT_0042c42c)[iVar3 * 5], (&DAT_0042c42c)[iVar3 * 5] = iVar2 + -1,
         iVar2 + -1 == 0)) {
        UnhookWindowsHookEx((HHOOK)(&DAT_0042c428)[iVar3 * 5]);
        DAT_0042c41c = DAT_0042c41c + -1;
        if (iVar3 < DAT_0042c41c) {
          puVar5 = &DAT_0042c420 + iVar3 * 5;
          do {
            iVar3 = iVar3 + 1;
            puVar4 = puVar5 + 5;
            puVar6 = puVar5;
            for (iVar2 = 5; iVar2 != 0; iVar2 = iVar2 + -1) {
              *puVar6 = *puVar4;
              puVar4 = puVar4 + 1;
              puVar6 = puVar6 + 1;
            }
            puVar5 = puVar5 + 5;
          } while (iVar3 < DAT_0042c41c);
        }
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < DAT_0042c41c);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  return 1;
}



uint32_t FUN_0040d5e0(HWND param_1)

{
  code *pcVar1;
  HANDLE pvVar2;
  HWND hWnd;
  int iVar3;
  
  if (DAT_0042c3c0 != 0) {
    pcVar1 = (code *)GetWindowLongA(param_1,-4);
    iVar3 = 0;
    do {
      if ((code *)(&DAT_0042ce20)[iVar3 * 6] == pcVar1) {
        pvVar2 = FUN_0040ccb0(param_1,iVar3);
        RemovePropA(param_1,(LPCSTR)(uint)DAT_0042c3ce);
        SetWindowLongA(param_1,-4,(LONG)pvVar2);
        pcVar1 = (code *)0x0;
        iVar3 = 0x10;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < 6);
    if (iVar3 == 6) {
      if (pcVar1 == FUN_0040e190) {
        pvVar2 = FUN_0040ccb0(param_1,6);
        RemovePropA(param_1,(LPCSTR)(uint)DAT_0042c3ce);
        SetWindowLongA(param_1,-4,(LONG)pvVar2);
      }
      else {
        pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3ce);
        if (((pvVar2 != (HANDLE)0x0) ||
            (pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3d2), pvVar2 != (HANDLE)0x0)) ||
           (pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3d0), pvVar2 != (HANDLE)0x0)) {
          SetPropA(param_1,(LPCSTR)(uint)DAT_0042c3d4,(HANDLE)0x1);
        }
      }
    }
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      FUN_0040d5e0(hWnd);
    }
    return 1;
  }
  return 0;
}



void __cdecl FUN_0040d780(HWND param_1,ushort param_2,uint32_t param_3)

{
  HANDLE pvVar1;
  int local_4;
  
  pvVar1 = FUN_0040cc90(param_1);
  if (pvVar1 == (HANDLE)0x0) {
    FUN_0040e890(param_1,param_2,0,param_3);
    return;
  }
  pvVar1 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3d4);
  if (pvVar1 == (HANDLE)0x0) {
    local_4 = 0x29a;
    SendMessageA(param_1,0x1944,0,(LPARAM)&local_4);
    if (local_4 == 0x29a) {
      SendMessageA(param_1,0x1943,0,(LPARAM)&local_4);
      if (local_4 == 0x29a) {
        RemovePropA(param_1,(LPCSTR)(uint)DAT_0042c3ce);
        FUN_0040e890(param_1,param_2,0,param_3);
      }
    }
  }
  return;
}



uint32_t FUN_0040d830(HWND param_1,ushort param_2)

{
  HWND hWnd;
  HWND hWnd_00;
  
  if (DAT_0042c3c0 != 0) {
    for (hWnd = GetWindow(param_1,5); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
      FUN_0040d780(hWnd,param_2,0);
      for (hWnd_00 = GetWindow(hWnd,5); hWnd_00 != (HWND)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
        FUN_0040d780(hWnd_00,param_2,hWnd);
      }
    }
    return 1;
  }
  return 0;
}



uint32_t FUN_0040d920(uint param_1,HDC param_2,HWND param_3)

{
  HWND pHVar1;
  LONG LVar2;
  
  if (((DAT_0042c3c0 == 0) || (param_1 < 0x134)) || (param_1 == 0x137)) {
    return 0;
  }
  if (param_1 == 0x134) {
    if (DAT_0042c3e0 < 0x35f) {
      pHVar1 = GetWindow(param_3,5);
      if (pHVar1 != (HWND)0x0) {
        LVar2 = GetWindowLongA(param_3,-0x10);
        if (((byte)LVar2 & 3) != 3) goto LAB_0040d974;
      }
    }
    return 0;
  }
LAB_0040d974:
  SetTextColor(param_2,DAT_0042c3f0);
  SetBkColor(param_2,DAT_0042c3e8);
  return DAT_0042c408;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

LRESULT FUN_0040d9e0(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5)

{
  WNDPROC lpPrevWndFunc;
  LRESULT LVar1;
  BOOL BVar2;
  uint uVar3;
  HDC hdc;
  int iVar4;
  bool bVar5;
  int local_38;
  HGDIOBJ local_34;
  tagRECT local_30;
  tagRECT local_20;
  int local_10;
  int local_c;
  int local_8;
  int local_4;
  
  if (param_5 == 0) {
    lpPrevWndFunc = FUN_0040ccb0(param_1,6);
  }
  else {
    lpPrevWndFunc = (WNDPROC)0x0;
  }
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    LVar1 = DefWindowProcA(param_1,param_2,param_3,param_4);
  }
  else {
    LVar1 = CallWindowProcA(lpPrevWndFunc,param_1,param_2,param_3,param_4);
  }
  if (DAT_0042c3c0 == 0) {
    return LVar1;
  }
  BVar2 = IsIconic(param_1);
  if (BVar2 != 0) {
    return LVar1;
  }
  local_38 = 1;
  SendMessageA(param_1,0x11ef,0,(LPARAM)&local_38);
  uVar3 = GetWindowLongA(param_1,-0x10);
  if ((local_38 != 0) && ((uVar3 & 0x10400080) == 0x10400080)) {
    bVar5 = (uVar3 & 0xc00000) == 0xc00000;
    iVar4 = DAT_0042ceb8 - (uint)bVar5;
    hdc = GetWindowDC(param_1);
    GetWindowRect(param_1,&local_30);
    local_30.right = local_30.right - local_30.left;
    local_30.bottom = local_30.bottom - local_30.top;
    local_30.top = 0;
    local_30.left = 0;
    FUN_0040cfc0(hdc,&local_30.left,2,7,0xf);
    InflateRect(&local_30,-1,-1);
    FUN_0040cfc0(hdc,&local_30.left,0,2,0xf);
    InflateRect(&local_30,-1,-1);
    local_34 = SelectObject(hdc,DAT_0042c408);
    local_20.left = local_30.left;
    local_20.top = local_30.top;
    local_20.bottom = local_30.bottom;
    local_20.right = local_30.left + _DAT_0042ceb4;
    FUN_0040cf90(hdc,&local_20.left);
    OffsetRect(&local_20,(local_30.right - local_30.left) - _DAT_0042ceb4,0);
    FUN_0040cf90(hdc,&local_20.left);
    local_20.left = local_30.left + _DAT_0042ceb4;
    local_20.right = local_30.right - _DAT_0042ceb4;
    local_20.bottom = local_20.top + iVar4;
    FUN_0040cf90(hdc,&local_20.left);
    if (bVar5) {
      local_c = iVar4 + local_20.top;
      local_10 = local_20.left;
      local_8 = local_20.right;
      local_4 = DAT_0042cebc + local_c;
      FUN_0040cfc0(hdc,&local_10,2,0,0xf);
    }
    local_20.top = local_20.top + ((local_30.bottom - local_30.top) - _DAT_0042ceb4);
    local_20.bottom = local_20.top + DAT_0042ceb8;
    FUN_0040cf90(hdc,&local_20.left);
    SelectObject(hdc,local_34);
    ReleaseDC(param_1,hdc);
  }
  return LVar1;
}



void FUN_0040dc90(void)

{
  int iVar1;
  CHAR local_c [12];
  
  if (DAT_0042cec5 != '\0') {
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
    DAT_0042cec4 = 0x1e;
    GetProfileStringA(s_windows_00428c90,s_kanjimenu_00428c84,s_roman_00428c70,local_c,9);
    iVar1 = lstrcmpiA(local_c,s_kanji_00428c60);
    if (iVar1 == 0) {
      DAT_0042cec4 = 0x1f;
    }
    GetProfileStringA(s_windows_00428c90,s_hangeulmenu_00428c78,s_english_00428c68,local_c,9);
    iVar1 = lstrcmpiA(local_c,s_hangeul_00428c58);
    if (iVar1 == 0) {
      DAT_0042cec4 = 0x1f;
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  }
  return;
}



uint FUN_0040dd30(void)

{
  uint **lpClassName;
  HDC hdc;
  int iVar1;
  int iVar2;
  BOOL BVar3;
  uint32_t *puVar4;
  uint **ppuVar5;
  tagWNDCLASSA local_28;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0xc);
  iVar2 = GetDeviceCaps(hdc,0xe);
  DAT_0042c3c0 = (uint)(3 < iVar1 * iVar2);
  iVar1 = GetSystemMetrics(1);
  if ((iVar1 == 0x15e) && (iVar1 = GetSystemMetrics(0), iVar1 == 0x280)) {
    DAT_0042c3c0 = 0;
  }
  ReleaseDC((HWND)0x0,hdc);
  if (DAT_0042c3c0 != 0) {
    DAT_0042c3c8 = GlobalAddAtomA(&DAT_00428cc0);
    if ((DAT_0042c3c8 != 0) && (DAT_0042c3ce = GlobalAddAtomA(s_C3dNew_00428ca8), DAT_0042c3ce != 0)
       ) {
      DAT_0042c3cc = GlobalAddAtomA(&DAT_00428cb8);
      DAT_0042c3ca = GlobalAddAtomA(&DAT_00428cb0);
      if ((DAT_0042c3cc == 0) || (DAT_0042c3ca == 0)) {
        DAT_0042c3c0 = 0;
        return 0;
      }
      DAT_0042c3d2 = GlobalAddAtomA(s_C3dLNew_00428ca0);
      DAT_0042c3d0 = GlobalAddAtomA(s_C3dHNew_00428c98);
      if ((DAT_0042c3d2 == 0) || (DAT_0042c3d0 == 0)) {
        DAT_0042c3c0 = 0;
        return 0;
      }
      DAT_0042c3d4 = GlobalAddAtomA(&DAT_00428cc4);
      if (DAT_0042c3d4 != 0) {
        iVar1 = GetSystemMetrics(0x2a);
        DAT_0042cec5 = (char)iVar1;
        FUN_0040dc90();
        iVar1 = FUN_0040e000(1);
        if (iVar1 != 0) {
          ppuVar5 = &PTR_FUN_00421534;
          puVar4 = &DAT_0042ce20;
          do {
            lpClassName = ppuVar5 + -5;
            *puVar4 = *ppuVar5;
            ppuVar5 = ppuVar5 + 8;
            GetClassInfoA((HINSTANCE)0x0,(LPCSTR)lpClassName,&local_28);
            puVar4[1] = local_28.lpfnWndProc;
            puVar4 = puVar4 + 6;
          } while (ppuVar5 < &PTR_DAT_004215f4);
          BVar3 = GetClassInfoA((HINSTANCE)0x0,(LPCSTR)0x8002,&local_28);
          if (BVar3 == 0) {
            DAT_0042ceb0 = DefDlgProcA_exref;
          }
          else {
            DAT_0042ceb0 = local_28.lpfnWndProc;
          }
          goto LAB_0040ddcb;
        }
      }
    }
    DAT_0042c3c0 = 0;
  }
LAB_0040ddcb:
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  return DAT_0042c3c0;
}



void FUN_0040df20(void)

{
  int *piVar1;
  
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  piVar1 = &DAT_0042ce20;
  do {
    if (*piVar1 != 0) {
      *piVar1 = 0;
    }
    piVar1 = piVar1 + 6;
  } while (piVar1 < &DAT_0042ceb0);
  FUN_0040cf60();
  if (DAT_0042c3c8 != 0) {
    GlobalDeleteAtom(DAT_0042c3c8);
  }
  if (DAT_0042c3ce != 0) {
    GlobalDeleteAtom(DAT_0042c3ce);
  }
  if (DAT_0042c3cc != 0) {
    GlobalDeleteAtom(DAT_0042c3cc);
  }
  if (DAT_0042c3ca != 0) {
    GlobalDeleteAtom(DAT_0042c3ca);
  }
  if (DAT_0042c3d2 != 0) {
    GlobalDeleteAtom(DAT_0042c3d2);
  }
  if (DAT_0042c3d0 != 0) {
    GlobalDeleteAtom(DAT_0042c3d0);
  }
  if (DAT_0042c3d4 != 0) {
    GlobalDeleteAtom(DAT_0042c3d4);
  }
  DAT_0042c3c0 = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  return;
}



uint32_t __cdecl FUN_0040e000(int param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  uint uVar3;
  int iVar4;
  ushort uVar5;
  char *pcVar6;
  DWORD *pDVar7;
  DWORD *pDVar8;
  bool bVar9;
  HBITMAP local_30;
  int local_2c [3];
  DWORD local_20;
  uint local_1c;
  uint local_18;
  uint local_10;
  uint local_c;
  uint local_8;
  uint local_4;
  
  if (DAT_0042c3c0 == 0) {
    return 0;
  }
  uVar3 = 0;
  do {
    uVar5 = (short)uVar3 + 1;
    DVar1 = GetSysColor((uint)(ushort)(&DAT_004215e0)[uVar3]);
    (&local_20)[uVar3] = DVar1;
    uVar3 = (uint)uVar5;
  } while (uVar5 < 8);
  if (DAT_0042c3e0 == 0x300) {
    local_20 = 0xffffff;
  }
  if (((local_8 == 0) || (local_1c == local_8)) && (local_8 = 0xc0c0c0, local_1c != 0x808080)) {
    local_8 = 0x808080;
  }
  if (param_1 == 0) {
    iVar4 = 0x20;
    bVar9 = true;
    pcVar6 = &DAT_0042c3e4;
    pDVar7 = &local_20;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar9 = *pcVar6 == (char)*pDVar7;
      pcVar6 = pcVar6 + 1;
      pDVar7 = (DWORD *)((int)pDVar7 + 1);
    } while (bVar9);
    if (bVar9) {
      return 1;
    }
  }
  local_30 = FUN_00410230(DAT_0042c3d8,(LPCSTR)0x67c7,local_c,local_1c,local_18,local_20,local_10,
                          local_4);
  uVar3 = 0;
  do {
    uVar5 = (short)uVar3 + 1;
    pHVar2 = CreateSolidBrush((&local_20)[uVar3]);
    local_2c[uVar3] = (int)pHVar2;
    uVar3 = (uint)uVar5;
  } while (uVar5 < 3);
  uVar5 = 0;
  do {
    if (local_2c[uVar5] == 0) goto LAB_0040e158;
    uVar5 = uVar5 + 1;
  } while (uVar5 < 3);
  if (local_30 != (HBITMAP)0x0) {
    FUN_0040cf60();
    DAT_0042c404 = local_2c[0];
    DAT_0042c408 = local_2c[1];
    DAT_0042c40c = local_2c[2];
    pDVar7 = &local_20;
    pDVar8 = (DWORD *)&DAT_0042c3e4;
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pDVar8 = *pDVar7;
      pDVar7 = pDVar7 + 1;
      pDVar8 = pDVar8 + 1;
    }
    DAT_0042c410 = local_30;
    return 1;
  }
LAB_0040e158:
  uVar5 = 0;
  do {
    uVar3 = (uint)uVar5;
    uVar5 = uVar5 + 1;
    FUN_0040cf40(local_2c + uVar3);
  } while (uVar5 < 3);
  FUN_0040cf40(&local_30);
  return 0;
}



LRESULT FUN_0040e190(HWND param_1,uint param_2,HDC param_3,HWND param_4)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  BOOL BVar4;
  uint uVar5;
  int iVar6;
  HWND pHVar7;
  UINT UVar8;
  HDC pHVar9;
  HWND pHVar10;
  int local_18;
  WNDPROC local_14;
  CHAR local_10 [16];
  
  if (param_2 == 0x82) {
    LVar1 = FUN_0040cee0(param_1,0x82,(WPARAM)param_3,(LPARAM)param_4,6);
    return LVar1;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3d4);
  if (pvVar2 != (HANDLE)0x0) {
    pWVar3 = FUN_0040ccb0(param_1,6);
    LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return LVar1;
  }
  if (param_2 < 0x87) {
    if ((0x84 < param_2) || (param_2 == 0xc)) {
      if ((DAT_0042c3e0 < 0x35f) && (BVar4 = IsIconic(param_1), BVar4 == 0)) {
        LVar1 = FUN_0040d9e0(param_1,param_2,(WPARAM)param_3,(LPARAM)param_4,0);
        return LVar1;
      }
      pWVar3 = FUN_0040ccb0(param_1,6);
      LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
      return LVar1;
    }
    goto LAB_0040e224;
  }
  if (0x138 < param_2) {
    if ((0x1942 < param_2) && (param_2 < 0x1945)) {
      param_4->unused = 1;
      return 0x3ee;
    }
    goto LAB_0040e224;
  }
  if (param_2 < 0x132) {
    if (param_2 != 0x110) goto LAB_0040e224;
    local_14 = FUN_0040ccb0(param_1,6);
    if (0x35e < DAT_0042c3e0) {
      uVar5 = GetWindowLongA(param_1,-0x10);
      local_18 = 0;
      if ((uVar5 & 4) != 0) goto LAB_0040e30a;
    }
    local_18 = 1;
LAB_0040e30a:
    SendMessageA(param_1,0x11f0,0,(LPARAM)&local_18);
    if (local_18 == 0) {
      FUN_0040d5e0(param_1);
      LVar1 = CallWindowProcA(local_14,param_1,0x110,(WPARAM)param_3,(LPARAM)param_4);
      return LVar1;
    }
    LVar1 = CallWindowProcA(local_14,param_1,0x110,(WPARAM)param_3,(LPARAM)param_4);
    if ((DAT_0042c3e0 < 0x35f) || (uVar5 = GetWindowLongA(param_1,-0x10), (uVar5 & 4) == 0)) {
      FUN_0040d830(param_1,0xffff);
    }
    return LVar1;
  }
  GetClassNameA(param_1,local_10,0x10);
  iVar6 = lstrcmpA(s__32770_00428ccc,local_10);
  if (iVar6 == 0) {
    pWVar3 = (WNDPROC)GetWindowLongA(param_1,4);
    if (pWVar3 != (WNDPROC)0x0) {
      if ((pWVar3 < (WNDPROC)0xffff0001) || (0x30a < DAT_0042c3e0)) {
        iVar6 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
        if ((iVar6 != 0) && (iVar6 != 1)) goto LAB_0040e494;
        UVar8 = param_2 + 0xcbf;
        pHVar7 = param_1;
        pHVar9 = param_3;
        pHVar10 = param_4;
        pWVar3 = FUN_0040ccb0(param_1,6);
        iVar6 = CallWindowProcA(pWVar3,pHVar7,UVar8,(WPARAM)pHVar9,(LPARAM)pHVar10);
      }
      else {
        UVar8 = param_2 + 0xcbf;
        pHVar7 = param_1;
        pHVar9 = param_3;
        pHVar10 = param_4;
        pWVar3 = FUN_0040ccb0(param_1,6);
        iVar6 = CallWindowProcA(pWVar3,pHVar7,UVar8,(WPARAM)pHVar9,(LPARAM)pHVar10);
      }
      if ((iVar6 != 0) && (iVar6 != 1)) goto LAB_0040e494;
    }
LAB_0040e48d:
    iVar6 = FUN_0040d920(param_2,param_3,param_4);
  }
  else {
    UVar8 = param_2 + 0xcbf;
    pHVar7 = param_1;
    pHVar9 = param_3;
    pHVar10 = param_4;
    pWVar3 = FUN_0040ccb0(param_1,6);
    iVar6 = CallWindowProcA(pWVar3,pHVar7,UVar8,(WPARAM)pHVar9,(LPARAM)pHVar10);
    if ((iVar6 == 0) || (iVar6 == 1)) goto LAB_0040e48d;
  }
LAB_0040e494:
  if (iVar6 != 0) {
    return iVar6;
  }
LAB_0040e224:
  pWVar3 = FUN_0040ccb0(param_1,6);
  LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return LVar1;
}



uint32_t __cdecl FUN_0040e4c0(HWND param_1)

{
  HANDLE pvVar1;
  uint uVar2;
  
  pvVar1 = FUN_0040cc90(param_1);
  if (pvVar1 == (HANDLE)0x0) {
    return 0;
  }
  if (0x35e < DAT_0042c3e0) {
    uVar2 = GetWindowLongA(param_1,-0x10);
    if ((uVar2 & 4) != 0) {
      return 0;
    }
  }
  return 1;
}



void FUN_0040e500(int param_1,HWND param_2,int *param_3)

{
  int iVar1;
  DWORD DVar2;
  DWORD DVar3;
  DWORD *pDVar4;
  uint uVar5;
  int iVar6;
  HWND pHVar7;
  int iVar8;
  bool bVar9;
  int local_4;
  
  DVar3 = GetCurrentThreadId();
  EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  if (DAT_0042c414 != DVar3) {
    iVar8 = 0;
    bVar9 = DAT_0042c41c == 0;
    if (0 < DAT_0042c41c) {
      pDVar4 = &DAT_0042c424;
      do {
        DVar2 = DVar3;
        iVar1 = iVar8;
        if (*pDVar4 == DVar3) break;
        pDVar4 = pDVar4 + 5;
        iVar8 = iVar8 + 1;
        DVar2 = DAT_0042c414;
        iVar1 = DAT_0042c418;
      } while (iVar8 < DAT_0042c41c);
      DAT_0042c418 = iVar1;
      DAT_0042c414 = DVar2;
      bVar9 = iVar8 == DAT_0042c41c;
    }
    if (bVar9) {
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
      CallNextHookEx((HHOOK)0x0,param_1,(WPARAM)param_2,(LPARAM)param_3);
      return;
    }
  }
  iVar8 = DAT_0042c418;
  LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  if (param_1 != 3) goto LAB_0040e68c;
  iVar1 = *param_3;
  if (*(int *)(iVar1 + 0x28) != 0x8002) {
    if (((&DAT_0042c430)[iVar8 * 0x14] & 1) == 0) goto LAB_0040e68c;
    iVar6 = FUN_0040e4c0(*(HWND *)(iVar1 + 0xc));
    if (iVar6 == 0) {
      if ((*(HWND *)(iVar1 + 0xc) == (HWND)0x0) || (DAT_0042c3e2 == 0x18)) goto LAB_0040e68c;
      pHVar7 = GetParent(*(HWND *)(iVar1 + 0xc));
      iVar6 = FUN_0040e4c0(pHVar7);
      if (iVar6 == 0) goto LAB_0040e68c;
    }
    FUN_0040e890(param_2,0xffff,1,*(uint32_t *)(iVar1 + 0xc));
    goto LAB_0040e68c;
  }
  if (DAT_0042c3e2 != 0x20) {
    FUN_0040cea0(param_2,FUN_0040e190);
    goto LAB_0040e68c;
  }
  if (DAT_0042c3e0 < 0x35f) {
LAB_0040e5e0:
    local_4 = 1;
  }
  else {
    uVar5 = GetWindowLongA(param_2,-0x10);
    local_4 = 0;
    if ((uVar5 & 4) == 0) goto LAB_0040e5e0;
  }
  SendMessageA(param_2,0x11f0,0,(LPARAM)&local_4);
  if (local_4 != 0) {
    FUN_0040cd00(param_2,0x40e190);
  }
LAB_0040e68c:
  CallNextHookEx((HHOOK)(&DAT_0042c428)[iVar8 * 5],param_1,(WPARAM)param_2,(LPARAM)param_3);
  return;
}



uint32_t __cdecl FUN_0040e6b0(uint32_t param_1,ushort param_2)

{
  if (0x35e < DAT_0042c3e0) {
    return 0;
  }
  if ((param_2 & 0xffdf) < 10) {
    return 1;
  }
  return 0;
}



bool FUN_0040e6e0(void)

{
  int iVar1;
  HWND in_stack_00000014;
  CHAR local_10 [16];
  
  if ((0x35e < DAT_0042c3e0) && (in_stack_00000014 != (HWND)0x0)) {
    GetClassNameA(in_stack_00000014,local_10,0x10);
    iVar1 = lstrcmpA(local_10,"ComboBox");
    return (bool)('\x01' - (iVar1 == 0));
  }
  return true;
}



bool __cdecl FUN_0040e890(HWND param_1,ushort param_2,short param_3,uint32_t param_4)

{
  HANDLE pvVar1;
  int iVar2;
  LONG LVar3;
  ushort *puVar4;
  int iVar5;
  CHAR local_10 [16];
  
  pvVar1 = FUN_0040cc90(param_1);
  if (pvVar1 != (HANDLE)0x0) {
    return false;
  }
  iVar5 = 0;
  puVar4 = &DAT_0042153c;
  GetClassNameA(param_1,local_10,0x10);
  do {
    if ((*puVar4 & param_2) != 0) {
      iVar2 = lstrcmpA((LPCSTR)(puVar4 + -0xe),local_10);
      if (iVar2 == 0) {
        LVar3 = GetWindowLongA(param_1,-0x10);
        iVar2 = (*(code *)(&PTR_FUN_00421538)[iVar5 * 8])
                          (param_1,LVar3,param_2,CONCAT22((short)((uint)puVar4 >> 0x10),param_3),
                           param_4);
        if (iVar2 == 1) {
          if ((param_3 == 1) && (DAT_0042c3e2 == 0x10)) {
            FUN_0040cea0(param_1,(&DAT_0042ce20)[iVar5 * 6]);
            return true;
          }
          FUN_0040cd00(param_1,(&DAT_0042ce20)[iVar5 * 6]);
        }
        return (bool)('\x01' - (iVar2 == 0));
      }
    }
    puVar4 = puVar4 + 0x10;
    iVar5 = iVar5 + 1;
    if (&UNK_004215fb < puVar4) {
      return false;
    }
  } while( true );
}



void __cdecl FUN_0040e980(HWND param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  HWND hWnd;
  uint8_t local_10 [12];
  int local_4;
  
  GetWindowRect(param_1,(LPRECT)local_10);
  uVar2 = GetWindowLongA(param_1,-0x10);
  if ((uVar2 & 0x10000000) != 0) {
    if (param_2 != 0) {
      uVar1 = *(uint *)(param_2 + 0x18);
      if ((((uVar1 & 0xc0) == 0) && ((uVar1 & 2) != 0)) && ((uVar1 & 1) != 0)) {
        return;
      }
      if (((((byte)uVar1 & 3) == 2) && (local_10._8_4_ - *(int *)(param_2 + 0x10) == local_10._0_4_)
          ) && (*(int *)(param_2 + 0x14) <= local_4 - local_10._4_4_)) {
        local_10._4_4_ = local_10._4_4_ + *(int *)(param_2 + 0x14) + 1;
      }
    }
    InflateRect((LPRECT)local_10,1,1);
    hWnd = GetParent(param_1);
    ScreenToClient(hWnd,(LPPOINT)local_10);
    ScreenToClient(hWnd,(LPPOINT)(local_10 + 8));
    if ((uVar2 & 0x200000) != 0) {
      local_10._8_4_ = local_10._8_4_ + 1;
    }
    InvalidateRect(hWnd,(RECT *)local_10,0);
  }
  return;
}



void __cdecl FUN_0040ea40(HWND param_1)

{
  uint uVar1;
  HWND hWnd;
  uint8_t local_10 [16];
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  GetWindowRect(param_1,(LPRECT)local_10);
  InflateRect((LPRECT)local_10,1,1);
  hWnd = GetParent(param_1);
  ScreenToClient(hWnd,(LPPOINT)local_10);
  ScreenToClient(hWnd,(LPPOINT)(local_10 + 8));
  if ((uVar1 & 0x200000) != 0) {
    local_10._8_4_ = local_10._8_4_ + 1;
  }
  ValidateRect(hWnd,(RECT *)local_10);
  return;
}



void __cdecl
FUN_0040eab0(HWND param_1,HDC param_2,RECT *param_3,char *param_4,int param_5,short param_6,
            int param_7)

{
  BOOL BVar1;
  HGDIOBJ pvVar2;
  int iVar3;
  HWND pHVar4;
  int iVar5;
  int local_18;
  int local_14;
  tagRECT local_10;
  
  local_10.left = param_3->left;
  local_10.top = param_3->top;
  local_10.right = param_3->right;
  local_10.bottom = param_3->bottom;
  FUN_0040cfc0(param_2,&param_3->left,7,7,0xf);
  InflateRect(&local_10,-1,-1);
  if ((param_6 == 1) && (BVar1 = IsWindowEnabled(param_1), BVar1 != 0)) {
    FUN_0040cfc0(param_2,&local_10.left,7,7,0xf);
    InflateRect(&local_10,-1,-1);
  }
  PatBlt(param_2,param_3->left,param_3->top,1,1,0xf00021);
  PatBlt(param_2,param_3->right + -1,param_3->top,1,1,0xf00021);
  PatBlt(param_2,param_3->left,param_3->bottom + -1,1,1,0xf00021);
  PatBlt(param_2,param_3->right + -1,param_3->bottom + -1,1,1,0xf00021);
  iVar5 = (param_7 == 0) + 1;
  pvVar2 = DAT_0042c404;
  if (param_7 != 0) {
    pvVar2 = DAT_0042c40c;
  }
  pvVar2 = SelectObject(param_2,pvVar2);
  PatBlt(param_2,local_10.left,local_10.top,iVar5,local_10.bottom - local_10.top,0xf00021);
  PatBlt(param_2,local_10.left,local_10.top,local_10.right - local_10.left,iVar5,0xf00021);
  if (param_7 == 0) {
    iVar5 = 0;
    SelectObject(param_2,DAT_0042c40c);
    local_10.bottom = local_10.bottom + -1;
    local_10.right = local_10.right + -1;
    do {
      PatBlt(param_2,local_10.left,local_10.bottom,(local_10.right - local_10.left) + 1,1,0xf00021);
      PatBlt(param_2,local_10.right,local_10.top,1,local_10.bottom - local_10.top,0xf00021);
      if (iVar5 < 1) {
        InflateRect(&local_10,-1,-1);
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 < 2);
  }
  local_10.left = local_10.left + 1;
  local_10.top = local_10.top + 1;
  SelectObject(param_2,DAT_0042c408);
  PatBlt(param_2,local_10.left,local_10.top,local_10.right - local_10.left,
         local_10.bottom - local_10.top,0xf00021);
  BVar1 = IsWindowEnabled(param_1);
  if (BVar1 == 0) {
    SetTextColor(param_2,DAT_0042c3fc);
  }
  FUN_0040d1b0(param_2,param_4,&local_18,&local_14);
  local_10.top = local_10.top + ((local_10.bottom - local_10.top) - local_14) / 2;
  local_10.left = local_10.left + ((local_10.right - local_10.left) - local_18) / 2;
  iVar5 = local_10.top + local_14;
  if (local_10.bottom <= local_10.top + local_14) {
    iVar5 = local_10.bottom;
  }
  iVar3 = local_10.left + local_18;
  if (local_10.right <= local_10.left + local_18) {
    iVar3 = local_10.right;
  }
  local_10.right = iVar3;
  if (param_7 != 0) {
    local_10.bottom = iVar5;
    OffsetRect(&local_10,1,1);
    iVar3 = param_3->right + -3;
    if (local_10.right <= iVar3) {
      iVar3 = local_10.right;
    }
    iVar5 = param_3->bottom + -3;
    local_10.right = iVar3;
    if (local_10.bottom <= iVar5) {
      iVar5 = local_10.bottom;
    }
  }
  local_10.bottom = iVar5;
  DrawTextA(param_2,param_4,param_5,&local_10,0x20);
  pHVar4 = GetFocus();
  if (pHVar4 == param_1) {
    InflateRect(&local_10,1,1);
    IntersectRect(&local_10,&local_10,param_3);
    DrawFocusRect(param_2,&local_10);
  }
  if (pvVar2 != (HGDIOBJ)0x0) {
    SelectObject(param_2,pvVar2);
  }
  return;
}



void __cdecl FUN_0040edf0(HWND param_1,HDC param_2,uint param_3)

{
  uint uVar1;
  HWND hWnd;
  DWORD DVar2;
  HGDIOBJ pvVar3;
  HDC hdc;
  int x;
  HGDIOBJ local_154;
  int local_150;
  int local_14c;
  uint local_144;
  int local_140;
  int local_13c;
  HGDIOBJ local_138;
  uint local_134;
  tagRECT local_130;
  tagRECT local_120;
  uint8_t local_110 [12];
  int local_104;
  CHAR local_100 [256];
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  local_144 = uVar1 & 0x20;
  uVar1 = uVar1 & 0x1f;
  hWnd = GetParent(param_1);
  SetBkMode(param_2,2);
  GetClientRect(param_1,&local_120);
  local_130.left = local_120.left;
  local_130.top = local_120.top;
  local_130.right = local_120.right;
  local_130.bottom = local_120.bottom;
  local_154 = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
  if (local_154 != (HGDIOBJ)0x0) {
    local_154 = SelectObject(param_2,local_154);
  }
  DVar2 = GetSysColor(0xf);
  SetBkColor(param_2,DVar2);
  DVar2 = GetSysColor(0x12);
  SetTextColor(param_2,DVar2);
  pvVar3 = (HGDIOBJ)SendMessageA(hWnd,0x135,(WPARAM)param_2,(LPARAM)param_1);
  local_138 = SelectObject(param_2,pvVar3);
  IntersectClipRect(param_2,local_130.left,local_130.top,local_130.right,local_130.bottom);
  if (((param_3 & 0x10) != 0) && (uVar1 != 7)) {
    PatBlt(param_2,local_130.left,local_130.top,local_130.right - local_130.left,
           local_130.bottom - local_130.top,0xf00021);
  }
  local_13c = IsWindowEnabled(param_1);
  local_110._0_4_ = SendMessageA(param_1,0xf2,0,0);
  local_14c = 0;
  local_134 = local_110._0_4_ & 3;
  local_110._0_4_ = local_110._0_4_ & 4;
  local_150 = ((int)local_110._0_4_ >> 1 | -(uint)(local_134 == 0) + 1) * 0xe;
  if (local_13c == 0) {
    local_150 = local_150 + (-(uint)(local_134 == 0) + 3) * 0xe;
  }
  if ((((param_3 & 10) != 0) || (uVar1 == 0)) || (uVar1 == 1)) {
    local_140 = GetWindowTextA(param_1,local_100,0x100);
  }
  switch(uVar1) {
  case 0:
  case 1:
    FUN_0040eab0(param_1,param_2,&local_120,local_100,local_140,(short)uVar1,local_110._0_4_);
    goto switchD_0040efac_caseD_8;
  case 2:
  case 3:
    break;
  case 4:
  case 9:
    local_14c = 0xd;
    break;
  case 5:
  case 6:
    if (local_134 == 2) {
      local_14c = 0x1a;
    }
    break;
  case 7:
    if ((param_3 & 6) != 0) {
      FUN_0040d1b0(param_2,local_100,(LONG *)&local_134,(LONG *)&local_144);
      if (local_144 == 0) {
        FUN_0040d1b0(param_2,&DAT_00428cd4,(LONG *)local_110,(LONG *)&local_144);
      }
      local_130.left = local_130.left + 4;
      local_130.right = local_134 + local_130.left + 4;
      local_130.bottom = local_144 + local_130.top;
      if ((param_3 & 0x20) != 0) {
        local_110._4_4_ = local_130.top;
        local_110._8_4_ = local_120.right;
        local_110._0_4_ = local_130.left;
        local_104 = local_130.bottom;
        ClientToScreen(param_1,(LPPOINT)local_110);
        ClientToScreen(param_1,(LPPOINT)(local_110 + 8));
        ScreenToClient(hWnd,(LPPOINT)local_110);
        ScreenToClient(hWnd,(LPPOINT)(local_110 + 8));
        InvalidateRect(hWnd,(RECT *)local_110,1);
        return;
      }
      local_120.right = local_120.right + -1;
      local_120.bottom = local_120.bottom + -1;
      local_120.top = local_120.top + (int)local_144 / 2;
      FUN_0040cfc0(param_2,&local_120.left,2,2,0xf);
      OffsetRect(&local_120,1,1);
      FUN_0040cfc0(param_2,&local_120.left,0,0,0xf);
      if (local_13c == 0) {
        SetTextColor(param_2,DAT_0042c3fc);
      }
      DrawTextA(param_2,local_100,local_140,&local_130,0x20);
    }
  default:
    goto switchD_0040efac_caseD_8;
  }
  if (((param_3 & 4) != 0) && (hdc = CreateCompatibleDC(param_2), hdc != (HDC)0x0)) {
    pvVar3 = SelectObject(hdc,DAT_0042c410);
    if (pvVar3 != (HGDIOBJ)0x0) {
      x = local_130.left;
      if (local_144 != 0) {
        x = local_130.right + -0xe;
      }
      BitBlt(param_2,x,local_130.top + ((local_130.bottom - local_130.top) + -0xd) / 2,0xe,0xd,hdc,
             local_150,local_14c,0xcc0020);
      SelectObject(hdc,pvVar3);
    }
    DeleteDC(hdc);
  }
  if ((param_3 & 2) != 0) {
    if (local_144 == 0) {
      local_130.left = local_120.left + 0x12;
    }
    else {
      local_130.right = local_120.right + -0x12;
    }
    if (local_13c == 0) {
      SetTextColor(param_2,DAT_0042c3fc);
    }
    DrawTextA(param_2,local_100,local_140,&local_130,0x24);
  }
  if ((param_3 & 8) != 0) {
    FUN_0040d1b0(param_2,local_100,(LONG *)local_110,(LONG *)&local_134);
    local_130.top = (int)((local_130.bottom - local_130.top) - local_134) / 2;
    local_130.bottom = local_134 + local_130.top;
    if (local_144 == 0) {
      local_130.left = local_120.left + 0x12;
    }
    else {
      local_120.right = local_120.right + -0x12;
      local_130.left = local_120.left;
    }
    local_130.right = local_110._0_4_ + local_130.left;
    InflateRect(&local_130,1,1);
    IntersectRect(&local_130,&local_130,&local_120);
    DrawFocusRect(param_2,&local_130);
  }
switchD_0040efac_caseD_8:
  SelectObject(param_2,local_138);
  if (local_154 != (HGDIOBJ)0x0) {
    SelectObject(param_2,local_154);
  }
  return;
}



LRESULT FUN_0040f340(HWND param_1,uint param_2,HDC param_3,uint32_t *param_4)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  LONG LVar4;
  uint uVar5;
  uint uVar6;
  HDC pHVar7;
  uint uVar8;
  HWND hWnd;
  tagPAINTSTRUCT local_40;
  
  if (param_2 == 0x82) {
    LVar1 = FUN_0040cee0(param_1,0x82,(WPARAM)param_3,(LPARAM)param_4,0);
    return LVar1;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3d4);
  if (pvVar2 != (HANDLE)0x0) {
    pWVar3 = FUN_0040ccb0(param_1,0);
    LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
    return LVar1;
  }
  if (param_2 < 0xf2) {
    if (param_2 == 0xf1) goto LAB_0040f4e6;
    switch(param_2) {
    case 7:
      uVar8 = 0x16;
      break;
    case 8:
      LVar4 = GetWindowLongA(param_1,-0x10);
      if (((byte)LVar4 & 0x1f) == 9) {
        SendMessageA(param_1,0xf3,0,0);
      }
      uVar8 = 0;
      break;
    default:
      goto switchD_0040f3d1_caseD_9;
    case 10:
      uVar8 = 6;
      break;
    case 0xc:
      uVar8 = GetWindowLongA(param_1,-0x10);
      if (((uVar8 & 0x10000000) == 0) || (((byte)uVar8 & 0x1f) != 7)) {
        uVar8 = 0x16;
      }
      else {
        uVar8 = 0x22;
      }
      break;
    case 0xf:
      uVar8 = SendMessageA(param_1,0xf2,0,0);
      pHVar7 = param_3;
      if (param_3 == (HDC)0x0) {
        pHVar7 = BeginPaint(param_1,&local_40);
      }
      uVar5 = GetWindowLongA(param_1,-0x10);
      if ((uVar5 & 0x10000000) != 0) {
        FUN_0040edf0(param_1,pHVar7,uVar8 & 8 | 6);
      }
      if (param_3 == (HDC)0x0) {
        EndPaint(param_1,&local_40);
      }
      return 0;
    }
  }
  else {
    if (param_2 != 0xf3) {
      if ((0x1942 < param_2) && (param_2 < 0x1945)) {
        *param_4 = 1;
        return 1000;
      }
      goto switchD_0040f3d1_caseD_9;
    }
LAB_0040f4e6:
    uVar8 = 4;
  }
  uVar5 = SendMessageA(param_1,0xf2,0,0);
  uVar6 = GetWindowLongA(param_1,-0x10);
  if ((uVar6 & 0x10000000) != 0) {
    if (param_2 != 7) {
      SetWindowLongA(param_1,-0x10,uVar6 & 0xefffffff);
    }
    hWnd = param_1;
    uVar6 = param_2;
    pWVar3 = FUN_0040ccb0(param_1,0);
    LVar1 = CallWindowProcA(pWVar3,hWnd,uVar6,(WPARAM)param_3,(LPARAM)param_4);
    if (param_2 != 7) {
      uVar6 = GetWindowLongA(param_1,-0x10);
      SetWindowLongA(param_1,-0x10,uVar6 | 0x10000000);
    }
    uVar6 = SendMessageA(param_1,0xf2,0,0);
    if ((((param_2 != 0xf3) && (param_2 != 0xf1)) || (uVar6 != uVar5)) &&
       (pHVar7 = GetDC(param_1), pHVar7 != (HDC)0x0)) {
      if (((uVar6 ^ uVar5) & 3) != 0) {
        uVar8 = uVar8 | 4;
      }
      ExcludeUpdateRgn(pHVar7,param_1);
      FUN_0040edf0(param_1,pHVar7,(uVar6 ^ uVar5) & 8 | uVar8);
      ReleaseDC(param_1,pHVar7);
    }
    return LVar1;
  }
switchD_0040f3d1_caseD_9:
  pWVar3 = FUN_0040ccb0(param_1,0);
  LVar1 = CallWindowProcA(pWVar3,param_1,param_2,(WPARAM)param_3,(LPARAM)param_4);
  return LVar1;
}



void __cdecl FUN_0040f620(HWND param_1,int param_2,int param_3)

{
  uint32_t uVar1;
  uint uVar2;
  LRESULT LVar3;
  HWND pHVar4;
  HDC hDC;
  LONG LVar5;
  int iVar6;
  HWND hWndTo;
  uint uVar7;
  ushort uVar8;
  int local_3c;
  uint local_38;
  uint local_34;
  uint8_t local_30 [12];
  int local_24;
  tagRECT local_20;
  int local_10 [4];
  
  uVar2 = GetWindowLongA(param_1,-0x10);
  if (((uVar2 & 0x10000000) != 0) &&
     (((param_3 != 3 || (((byte)uVar2 & 3) != 3)) ||
      (LVar3 = SendMessageA(param_1,0x157,0,0), LVar3 == 0)))) {
    if (param_2 != 0) {
      HideCaret(param_1);
    }
    GetWindowRect(param_1,(LPRECT)local_30);
    pHVar4 = GetParent(param_1);
    ScreenToClient(pHVar4,(LPPOINT)local_30);
    uVar8 = 0xf;
    ScreenToClient(pHVar4,(LPPOINT)(local_30 + 8));
    hDC = GetDC(pHVar4);
    local_38 = uVar2 & 0x100000;
    if (local_38 != 0) {
      uVar8 = 7;
    }
    local_34 = uVar2 & 0x200000;
    if (local_34 != 0) {
      uVar8 = uVar8 & 0xfffb;
    }
    LVar5 = GetWindowLongA(param_1,-0xc);
    hWndTo = pHVar4;
    if (param_2 - LVar5 == -1000) {
      local_3c = 0x29a;
      local_20.left = SendMessageA(pHVar4,0x1944,0,(LPARAM)&local_3c);
      if (local_3c == 0x29a) {
        local_20.left = SendMessageA(pHVar4,0x1943,0,(LPARAM)&local_3c);
      }
      GetClassNameA(pHVar4,(LPSTR)local_10,0x10);
      iVar6 = lstrcmpA((LPCSTR)local_10,"ComboBox");
      if ((iVar6 == 0) || ((local_3c == 1 && (local_20.left == 0x3eb)))) {
        hWndTo = GetParent(pHVar4);
        MapWindowPoints(pHVar4,hWndTo,(LPPOINT)local_30,2);
        ReleaseDC(pHVar4,hDC);
        hDC = GetDC(hWndTo);
        if (param_2 == 0) {
          uVar8 = uVar8 & 0xfffd;
          local_30._4_4_ = local_30._4_4_ + 1;
        }
        else {
          uVar7 = GetWindowLongA(pHVar4,-0x10);
          if (((uVar7 & 3) == 2) || ((uVar7 & 3) == 3)) {
            LVar3 = SendMessageA(pHVar4,0x157,0,0);
            if (LVar3 != 0) {
              ReleaseDC(hWndTo,hDC);
              ShowCaret(param_1);
              return;
            }
          }
          else {
            uVar8 = uVar8 & 0xfff7;
            pHVar4 = GetWindow(pHVar4,5);
            GetWindowRect(pHVar4,&local_20);
            local_30._8_4_ = local_30._8_4_ + (local_20.left - local_20.right);
            FUN_0040d100(hDC,(int *)local_30,0x1008);
            local_30._8_4_ = local_30._8_4_ + (local_20.right - local_20.left);
          }
        }
      }
    }
    FUN_0040d100(hDC,(int *)local_30,uVar8);
    uVar1 = local_30._8_4_;
    if ((param_3 == 3) && (((byte)uVar2 & 3) == 3)) {
      local_30._0_4_ = GetSystemMetrics(2);
      local_30._0_4_ = uVar1 - local_30._0_4_;
      FUN_0040cfc0(hDC,(int *)local_30,7,7,0xc);
      FUN_0040ea40(param_1);
    }
    else {
      if (local_34 != 0) {
        local_30._8_4_ = local_30._8_4_ + 1;
        FUN_0040cfc0(hDC,(int *)local_30,0,0,4);
        iVar6 = local_30._8_4_ + -1;
        local_10[0] = local_30._0_4_;
        local_30._8_4_ = iVar6;
        local_30._0_4_ = GetSystemMetrics(2);
        local_30._0_4_ = iVar6 - local_30._0_4_;
        FUN_0040cfc0(hDC,(int *)local_30,7,7,8);
        local_30._0_4_ = local_10[0];
      }
      if (local_38 != 0) {
        local_24 = local_24 + 1;
        FUN_0040cfc0(hDC,(int *)local_30,0,0,8);
        iVar6 = local_24 + -1;
        local_24 = iVar6;
        local_30._4_4_ = GetSystemMetrics(0x15);
        local_30._4_4_ = iVar6 - local_30._4_4_;
        FUN_0040cfc0(hDC,(int *)local_30,7,7,4);
      }
    }
    ReleaseDC(hWndTo,hDC);
    if (param_2 != 0) {
      ShowCaret(param_1);
    }
  }
  return;
}



uint __cdecl FUN_0040f960(HWND param_1,uint param_2,WPARAM param_3,uint32_t *param_4,int param_5)

{
  uint uVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  uint uVar4;
  HWND hWnd;
  WPARAM wParam;
  uint32_t *lParam;
  
  if (param_2 == 0x82) {
    uVar1 = FUN_0040cee0(param_1,0x82,param_3,(LPARAM)param_4,param_5);
    return uVar1;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3d4);
  if (pvVar2 == (HANDLE)0x0) {
    hWnd = param_1;
    uVar1 = param_2;
    wParam = param_3;
    lParam = param_4;
    pWVar3 = FUN_0040ccb0(param_1,param_5);
    uVar4 = CallWindowProcA(pWVar3,hWnd,uVar1,wParam,(LPARAM)lParam);
    uVar1 = uVar4;
    if ((param_5 == 3) && (uVar1 = GetWindowLongA(param_1,-0x10), ((byte)uVar1 & 3) == 2)) {
      return uVar4;
    }
    if (param_2 < 0x19) {
      if (param_2 == 0x18) {
        if ((DAT_0042c3e0 < 0x30a) && (param_3 == 0)) {
          FUN_0040e980(param_1,0);
        }
      }
      else if ((param_2 == 0xf) && (((param_5 != 3 || ((uVar1 & 3) == 2)) || ((uVar1 & 3) == 3)))) {
        FUN_0040f620(param_1,1,param_5);
      }
    }
    else if (param_2 == 0x46) {
      if (0x309 < DAT_0042c3e0) {
        FUN_0040e980(param_1,(int)param_4);
      }
    }
    else if ((0x1942 < param_2) && (param_2 < 0x1945)) {
      *param_4 = 1;
      return 0x3ea;
    }
    return uVar4;
  }
  pWVar3 = FUN_0040ccb0(param_1,param_5);
  uVar1 = CallWindowProcA(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
  return uVar1;
}



LRESULT __cdecl FUN_0040fae0(HWND param_1,uint param_2,WPARAM param_3,LONG *param_4,int param_5)

{
  LRESULT LVar1;
  HANDLE pvVar2;
  WNDPROC pWVar3;
  HWND pHVar4;
  LONG *lParam;
  uint8_t local_20 [12];
  int local_14;
  tagRECT local_10;
  
  if (param_2 == 0x82) {
    LVar1 = FUN_0040cee0(param_1,0x82,param_3,(LPARAM)param_4,param_5);
    return LVar1;
  }
  pvVar2 = GetPropA(param_1,(LPCSTR)(uint)DAT_0042c3d4);
  if (pvVar2 == (HANDLE)0x0) {
    if (param_2 < 0x19) {
      if (param_2 == 0x18) {
        if ((DAT_0042c3e0 < 0x30a) && (param_3 == 0)) {
          FUN_0040e980(param_1,0);
        }
      }
      else if (param_2 == 0xf) {
        pHVar4 = param_1;
        pWVar3 = FUN_0040ccb0(param_1,param_5);
        LVar1 = CallWindowProcA(pWVar3,pHVar4,param_2,param_3,(LPARAM)param_4);
        FUN_0040f620(param_1,0,param_5);
        return LVar1;
      }
    }
    else if (param_2 < 0x84) {
      if (param_2 == 0x83) {
        if (DAT_0042c3e0 < 0x30a) {
          GetWindowRect(param_1,&local_10);
          pHVar4 = param_1;
          lParam = param_4;
          pWVar3 = FUN_0040ccb0(param_1,param_5);
          LVar1 = CallWindowProcA(pWVar3,pHVar4,param_2,param_3,(LPARAM)lParam);
          local_20._0_4_ = *param_4;
          local_20._4_4_ = param_4[1];
          local_20._8_4_ = param_4[2];
          local_14 = param_4[3];
          InflateRect((LPRECT)local_20,2,1);
          if (local_14 < local_10.bottom) {
            local_20._4_4_ = local_14 + 1;
            local_14 = local_10.bottom + 1;
            pHVar4 = GetParent(param_1);
            ScreenToClient(pHVar4,(LPPOINT)local_20);
            ScreenToClient(pHVar4,(LPPOINT)(local_20 + 8));
            InvalidateRect(pHVar4,(RECT *)local_20,1);
          }
          return LVar1;
        }
      }
      else if ((param_2 == 0x46) && (0x309 < DAT_0042c3e0)) {
        FUN_0040e980(param_1,(int)param_4);
      }
    }
    else if ((0x1942 < param_2) && (param_2 < 0x1945)) {
      *param_4 = 1;
      return 0x3e9;
    }
    pWVar3 = FUN_0040ccb0(param_1,param_5);
    LVar1 = CallWindowProcA(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
    return LVar1;
  }
  pWVar3 = FUN_0040ccb0(param_1,param_5);
  LVar1 = CallWindowProcA(pWVar3,param_1,param_2,param_3,(LPARAM)param_4);
  return LVar1;
}



void __cdecl FUN_0040fd90(HWND param_1,HDC param_2,LPRECT param_3,uint param_4)

{
  int iVar1;
  UINT format;
  COLORREF local_c;
  
  PatBlt(param_2,param_3->left,param_3->top,param_3->right - param_3->left,
         param_3->bottom - param_3->top,0xf00021);
  iVar1 = GetWindowTextLengthA(param_1);
  FUN_00404050();
  if (&stack0x00000000 != (uint8_t *)0x18) {
    iVar1 = GetWindowTextA(param_1,&stack0xffffffe8,iVar1 + 2);
    if (iVar1 != 0) {
      format = 0x140;
      if (((byte)param_4 & 0xf) != 0xc) {
        format = (UINT)((ushort)param_4 & 0xf | 0x150);
      }
      if ((param_4 & 0x80) != 0) {
        format = (UINT)(ushort)((ushort)format | 0x800);
      }
      if ((param_4 & 0x8000000) != 0) {
        local_c = SetTextColor(param_2,DAT_0042c3fc);
      }
      DrawTextA(param_2,&stack0xffffffe8,-1,param_3,format);
      if ((param_4 & 0x8000000) != 0) {
        SetTextColor(param_2,local_c);
      }
    }
  }
  return;
}



void __cdecl FUN_0040fe70(HWND param_1,HDC param_2)

{
  uint uVar1;
  HGDIOBJ pvVar2;
  HWND hWnd;
  HGDIOBJ h;
  HGDIOBJ h_00;
  UINT Msg;
  HDC wParam;
  HWND lParam;
  tagRECT local_10;
  
  uVar1 = GetWindowLongA(param_1,-0x10);
  if ((uVar1 & 0x10000000) != 0) {
    GetClientRect(param_1,&local_10);
    switch(uVar1 & 0x1f) {
    case 0:
    case 1:
    case 2:
    case 0xc:
      pvVar2 = (HGDIOBJ)SendMessageA(param_1,0x31,0,0);
      if (pvVar2 == (HGDIOBJ)0x0) {
        pvVar2 = (HGDIOBJ)0x0;
      }
      else {
        pvVar2 = SelectObject(param_2,pvVar2);
      }
      SetBkMode(param_2,2);
      Msg = 0x138;
      wParam = param_2;
      lParam = param_1;
      hWnd = GetParent(param_1);
      h = (HGDIOBJ)SendMessageA(hWnd,Msg,(WPARAM)wParam,(LPARAM)lParam);
      h_00 = (HGDIOBJ)0x0;
      if (h != (HGDIOBJ)0x0) {
        h_00 = SelectObject(param_2,h);
      }
      FUN_0040fd90(param_1,param_2,&local_10,uVar1);
      if (pvVar2 != (HGDIOBJ)0x0) {
        SelectObject(param_2,pvVar2);
      }
      if (h_00 != (HGDIOBJ)0x0) {
        SelectObject(param_2,h_00);
        return;
      }
      break;
    case 4:
    case 7:
      FUN_0040cfc0(param_2,&local_10.left,2,0,0xf);
      return;
    case 5:
    case 8:
    case 0x10:
    case 0x11:
    case 0x12:
      local_10.left = local_10.left + 1;
      local_10.top = local_10.top + 1;
      FUN_0040cfc0(param_2,&local_10.left,0,0,0xf);
      OffsetRect(&local_10,-1,-1);
      FUN_0040cfc0(param_2,&local_10.left,2,2,0xf);
      return;
    case 6:
    case 9:
      FUN_0040cfc0(param_2,&local_10.left,0,2,0xf);
    }
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

uint32_t __cdecl FUN_00410160(uint32_t param_1,int param_2)

{
  HMODULE hModule;
  FARPROC pFVar1;
  DWORD DVar2;
  int iVar3;
  
  if (param_2 == 1) {
    hModule = GetModuleHandleA(s_KERNEL32_DLL_00428cf4);
    pFVar1 = GetProcAddress(hModule,s_DisableThreadLibraryCalls_00428cd8);
    if (pFVar1 != (FARPROC)0x0) {
      (*pFVar1)(param_1);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
    DAT_0042c3dc = param_1;
    DAT_0042c3d8 = param_1;
    DVar2 = GetVersion();
    DAT_0042c3e0 = CONCAT11((char)DVar2,(char)(DVar2 >> 8));
    if (((DVar2 & 0x80000000) == 0) || (DAT_0042c3e2 = 0x10, 0x35e < DAT_0042c3e0)) {
      DAT_0042c3e2 = 0x20;
    }
    _DAT_0042ceb4 = GetSystemMetrics(7);
    _DAT_0042ceb4 = _DAT_0042ceb4 + -1;
    iVar3 = GetSystemMetrics(8);
    DAT_0042ceb8 = iVar3 + -1;
    DAT_0042cebc = GetSystemMetrics(4);
    _DAT_0042cec0 = GetSystemMetrics(0x1e);
    LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042c3a0);
  }
  return 1;
}



HBITMAP FUN_00410230(HMODULE param_1,LPCSTR param_2,uint param_3,uint param_4,uint param_5,
                    uint param_6,uint param_7,uint param_8)

{
  HRSRC hResInfo;
  DWORD dwBytes;
  DWORD *pDVar1;
  BITMAPINFOHEADER *pbmi;
  HDC hdc;
  HBITMAP pHVar2;
  uint uVar3;
  BITMAPINFOHEADER *pBVar4;
  uint local_4;
  
  hResInfo = FindResourceA(param_1,param_2,(LPCSTR)0x2);
  if (hResInfo == (HRSRC)0x0) {
    return (HBITMAP)0x0;
  }
  dwBytes = SizeofResource(param_1,hResInfo);
  pDVar1 = LoadResource(param_1,hResInfo);
  if (pDVar1 == (DWORD *)0x0) {
    return (HBITMAP)0x0;
  }
  pbmi = GlobalAlloc(0x40,dwBytes);
  if (pbmi == (BITMAPINFOHEADER *)0x0) {
    return (HBITMAP)0x0;
  }
  pBVar4 = pbmi;
  for (uVar3 = dwBytes >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    pBVar4->biSize = *pDVar1;
    pDVar1 = pDVar1 + 1;
    pBVar4 = (BITMAPINFOHEADER *)&pBVar4->biWidth;
  }
  for (uVar3 = dwBytes & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(char *)&pBVar4->biSize = (char)*pDVar1;
    pDVar1 = (DWORD *)((int)pDVar1 + 1);
    pBVar4 = (BITMAPINFOHEADER *)((int)&pBVar4->biSize + 1);
  }
  local_4 = param_3 >> 0x10 & 0xff;
  pbmi[1].biSize = (param_3 >> 8 & 0xff) << 8 | local_4 | (param_3 & 0xff) << 0x10;
  local_4 = param_5 >> 0x10 & 0xff;
  pbmi[1].biYPelsPerMeter = (param_5 >> 8 & 0xff) << 8 | local_4 | (param_5 & 0xff) << 0x10;
  local_4 = param_4 >> 0x10 & 0xff;
  pbmi[1].biClrUsed = (param_4 >> 8 & 0xff) << 8 | local_4 | (param_4 & 0xff) << 0x10;
  pbmi[2].biSizeImage =
       (param_6 >> 8 & 0xff) << 8 | (param_6 & 0xff) << 0x10 | param_6 >> 0x10 & 0xff;
  pbmi[2].biWidth = (param_7 >> 8 & 0xff) << 8 | (param_7 & 0xff) << 0x10 | param_7 >> 0x10 & 0xff;
  pbmi[2].biSize = (param_8 >> 8 & 0xff) << 8 | (param_8 & 0xff) << 0x10 | param_8 >> 0x10 & 0xff;
  hdc = GetDC((HWND)0x0);
  pHVar2 = CreateDIBitmap(hdc,pbmi,4,&pbmi[2].biXPelsPerMeter,(BITMAPINFO *)pbmi,0);
  ReleaseDC((HWND)0x0,hdc);
  GlobalFree(pbmi);
  return pHVar2;
}



void FUN_004103c7(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  FUN_00417a40(param_1,param_2,param_3,param_4);
  return;
}



uint32_t FUN_004103df(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  *(char *)(iVar1 + 0x14) = (char)param_1;
  if (param_1 == 0) {
    FUN_004048c0(-3);
  }
  return 1;
}



uint32_t __fastcall FUN_004103fd(uint32_t param_1)

{
  FUN_004103df(0);
  return param_1;
}



void FUN_00410424(void)

{
  FUN_004103fd(&DAT_0042b240);
  return;
}



void FUN_0041042e(void)

{
  FUN_004030e0(0x41043a);
  return;
}



uint32_t __fastcall FUN_00410444(int *param_1)

{
  (**(code **)(*param_1 + 0x60))();
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return 1;
}



void __thiscall FUN_0041045e(void *this,uint32_t param_1,uint32_t *param_2)

{
  void *this_00;
  bool bVar1;
  undefined3 extraout_var;
  uint32_t *puVar2;
  int iVar3;
  uint32_t *puVar4;
  uint32_t local_30 [8];
  int local_10;
  byte *local_c [2];
  
  puVar2 = param_2;
  puVar4 = local_30;
  for (iVar3 = 0xb; iVar3 != 0; iVar3 = iVar3 + -1) {
    *puVar4 = *puVar2;
    puVar2 = puVar2 + 1;
    puVar4 = puVar4 + 1;
  }
  if (((local_10 == 0) && (local_c[0] != (byte *)0xffffffff)) && (local_c[0] != (byte *)0x0)) {
    this_00 = (void *)((int)this + 0x3c);
    bVar1 = FUN_0041166b(this_00,local_c[0],&param_2);
    if (CONCAT31(extraout_var,bVar1) == 0) {
      puVar2 = FUN_004116af(this_00,local_c[0]);
      *puVar2 = 0;
    }
    FUN_0041168d(this_00,local_c[0],local_c);
  }
  (**(code **)(*(int *)this + 0xa8))(0x404,param_1,local_30);
  return;
}



HWND FUN_004104e9(uint32_t param_1,POINT *param_2)

{
  bool bVar1;
  HWND hWnd;
  HWND hWnd_00;
  undefined3 extraout_var;
  BOOL BVar2;
  tagPOINT local_c;
  
  local_c.x = param_2->x;
  local_c.y = param_2->y;
  hWnd = WindowFromPoint(*param_2);
  hWnd_00 = hWnd;
  if ((hWnd != (HWND)0x0) &&
     ((hWnd_00 = GetParent(hWnd), hWnd_00 == (HWND)0x0 ||
      (bVar1 = FUN_0041819f(hWnd_00,2), CONCAT31(extraout_var,bVar1) == 0)))) {
    ScreenToClient(hWnd,&local_c);
    hWnd_00 = FUN_00418214(hWnd,local_c.x,local_c.y);
    if ((hWnd_00 == (HWND)0x0) || (BVar2 = IsWindowEnabled(hWnd_00), BVar2 != 0)) {
      hWnd_00 = hWnd;
    }
  }
  return hWnd_00;
}



uint32_t FUN_0041055c(void)

{
  uint32_t *puVar1;
  uint uVar2;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t *)(unaff_EBP + -0x14) = 0;
  FUN_0041251c((uint32_t *)(unaff_EBP + -0x10));
  puVar1 = (uint32_t *)**(uint32_t **)(unaff_EBP + 0xc);
  uVar2 = puVar1[-2];
  *(uint32_t *)(unaff_EBP + -4) = 1;
  FUN_004127d6((void *)(unaff_EBP + -0x10),uVar2,puVar1,1,(uint32_t *)(unaff_EBP + 0x10));
  FUN_0041252c(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
  *(uint32_t *)(unaff_EBP + -0x14) = 1;
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(unaff_EBP + 8);
}



uint32_t FUN_004105be(void)

{
  int *this;
  int unaff_EBP;
  uint uVar1;
  
  FUN_004037f0();
  *(uint32_t *)(unaff_EBP + -0x10) = 0;
  uVar1 = *(uint *)(unaff_EBP + 0xc);
  if ((int)uVar1 < 0) {
    uVar1 = 0;
  }
  else if ((int)*(uint *)(*this + -8) < (int)uVar1) {
    uVar1 = *(uint *)(*this + -8);
  }
  FUN_0041251c((uint32_t *)(unaff_EBP + 0xc));
  *(uint32_t *)(unaff_EBP + -4) = 1;
  FUN_00412690(this,(uint32_t *)(unaff_EBP + 0xc),uVar1,0,0);
  FUN_0041252c(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + 0xc));
  *(uint32_t *)(unaff_EBP + -0x10) = 1;
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667((int *)(unaff_EBP + 0xc));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(unaff_EBP + 8);
}



void __thiscall FUN_00410635(void *this,byte *param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  uint uVar6;
  undefined3 extraout_var;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  bool bVar10;
  int local_10;
  int *local_c;
  
  piVar2 = param_2;
  local_10 = 0;
  bVar3 = *param_1;
  pbVar5 = param_1;
  piVar8 = param_2;
  do {
    if (bVar3 == 0) {
      FUN_004129da(this,local_10);
      FUN_00404280(*(uint8_t **)this,(char *)param_1,piVar2);
      FUN_00412a29(this,-1);
      return;
    }
    if (*pbVar5 == 0x25) {
      pbVar5 = FUN_00404080(pbVar5);
      bVar3 = *pbVar5;
      if (bVar3 == 0x25) goto LAB_0041085c;
      piVar9 = (int *)0x0;
      param_2 = (int *)0x0;
      piVar7 = piVar8;
      while (bVar3 != 0) {
        if (bVar3 == 0x23) {
          local_10 = local_10 + 2;
        }
        else if (bVar3 == 0x2a) {
          param_2 = (int *)*piVar7;
          piVar7 = piVar7 + 1;
        }
        else if ((((bVar3 != 0x2d) && (bVar3 != 0x2b)) && (bVar3 != 0x30)) && (bVar3 != 0x20))
        break;
        pbVar5 = FUN_00404080(pbVar5);
        bVar3 = *pbVar5;
      }
      if (param_2 == (int *)0x0) {
        param_2 = (int *)FUN_00404450(pbVar5);
        while ((*pbVar5 != 0 && (uVar6 = FUN_00404310((int)(char)*pbVar5), uVar6 != 0))) {
          pbVar5 = FUN_00404080(pbVar5);
        }
      }
      local_c = (int *)0x0;
      if (*pbVar5 == 0x2e) {
        pbVar5 = FUN_00404080(pbVar5);
        if (*pbVar5 == 0x2a) {
          local_c = (int *)*piVar7;
          piVar7 = piVar7 + 1;
          pbVar5 = FUN_00404080(pbVar5);
        }
        else {
          local_c = (int *)FUN_00404450(pbVar5);
          while ((*pbVar5 != 0 && (uVar6 = FUN_00404310((int)(char)*pbVar5), uVar6 != 0))) {
            pbVar5 = FUN_00404080(pbVar5);
          }
        }
      }
      bVar3 = *pbVar5;
      uVar6 = 0;
      if (((bVar3 == 0x46) || (bVar3 == 0x4c)) || (bVar3 == 0x4e)) {
LAB_00410741:
        pbVar5 = FUN_00404080(pbVar5);
      }
      else {
        if (bVar3 == 0x68) {
          uVar6 = 0x10000;
          goto LAB_00410741;
        }
        if (bVar3 == 0x6c) {
          uVar6 = 0x20000;
          goto LAB_00410741;
        }
      }
      uVar6 = uVar6 | (int)(char)*pbVar5;
      piVar8 = piVar7;
      if ((int)uVar6 < 0x54) {
        if (uVar6 == 0x53) goto LAB_004107a0;
        bVar10 = uVar6 == 0x43;
LAB_0041077b:
        if (bVar10) {
LAB_004107d4:
          piVar9 = (int *)0x2;
          piVar8 = piVar7 + 1;
        }
      }
      else {
        if (0x73 < (int)uVar6) {
          if ((int)uVar6 < 0x10054) {
            if (uVar6 == 0x10053) goto LAB_004107b3;
            bVar10 = uVar6 == 0x10043;
            goto LAB_0041077b;
          }
          if (uVar6 != 0x10063) {
            if (uVar6 == 0x10073) goto LAB_004107b3;
            if (uVar6 != 0x20043) {
              if (uVar6 != 0x20053) {
                if (uVar6 == 0x20063) goto LAB_004107d4;
                if (uVar6 != 0x20073) goto LAB_004107da;
              }
LAB_004107a0:
              if ((short *)*piVar7 == (short *)0x0) goto LAB_004107bd;
              piVar9 = (int *)FUN_00403f60((short *)*piVar7);
              goto LAB_004107c8;
            }
          }
          goto LAB_004107d4;
        }
        if (uVar6 == 0x73) {
LAB_004107b3:
          if ((LPCSTR)*piVar7 == (LPCSTR)0x0) {
LAB_004107bd:
            piVar9 = (int *)0x6;
          }
          else {
            piVar9 = (int *)lstrlenA((LPCSTR)*piVar7);
LAB_004107c8:
            piVar8 = piVar7 + 1;
            if (0 < (int)piVar9) goto LAB_004107da;
            piVar9 = (int *)0x1;
          }
          piVar8 = piVar7 + 1;
        }
        else if (uVar6 == 99) goto LAB_004107d4;
      }
LAB_004107da:
      if (piVar9 == (int *)0x0) {
        bVar3 = *pbVar5;
        if ((char)bVar3 < 'Y') {
          if (bVar3 == 0x58) {
LAB_00410837:
            piVar8 = piVar8 + 1;
            piVar9 = (int *)0x20;
          }
          else {
            if (bVar3 != 0x47) goto LAB_00410852;
LAB_00410818:
            piVar8 = piVar8 + 2;
            piVar9 = (int *)0x80;
          }
          local_c = (int *)((int)local_c + (int)param_2);
          bVar10 = SBORROW4((int)local_c,(int)piVar9);
          iVar1 = (int)local_c - (int)piVar9;
          goto LAB_00410849;
        }
        if ((char)bVar3 < 'j') {
          if ((bVar3 == 0x69) || (bVar3 == 100)) goto LAB_00410837;
          if (('d' < (char)bVar3) && ((char)bVar3 < 'h')) goto LAB_00410818;
        }
        else if (bVar3 == 0x6e) {
          piVar8 = piVar8 + 1;
        }
        else if (((bVar3 == 0x6f) || (bVar3 == 0x70)) || ((bVar3 == 0x75 || (bVar3 == 0x78))))
        goto LAB_00410837;
      }
      else {
        if ((int)piVar9 <= (int)param_2) {
          piVar9 = param_2;
        }
        if (local_c == (int *)0x0) goto LAB_00410852;
        bVar10 = SBORROW4((int)piVar9,(int)local_c);
        iVar1 = (int)piVar9 - (int)local_c;
LAB_00410849:
        if (bVar10 == iVar1 < 0) {
          piVar9 = local_c;
        }
      }
LAB_00410852:
      local_10 = local_10 + (int)piVar9;
    }
    else {
LAB_0041085c:
      cVar4 = FUN_004042f0(pbVar5);
      local_10 = local_10 + CONCAT31(extraout_var,cVar4);
    }
    pbVar5 = FUN_00404080(pbVar5);
    bVar3 = *pbVar5;
  } while( true );
}



void __cdecl FUN_004108db(void *param_1,byte *param_2)

{
  FUN_00410635(param_1,param_2,(int *)&stack0x0000000c);
  return;
}



CDialog * __thiscall FUN_00410a44(void *this,byte param_1)

{
  FUN_004028f0(this);
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



uint32_t FUN_00410b1d(void)

{
  uint uVar1;
  void *this;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  int *piVar5;
  int extraout_ECX;
  byte bVar6;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t *)(unaff_EBP + -0x1c) = 0;
  uVar1 = *(uint *)(extraout_ECX + 0x90);
  pbVar3 = (byte *)**(int **)(unaff_EBP + 0xc);
  uVar2 = uVar1 & 0x80000;
  *(uint *)(unaff_EBP + -0x18) = uVar2;
  pbVar4 = *(byte **)(extraout_ECX + 0x78);
  bVar6 = ((uVar2 == 0) - 1U & 0xe0) + 0x20;
  if (pbVar3 == pbVar4) {
    if ((uVar1 & 0x200) == 0) {
      **(int **)(unaff_EBP + 0xc) = 0;
      FUN_004126d5(*(void **)(unaff_EBP + 8),*(LPCSTR *)(extraout_ECX + 0x78));
      goto LAB_00410d16;
    }
    for (; (*pbVar3 != bVar6 && (*pbVar3 != 0)); pbVar3 = FUN_00404080(pbVar3)) {
    }
    pbVar3 = FUN_00404080(pbVar3);
    pbVar4 = *(byte **)(extraout_ECX + 0x78);
    if ((int)(uint)*(ushort *)(extraout_ECX + 0x94) < (int)pbVar3 - (int)pbVar4) {
      this = *(void **)(unaff_EBP + 8);
      **(uint32_t **)(unaff_EBP + 0xc) = 0;
      FUN_004126d5(this,*(LPCSTR *)(extraout_ECX + 0x78));
      goto LAB_00410d16;
    }
  }
  FUN_004126d5((void *)(unaff_EBP + -0x10),(LPCSTR)pbVar4);
  *(uint32_t *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    for (pbVar4 = *(byte **)(extraout_ECX + 0x78); *pbVar4 != bVar6; pbVar4 = FUN_00404080(pbVar4))
    {
    }
    piVar5 = (int *)FUN_004105be();
    *(uint8_t *)(unaff_EBP + -4) = 2;
    FUN_00412760((void *)(unaff_EBP + -0x10),piVar5);
    *(uint8_t *)(unaff_EBP + -4) = 1;
    FUN_00412667((int *)(unaff_EBP + -0x20));
  }
  FUN_004126d5((void *)(unaff_EBP + -0x14),(LPCSTR)pbVar3);
  *(uint8_t *)(unaff_EBP + -4) = 3;
  for (; (*pbVar3 != bVar6 && (*pbVar3 != 0)); pbVar3 = FUN_00404080(pbVar3)) {
  }
  if (*(int *)(unaff_EBP + -0x18) == 0) {
    if (*pbVar3 != 0) {
      if (*(int *)(unaff_EBP + -0x18) == 0) {
        piVar5 = (int *)FUN_004105be();
        *(uint8_t *)(unaff_EBP + -4) = 4;
        FUN_00412760((void *)(unaff_EBP + -0x14),piVar5);
        *(uint8_t *)(unaff_EBP + -4) = 3;
        FUN_00412667((int *)(unaff_EBP + -0x20));
      }
      goto LAB_00410c6b;
    }
    **(uint32_t **)(unaff_EBP + 0xc) = 0;
  }
  else {
LAB_00410c6b:
    pbVar3 = FUN_00404080(pbVar3);
    **(uint **)(unaff_EBP + 0xc) = -(uint)(*pbVar3 != 0) & (uint)pbVar3;
  }
  if (*(int *)(*(byte **)(unaff_EBP + -0x10) + -8) == 0) {
LAB_00410ccb:
    FUN_0041055c();
    *(uint8_t *)(unaff_EBP + -4) = 5;
    FUN_00412815();
    *(uint32_t *)(unaff_EBP + -0x1c) = 1;
    *(uint8_t *)(unaff_EBP + -4) = 3;
    FUN_00412667((int *)(unaff_EBP + 0xc));
  }
  else {
    pbVar3 = FUN_004041f0(*(byte **)(unaff_EBP + -0x10),0x5c);
    if (pbVar3 == (byte *)0x0) {
      pbVar3 = FUN_004041f0(*(byte **)(unaff_EBP + -0x10),0x2f);
      if (pbVar3 == (byte *)0x0) goto LAB_00410ccb;
    }
    if ((int)pbVar3 - *(int *)(unaff_EBP + -0x10) != *(int *)(*(int *)(unaff_EBP + -0x10) + -8) + -1
       ) goto LAB_00410ccb;
    FUN_00412815();
    *(uint32_t *)(unaff_EBP + -0x1c) = 1;
  }
  *(uint8_t *)(unaff_EBP + -4) = 1;
  FUN_00412667((int *)(unaff_EBP + -0x14));
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667((int *)(unaff_EBP + -0x10));
LAB_00410d16:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(unaff_EBP + 8);
}



uint32_t __thiscall
FUN_00410d4f(void *this,uint32_t param_1,uint32_t *param_2,uint32_t *param_3)

{
  int iVar1;
  uint32_t uVar2;
  LRESULT LVar3;
  
  iVar1 = FUN_0041566d(this,param_1,param_2,param_3);
  if (iVar1 == 0) {
    iVar1 = param_2[2];
    if (iVar1 == -0x25f) {
      (**(code **)(*(int *)this + 0xf0))();
    }
    else {
      if (iVar1 == -0x25e) {
        uVar2 = (**(code **)(*(int *)this + 0xdc))();
      }
      else {
        if (iVar1 == -0x25d) {
          LVar3 = SendMessageA(*(HWND *)((int)this + 0x1c),0x111,0xe146,0);
          if (LVar3 != 0) {
            return 1;
          }
          SendMessageA(*(HWND *)((int)this + 0x1c),0x365,0,0);
          return 1;
        }
        if (iVar1 != -0x25c) {
          if (iVar1 == -0x25b) {
            (**(code **)(*(int *)this + 0xec))();
            return 1;
          }
          if (iVar1 != -0x25a) {
            if (iVar1 == -0x259) {
              (**(code **)(*(int *)this + 0xe4))();
              return 1;
            }
            return 0;
          }
          (**(code **)(*(int *)this + 0xe8))();
          return 1;
        }
        uVar2 = (**(code **)(*(int *)this + 0xd8))(param_2[4]);
      }
      *param_3 = uVar2;
    }
  }
  return 1;
}

void FUN_00410e99(void)

{
  uint *local_8;
  
  local_8 = &DAT_0042a860;
  FUN_004041a0(&local_8,&DAT_00423118);
  return;
}



uint32_t * __thiscall
FUN_00410eb4(void *this,int param_1,int param_2,uint32_t param_3,uint32_t param_4,
            uint32_t param_5,int param_6,uint32_t param_7)

{
  uint32_t uVar1;
  int local_28;
  uint32_t local_24;
  uint32_t local_20;
  uint32_t local_1c;
  int local_18;
  int local_14;
  uint32_t local_8;
  
  local_28 = param_6;
  local_24 = param_5;
  local_20 = param_4;
  local_1c = param_3;
  local_18 = param_2 + -1;
  local_14 = param_1 + -0x76c;
  local_8 = param_7;
  uVar1 = FUN_00404e70(&local_28);
  *(uint32_t *)this = uVar1;
  return this;
}



uint32_t * __thiscall FUN_00410f00(void *this,ushort *param_1,uint32_t param_2)

{
  if (*param_1 < 0x76c) {
    *(uint32_t *)this = 0;
  }
  else {
    FUN_00410eb4(&param_1,(uint)*param_1,(uint)param_1[1],(uint)param_1[3],(uint)param_1[4],
                 (uint)param_1[5],(uint)param_1[6],param_2);
    *(ushort **)this = param_1;
  }
  return this;
}



uint32_t * __thiscall FUN_00410f4c(void *this,FILETIME *param_1,uint32_t param_2)

{
  BOOL BVar1;
  _SYSTEMTIME local_1c;
  _FILETIME local_c;
  
  BVar1 = FileTimeToLocalFileTime(param_1,&local_c);
  if ((BVar1 != 0) && (BVar1 = FileTimeToSystemTime(&local_c,&local_1c), BVar1 != 0)) {
    FUN_00410f00(&param_1,&local_1c.wYear,param_2);
    *(FILETIME **)this = param_1;
    return this;
  }
  *(uint32_t *)this = 0;
  return this;
}



uint32_t FUN_00411022(HWND param_1,uint param_2,uint32_t param_3,uint param_4)

{
  int iVar1;
  uint32_t uVar2;
  int *this;
  
  if (param_1 != (HWND)0x0) {
    iVar1 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
    if (*(void **)(iVar1 + 0x18) != (void *)0x0) {
      FUN_004169e6(*(void **)(iVar1 + 0x18),param_1);
      *(uint32_t *)(iVar1 + 0x18) = 0;
    }
    if (param_2 == 0x110) {
      uVar2 = FUN_00413151((uint)param_1,0x110);
      return uVar2;
    }
    if ((param_2 == DAT_0042ac2c) || ((param_2 == 0x111 && ((short)param_3 == 0x40e)))) {
      SendMessageA(param_1,0x111,0xe146,0);
      return 1;
    }
    if (0xbfff < param_2) {
      this = (int *)FUN_00414113((uint)param_1);
      iVar1 = FUN_00416e9c(this,0x41f7b0);
      if ((iVar1 == 0) || ((*(byte *)((int)this + 0x92) & 8) == 0)) {
        if (param_2 == DAT_0042ac1c) {
          uVar2 = (**(code **)(*this + 0xd8))(param_4);
          return uVar2;
        }
        if (param_2 == DAT_0042ac28) {
          if (DAT_0042abf4 != 0) {
            this[0x7d] = param_4;
          }
          uVar2 = (**(code **)(*this + 0xdc))();
          this[0x7d] = 0;
          return uVar2;
        }
        if (param_2 == DAT_0042ac24) {
          (**(code **)(*this + 0xe0))(param_3,param_4 & 0xffff,param_4 >> 0x10);
        }
        else if (param_2 == DAT_0042ac20) {
          uVar2 = (**(code **)(*this + 0xd8))();
          return uVar2;
        }
      }
    }
  }
  return 0;
}



void __fastcall FUN_00411157(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00416385();
  if (iVar1 != 0) {
    FUN_00414040(param_1);
  }
  return;
}



void __thiscall FUN_0041117b(void *this,uint32_t param_1)

{
  *(uint32_t *)((int)this + 0xc) = 0;
  *(uint32_t *)((int)this + 0x10) = 0;
  *(uint32_t *)((int)this + 8) = 0;
  *(uint32_t *)((int)this + 4) = 0;
  *(uint32_t *)((int)this + 0x14) = 0;
  *(uint ***)this = &PTR_LAB_0041fb44;
  *(uint32_t *)((int)this + 0x18) = param_1;
  return;
}



uint * __thiscall FUN_0041119e(void *this,byte param_1)

{
  FUN_004111da();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}


void FUN_004111da(void)

{
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0041fb44;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  RemoveAll((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e9d4;
  return;
}



void __thiscall FUN_0041120d(void *this,uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t *puVar2;
  int iVar3;
  
  if (*(int *)((int)this + 0x10) == 0) {
    iVar1 = FUN_004112c8((uint32_t *)((int)this + 0x14),*(int *)((int)this + 0x18),0xc);
    iVar3 = *(int *)((int)this + 0x18);
    puVar2 = (uint32_t *)(iVar1 + -8 + iVar3 * 0xc);
    if (-1 < iVar3 + -1) {
      do {
        *puVar2 = *(uint32_t *)((int)this + 0x10);
        *(uint32_t **)((int)this + 0x10) = puVar2;
        puVar2 = puVar2 + -3;
        iVar3 = iVar3 + -1;
      } while (iVar3 != 0);
    }
  }
  puVar2 = *(uint32_t **)((int)this + 0x10);
  *(uint32_t *)((int)this + 0x10) = *puVar2;
  puVar2[1] = param_1;
  *puVar2 = param_2;
  *(int *)((int)this + 0xc) = *(int *)((int)this + 0xc) + 1;
  puVar2[2] = 0;
  return;
}



void __thiscall FUN_00411262(void *this,uint32_t *param_1)

{
  int *piVar1;
  
  *param_1 = *(uint32_t *)((int)this + 0x10);
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = *piVar1 + -1;
  *(uint32_t **)((int)this + 0x10) = param_1;
  if (*piVar1 == 0) {
    RemoveAll((int)this);
  }
  return;
}



int __fastcall FUN_004112a4(void *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = *(int **)((int)param_1 + 4);
  iVar2 = *piVar1;
  iVar3 = piVar1[2];
  *(int *)((int)param_1 + 4) = iVar2;
  if (iVar2 == 0) {
    *(uint32_t *)((int)param_1 + 8) = 0;
  }
  else {
    *(uint32_t *)(iVar2 + 4) = 0;
  }
  FUN_00411262(param_1,piVar1);
  return iVar3;
}



void FUN_004112c8(uint32_t *param_1,int param_2,int param_3)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)FUN_004124cf(param_2 * param_3 + 4);
  *puVar1 = *param_1;
  *param_1 = puVar1;
  return;
}



void __fastcall FUN_004112e8(uint32_t *param_1)

{
  uint32_t *puVar1;
  
  while (param_1 != (uint32_t *)0x0) {
    puVar1 = (uint32_t *)*param_1;
    FUN_0041250b((uint *)param_1);
    param_1 = puVar1;
  }
  return;
}


uint * __thiscall FUN_00411325(void *this,byte param_1)

{
  FUN_0041136c();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void FUN_0041136c(void)

{
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0041fb04;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  RemoveAll((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e9d4;
  return;
}



void __fastcall FUN_0041139f(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t *puVar3;
  int iVar4;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = FUN_004112c8((uint32_t *)(param_1 + 0x14),*(int *)(param_1 + 0x18),0xc);
    iVar4 = *(int *)(param_1 + 0x18);
    puVar3 = (uint32_t *)(iVar2 + -8 + iVar4 * 0xc);
    if (-1 < iVar4 + -1) {
      do {
        *puVar3 = *(uint32_t *)(param_1 + 0x10);
        *(uint32_t **)(param_1 + 0x10) = puVar3;
        puVar3 = puVar3 + -3;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
    }
  }
  puVar3 = *(uint32_t **)(param_1 + 0x10);
  uVar1 = *puVar3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(uint32_t *)(param_1 + 0x10) = uVar1;
  puVar3[1] = 0;
  puVar3[2] = 0;
  return;
}



void __thiscall FUN_004113e9(void *this,uint32_t *param_1)

{
  int *piVar1;
  
  *param_1 = *(uint32_t *)((int)this + 0x10);
  piVar1 = (int *)((int)this + 0xc);
  *piVar1 = *piVar1 + -1;
  *(uint32_t **)((int)this + 0x10) = param_1;
  if (*piVar1 == 0) {
    RemoveAll((int)this);
  }
  return;
}



uint32_t * __thiscall FUN_00411402(void *this,uint param_1,uint *param_2)

{
  uint32_t *puVar1;
  uint uVar2;
  
  uVar2 = (param_1 >> 4) % *(uint *)((int)this + 8);
  *param_2 = uVar2;
  if (*(int *)((int)this + 4) != 0) {
    for (puVar1 = *(uint32_t **)(*(int *)((int)this + 4) + uVar2 * 4); puVar1 != (uint32_t *)0x0
        ; puVar1 = (uint32_t *)*puVar1) {
      if (puVar1[1] == param_1) {
        return puVar1;
      }
    }
  }
  return (uint32_t *)0x0;
}



uint32_t __thiscall FUN_00411434(void *this,uint param_1)

{
  uint32_t *puVar1;
  
  if (*(int *)((int)this + 4) != 0) {
    for (puVar1 = *(uint32_t **)
                   (*(int *)((int)this + 4) + ((param_1 >> 4) % *(uint *)((int)this + 8)) * 4);
        puVar1 != (uint32_t *)0x0; puVar1 = (uint32_t *)*puVar1) {
      if (puVar1[1] == param_1) {
        return puVar1[2];
      }
    }
  }
  return 0;
}



uint32_t * __thiscall FUN_00411467(void *this,uint param_1)

{
  uint uVar1;
  uint32_t *puVar2;
  
  uVar1 = param_1;
  puVar2 = FUN_00411402(this,param_1,&param_1);
  if (puVar2 == (uint32_t *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      FUN_0041156b(this,*(int *)((int)this + 8),1);
    }
    puVar2 = (uint32_t *)FUN_0041139f((int)this);
    puVar2[1] = uVar1;
    *puVar2 = *(uint32_t *)(*(int *)((int)this + 4) + param_1 * 4);
    *(uint32_t **)(*(int *)((int)this + 4) + param_1 * 4) = puVar2;
  }
  return puVar2 + 2;
}



uint32_t __thiscall FUN_004114b7(void *this,uint param_1)

{
  int iVar1;
  uint32_t *puVar2;
  uint32_t *puVar3;
  uint uVar4;
  uint32_t *puVar5;
  
  iVar1 = *(int *)((int)this + 4);
  if (iVar1 != 0) {
    uVar4 = (param_1 >> 4) % *(uint *)((int)this + 8);
    puVar2 = *(uint32_t **)(iVar1 + uVar4 * 4);
    puVar5 = (uint32_t *)(iVar1 + uVar4 * 4);
    while (puVar3 = puVar2, puVar3 != (uint32_t *)0x0) {
      if (puVar3[1] == param_1) {
        *puVar5 = *puVar3;
        FUN_004113e9(this,puVar3);
        return 1;
      }
      puVar5 = puVar3;
      puVar2 = (uint32_t *)*puVar3;
    }
  }
  return 0;
}



void __thiscall FUN_004114f9(void *this,int *param_1,int *param_2,int *param_3)

{
  int *piVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  piVar3 = (int *)*param_1;
  if (piVar3 == (int *)0xffffffff) {
    uVar4 = 0;
    if (*(uint *)((int)this + 8) != 0) {
      piVar1 = *(int **)((int)this + 4);
      do {
        piVar3 = (int *)*piVar1;
        if (piVar3 != (int *)0x0) break;
        uVar4 = uVar4 + 1;
        piVar1 = piVar1 + 1;
      } while (uVar4 < *(uint *)((int)this + 8));
    }
  }
  iVar5 = *piVar3;
  if (iVar5 == 0) {
    uVar4 = *(uint *)((int)this + 8);
    uVar2 = ((uint)piVar3[1] >> 4) % uVar4 + 1;
    if (uVar2 < uVar4) {
      piVar1 = (int *)(*(int *)((int)this + 4) + uVar2 * 4);
      do {
        iVar5 = *piVar1;
        if (iVar5 != 0) break;
        uVar2 = uVar2 + 1;
        piVar1 = piVar1 + 1;
      } while (uVar2 < uVar4);
    }
  }
  *param_1 = iVar5;
  *param_2 = piVar3[1];
  *param_3 = piVar3[2];
  return;
}



void __thiscall FUN_0041156b(void *this,int param_1,int param_2)

{
  void *_Dst;
  
  if (*(uint **)((int)this + 4) != (uint *)0x0) {
    FUN_0041250b(*(uint **)((int)this + 4));
    *(uint32_t *)((int)this + 4) = 0;
  }
  if (param_2 != 0) {
    _Dst = (void *)FUN_004124cf(param_1 << 2);
    *(void **)((int)this + 4) = _Dst;
    _memset(_Dst,0,param_1 << 2);
  }
  *(int *)((int)this + 8) = param_1;
  return;
}



uint32_t * __fastcall FUN_004115b1(int param_1)

{
  uint32_t uVar1;
  int iVar2;
  uint32_t *puVar3;
  uint **ppuVar4;
  int iVar5;
  uint uVar6;
  
  if (*(int *)(param_1 + 0x10) == 0) {
    iVar2 = FUN_004112c8((uint32_t *)(param_1 + 0x14),*(int *)(param_1 + 0x18),0x10);
    iVar5 = *(int *)(param_1 + 0x18);
    puVar3 = (uint32_t *)(iVar5 * 0x10 + -0xc + iVar2);
    if (-1 < iVar5 + -1) {
      do {
        *puVar3 = *(uint32_t *)(param_1 + 0x10);
        *(uint32_t **)(param_1 + 0x10) = puVar3;
        puVar3 = puVar3 + -4;
        iVar5 = iVar5 + -1;
      } while (iVar5 != 0);
    }
  }
  puVar3 = *(uint32_t **)(param_1 + 0x10);
  uVar6 = 4;
  uVar1 = *puVar3;
  *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + 1;
  *(uint32_t *)(param_1 + 0x10) = uVar1;
  ppuVar4 = FUN_00412516();
  FUN_00403c20(puVar3 + 2,ppuVar4,uVar6);
  puVar3[3] = 0;
  return puVar3;
}



uint32_t * __thiscall FUN_00411611(void *this,byte *param_1,uint *param_2)

{
  byte *pbVar1;
  uint uVar2;
  int iVar3;
  byte bVar4;
  byte *pbVar5;
  uint32_t *puVar6;
  
  uVar2 = 0;
  bVar4 = *param_1;
  pbVar5 = param_1;
  while (bVar4 != 0) {
    uVar2 = uVar2 * 0x21 + (int)(char)bVar4;
    pbVar1 = pbVar5 + 1;
    pbVar5 = pbVar5 + 1;
    bVar4 = *pbVar1;
  }
  uVar2 = uVar2 % *(uint *)((int)this + 8);
  *param_2 = uVar2;
  if (*(int *)((int)this + 4) != 0) {
    for (puVar6 = *(uint32_t **)(*(int *)((int)this + 4) + uVar2 * 4); puVar6 != (uint32_t *)0x0
        ; puVar6 = (uint32_t *)*puVar6) {
      iVar3 = FUN_004040a0((byte *)puVar6[2],param_1);
      if (iVar3 == 0) {
        return puVar6;
      }
    }
  }
  return (uint32_t *)0x0;
}



bool __thiscall FUN_0041166b(void *this,byte *param_1,uint32_t *param_2)

{
  uint32_t *puVar1;
  
  puVar1 = FUN_00411611(this,param_1,(uint *)&param_1);
  if (puVar1 != (uint32_t *)0x0) {
    *param_2 = puVar1[3];
  }
  return puVar1 != (uint32_t *)0x0;
}



bool __thiscall FUN_0041168d(void *this,byte *param_1,uint32_t *param_2)

{
  uint32_t *puVar1;
  
  puVar1 = FUN_00411611(this,param_1,(uint *)&param_1);
  if (puVar1 != (uint32_t *)0x0) {
    *param_2 = puVar1[2];
  }
  return puVar1 != (uint32_t *)0x0;
}



uint32_t * __thiscall FUN_004116af(void *this,byte *param_1)

{
  uint32_t *puVar1;
  void *local_8;
  
  local_8 = this;
  puVar1 = FUN_00411611(this,param_1,(uint *)&local_8);
  if (puVar1 == (uint32_t *)0x0) {
    if (*(int *)((int)this + 4) == 0) {
      FUN_0041156b(this,*(int *)((int)this + 8),1);
    }
    puVar1 = FUN_004115b1((int)this);
    puVar1[1] = local_8;
    FUN_004127af(puVar1 + 2,(LPCSTR)param_1);
    *puVar1 = *(uint32_t *)(*(int *)((int)this + 4) + (int)local_8 * 4);
    *(uint32_t **)(*(int *)((int)this + 4) + (int)local_8 * 4) = puVar1;
  }
  return puVar1 + 3;
}



void __fastcall FUN_00411717(int *param_1)

{
  int iVar1;
  
  if (param_1[7] == 0) {
    iVar1 = FUN_004194b6();
    if (iVar1 != 0) {
      AfxPostQuitMessage(0);
    }
  }
  FUN_00411983(param_1);
  return;
}



void __thiscall FUN_00411739(void *this,uint32_t param_1,uint32_t param_2)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_00402a20();
  *(uint32_t *)((int)this + 0x84) = 0;
  PostMessageA((HWND)piVar1[7],0x36a,0,0);
  (**(code **)(*piVar1 + 0x74))(param_1,param_2);
  return;
}



bool __thiscall FUN_004117e7(void *this,int param_1)

{
  int iVar1;
  int *piVar2;
  
  iVar1 = param_1;
  if (param_1 < 1) {
    FUN_00411a61(this,param_1);
    param_1 = 0;
    if (*(int **)((int)this + 0x80) != (int *)0x0) {
      param_1 = (**(code **)(**(int **)((int)this + 0x80) + 0x18))();
    }
    while (param_1 != 0) {
      piVar2 = (int *)(**(code **)(**(int **)((int)this + 0x80) + 0x1c))(&param_1);
      (**(code **)(*piVar2 + 0x90))();
    }
  }
  else if (param_1 == 1) {
    FUN_00411a61(this,1);
  }
  return iVar1 < 1;
}



void __thiscall FUN_0041184d(void *this,LPSTR param_1)

{
  LPVOID pvVar1;
  int iVar2;
  BOOL BVar3;
  SIZE_T dwBytes;
  HGLOBAL hMem;
  PDEVMODEA pDevModeOutput;
  LONG LVar4;
  void *local_8;
  
  if (*(HGLOBAL *)((int)this + 0x98) != (HGLOBAL)0x0) {
    local_8 = this;
    pvVar1 = GlobalLock(*(HGLOBAL *)((int)this + 0x98));
    iVar2 = lstrcmpA((LPCSTR)((uint)*(ushort *)((int)pvVar1 + 2) + (int)pvVar1),param_1);
    if (iVar2 == 0) {
      BVar3 = OpenPrinterA(param_1,&local_8,(LPPRINTER_DEFAULTSA)0x0);
      if (BVar3 != 0) {
        if (*(HGLOBAL *)((int)this + 0x94) != (HGLOBAL)0x0) {
          FUN_00418371(*(HGLOBAL *)((int)this + 0x94));
        }
        dwBytes = DocumentPropertiesA((HWND)0x0,local_8,param_1,(PDEVMODEA)0x0,(PDEVMODEA)0x0,0);
        hMem = GlobalAlloc(0x42,dwBytes);
        *(HGLOBAL *)((int)this + 0x94) = hMem;
        pDevModeOutput = GlobalLock(hMem);
        LVar4 = DocumentPropertiesA((HWND)0x0,local_8,param_1,pDevModeOutput,(PDEVMODEA)0x0,2);
        if (LVar4 != 1) {
          FUN_00418371(*(HGLOBAL *)((int)this + 0x94));
          *(uint32_t *)((int)this + 0x94) = 0;
        }
        ClosePrinter(local_8);
      }
    }
  }
  return;
}



void FUN_0041190f(void)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  int iVar3;
  uint8_t *puVar4;
  
  iVar1 = FUN_0041bf1f();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    iVar1 = FUN_0041bc33();
    dwThreadId = GetCurrentThreadId();
    pHVar2 = SetWindowsHookExA(-1,(HOOKPROC)&LAB_00411cef,(HINSTANCE)0x0,dwThreadId);
    puVar4 = &LAB_0041ba43;
    *(HHOOK *)(iVar1 + 0x30) = pHVar2;
    iVar1 = FUN_0041c6da();
    if (*(int *)(iVar1 + 0x14) != 0) {
      iVar3 = FUN_0041bf1f();
      (**(code **)(iVar1 + 0x14))(*(uint32_t *)(iVar3 + 8),puVar4);
    }
    FUN_0041c645(&DAT_0042ac08,&LAB_0041ba58);
  }
  return;
}



void __fastcall FUN_00411983(int *param_1)

{
  bool bVar1;
  BOOL BVar2;
  int iVar3;
  int iVar4;
  int local_4;
  
  bVar1 = true;
  local_4 = 0;
  do {
    if (bVar1) {
      do {
        BVar2 = PeekMessageA((LPMSG)(param_1 + 0xc),(HWND)0x0,0,0,0);
        if (BVar2 != 0) break;
        iVar4 = local_4 + 1;
        iVar3 = (**(code **)(*param_1 + 0x68))(local_4);
        if (iVar3 == 0) {
          bVar1 = false;
        }
        local_4 = iVar4;
      } while (bVar1);
    }
    do {
      iVar4 = (**(code **)(*param_1 + 100))();
      if (iVar4 == 0) {
        (**(code **)(*param_1 + 0x70))();
        return;
      }
      iVar4 = (**(code **)(*param_1 + 0x6c))((LPMSG)(param_1 + 0xc));
      if (iVar4 != 0) {
        local_4 = 0;
        bVar1 = true;
      }
      BVar2 = PeekMessageA((LPMSG)(param_1 + 0xc),(HWND)0x0,0,0,0);
    } while (BVar2 != 0);
  } while( true );
}



bool __thiscall FUN_00411a61(void *this,int param_1)

{
  void *pvVar1;
  BOOL BVar2;
  int iVar3;
  void *this_00;
  
  if (param_1 < 1) {
    pvVar1 = *(void **)((int)this + 0x1c);
    if ((pvVar1 != (void *)0x0) && (*(HWND *)((int)pvVar1 + 0x1c) != (HWND)0x0)) {
      BVar2 = IsWindowVisible(*(HWND *)((int)pvVar1 + 0x1c));
      if (BVar2 != 0) {
        FUN_00413e7f();
        FUN_004158f9(*(HWND *)((int)pvVar1 + 0x1c),0x363,1,0,1,1);
      }
    }
    iVar3 = FUN_0041bf1f();
    iVar3 = FUN_0041c645((void *)(iVar3 + 0x1070),&LAB_0041b94a);
    for (this_00 = *(void **)(iVar3 + 8); this_00 != (void *)0x0;
        this_00 = *(void **)((int)this_00 + 0x54)) {
      if ((*(int *)((int)this_00 + 0x1c) != 0) && (this_00 != pvVar1)) {
        if (*(int *)((int)this_00 + 0x88) == 0) {
          FUN_00416b7b(this_00,0);
        }
        BVar2 = IsWindowVisible(*(HWND *)((int)this_00 + 0x1c));
        if ((BVar2 != 0) || (-1 < *(int *)((int)this_00 + 0x88))) {
          FUN_00413e7f();
          FUN_004158f9(*(HWND *)((int)this_00 + 0x1c),0x363,1,0,1,1);
        }
        if (0 < *(int *)((int)this_00 + 0x88)) {
          FUN_00416b7b(this_00,*(int *)((int)this_00 + 0x88));
        }
        *(uint32_t *)((int)this_00 + 0x88) = 0xffffffff;
      }
    }
  }
  else {
    iVar3 = FUN_0041bf1f();
    iVar3 = FUN_0041c645((void *)(iVar3 + 0x1070),&LAB_0041b94a);
    if (*(int *)(iVar3 + 0x10) == 0) {
      FUN_00417073();
      FUN_0041707c(1);
    }
  }
  return param_1 < 0;
}



uint32_t __thiscall FUN_00411b6c(void *this,int param_1)

{
  uint32_t *puVar1;
  AFX_MSGMAP_ENTRY *pAVar2;
  
  puVar1 = (uint32_t *)(**(code **)(*(int *)this + 0x30))();
  do {
    if (puVar1 == (uint32_t *)0x0) {
      return 0;
    }
    if (*(uint *)(param_1 + 4) < 0xc000) {
      pAVar2 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)puVar1[1],*(uint *)(param_1 + 4),0,0);
      if (pAVar2 != (AFX_MSGMAP_ENTRY *)0x0) {
LAB_00411ba9:
        (**(code **)(pAVar2 + 0x14))(*(uint32_t *)(param_1 + 8),*(uint32_t *)(param_1 + 0xc));
        return 1;
      }
    }
    else {
      pAVar2 = (AFX_MSGMAP_ENTRY *)puVar1[1];
      while (pAVar2 = AfxFindMessageEntry(pAVar2,0xc000,0,0), pAVar2 != (AFX_MSGMAP_ENTRY *)0x0) {
        if (**(int **)(pAVar2 + 0x10) == *(int *)(param_1 + 4)) goto LAB_00411ba9;
        pAVar2 = pAVar2 + 0x18;
      }
    }
    puVar1 = (uint32_t *)*puVar1;
  } while( true );
}


uint32_t FUN_00411d47(int param_1,uint32_t *param_2)

{
  CWnd *pCVar1;
  int iVar2;
  int iVar3;
  uint32_t *puVar4;
  HWND hWnd;
  uint32_t local_24 [7];
  int *local_8;
  
  if (param_2 == (uint32_t *)0x0) {
    return 0;
  }
  if (param_1 != 0) {
    if (param_1 != 2) {
      return 0;
    }
    pCVar1 = FUN_004140eb();
    if (((((pCVar1 != (CWnd *)0x0) && (pCVar1 = FUN_0041579c(pCVar1), pCVar1 != (CWnd *)0x0)) &&
         (iVar2 = FUN_004169c7((int)pCVar1), iVar2 != 0)) &&
        ((*(int *)(pCVar1 + 0x50) != 0 &&
         (iVar2 = FUN_00402a20(), *(int *)((int)local_8 + 0x1c) != 0)))) &&
       (((param_2[1] == 0x100 && (param_2[2] == 0xd)) || (param_2[1] == 0x202)))) {
      hWnd = *(HWND *)(iVar2 + 0x1c);
      goto LAB_00411e02;
    }
  }
  iVar2 = FUN_00402a20();
  if (((0x332 < DAT_0042abec) || (iVar2 == 0)) || (iVar3 = FUN_00411e8e((int)param_2), iVar3 == 0))
  {
    if ((((param_1 != 0) || (local_8[8] == 0)) || ((uint)param_2[1] < 0x100)) ||
       ((0x108 < (uint)param_2[1] ||
        (iVar2 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f), *(int *)(iVar2 + 0xbc) != 0)))) {
      return 0;
    }
    *(uint32_t *)(iVar2 + 0xbc) = 1;
    puVar4 = local_24;
    for (iVar3 = 7; iVar3 != 0; iVar3 = iVar3 + -1) {
      *puVar4 = *param_2;
      param_2 = param_2 + 1;
      puVar4 = puVar4 + 1;
    }
    iVar3 = FUN_00416ba2(local_8[8]);
    if ((iVar3 != 0) && (iVar3 = (**(code **)(*local_8 + 0x60))(local_24), iVar3 != 0)) {
      *(uint32_t *)(iVar2 + 0xbc) = 0;
      return 1;
    }
    *(uint32_t *)(iVar2 + 0xbc) = 0;
    return 0;
  }
  hWnd = *(HWND *)(iVar2 + 0x1c);
LAB_00411e02:
  SendMessageA(hWnd,0x111,0xe146,0);
  return 1;
}



uint32_t FUN_00411e8e(int param_1)

{
  SHORT SVar1;
  
  if ((((*(int *)(param_1 + 4) == 0x100) && (*(int *)(param_1 + 8) == 0x70)) &&
      ((*(uint *)(param_1 + 0xc) >> 0x10 & 0x4000) == 0)) &&
     (((SVar1 = GetKeyState(0x10), -1 < SVar1 && (SVar1 = GetKeyState(0x11), -1 < SVar1)) &&
      (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    return 1;
  }
  return 0;
}



uint32_t __fastcall FUN_00411ef4(int *param_1)

{
  LPMSG lpMsg;
  BOOL BVar1;
  int iVar2;
  uint32_t uVar3;
  
  lpMsg = (LPMSG)(param_1 + 0xc);
  BVar1 = GetMessageA(lpMsg,(HWND)0x0,0,0);
  uVar3 = 0;
  if (BVar1 != 0) {
    if (param_1[0xd] != 0x36a) {
      iVar2 = (**(code **)(*param_1 + 0x60))(lpMsg);
      if (iVar2 == 0) {
        TranslateMessage(lpMsg);
        DispatchMessageA(lpMsg);
      }
    }
    uVar3 = 1;
  }
  return uVar3;
}



void __fastcall FUN_00411f34(uint32_t *param_1)

{
  *param_1 = &PTR_LAB_0041ebb4;
  param_1[1] = 1;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 1;
  param_1[6] = 0;
  return;
}



uint * __thiscall FUN_00411f54(void *this,byte param_1)

{
  FUN_00411f70();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void FUN_00411f70(void)

{
  int iVar1;
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0041ebb4;
  iVar1 = extraout_ECX[4];
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    (**(code **)(iVar1 + 0x1c))();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e9d4;
  return;
}



uint __thiscall
FUN_00411fab(void *this,uint32_t *param_1,uint param_2,uint32_t *param_3,uint32_t *param_4)

{
  void *_Buf1;
  int iVar1;
  uint32_t *puVar2;
  AFX_MSGMAP_ENTRY *pAVar3;
  uint uVar4;
  int *piVar5;
  
  if (param_2 == 0xfffffffe) {
    iVar1 = FUN_0041bf1f();
    param_2 = (**(code **)(**(int **)(iVar1 + 0x1038) + 4))(this,param_1,param_3,param_4);
  }
  else {
    uVar4 = 0;
    if (param_2 == 0xfffffffd) {
      param_2 = 0;
      _Buf1 = (void *)param_3[0xc];
      puVar2 = (uint32_t *)(**(code **)(*(int *)this + 0x34))();
      while ((puVar2 != (uint32_t *)0x0 && (param_2 == 0))) {
        piVar5 = (int *)puVar2[1];
        while ((((uint32_t *)piVar5[1] != (uint32_t *)0x0 && (piVar5[2] != 0)) && (param_2 == 0)
               )) {
          if (param_1 == (uint32_t *)piVar5[1]) {
            if (_Buf1 == (void *)0x0) {
              iVar1 = *piVar5;
            }
            else {
              if ((void *)*piVar5 == (void *)0x0) goto LAB_00412050;
              iVar1 = _memcmp(_Buf1,(void *)*piVar5,0x10);
            }
            if (iVar1 == 0) {
              param_2 = 1;
              param_3[1] = piVar5[2];
            }
          }
LAB_00412050:
          piVar5 = piVar5 + 3;
        }
        puVar2 = (uint32_t *)*puVar2;
      }
    }
    else {
      if (param_2 != 0xffffffff) {
        uVar4 = param_2 >> 0x10;
        param_2 = param_2 & 0xffff;
      }
      if (uVar4 == 0) {
        uVar4 = 0x111;
      }
      for (puVar2 = (uint32_t *)(**(code **)(*(int *)this + 0x30))(); puVar2 != (uint32_t *)0x0;
          puVar2 = (uint32_t *)*puVar2) {
        pAVar3 = AfxFindMessageEntry((AFX_MSGMAP_ENTRY *)puVar2[1],uVar4,param_2,(uint)param_1);
        if (pAVar3 != (AFX_MSGMAP_ENTRY *)0x0) {
          uVar4 = FUN_004120c3(this,param_1,param_2,*(uint **)(pAVar3 + 0x14),param_3,
                               *(uint *)(pAVar3 + 0x10),param_4);
          return uVar4;
        }
      }
      param_2 = 0;
    }
  }
  return param_2;
}



uint __cdecl
FUN_004120c3(uint32_t param_1,uint32_t *param_2,uint32_t param_3,uint *param_4,
            uint32_t *param_5,uint param_6,uint32_t *param_7)

{
  uint uVar1;
  
  uVar1 = 1;
  if (param_7 != (uint32_t *)0x0) {
    *param_7 = param_1;
    param_7[1] = param_4;
    return 1;
  }
  if (param_6 < 0xd) {
    if (param_6 == 0xc) {
      (*(code *)param_4)();
      return 1;
    }
    param_5 = param_2;
    if (param_6 != 2) {
      return 0;
    }
LAB_004121b8:
    uVar1 = (*(code *)param_4)(param_5);
    return uVar1;
  }
  if (param_6 < 0x24) {
    if (param_6 == 0x23) {
      uVar1 = (*(code *)param_4)();
      return uVar1;
    }
    param_5 = param_2;
    if (param_6 != 0xd) {
      return 0;
    }
LAB_004121ad:
    (*(code *)param_4)(param_5);
    return 1;
  }
  switch(param_6) {
  case 0x26:
    (*(code *)param_4)(param_5[1],*param_5);
    break;
  case 0x27:
    uVar1 = (*(code *)param_4)(param_5[1],*param_5);
    break;
  case 0x28:
    (*(code *)param_4)(param_2,param_5[1],*param_5);
    break;
  case 0x29:
    uVar1 = (*(code *)param_4)(param_2,param_5[1],*param_5);
    break;
  default:
    return 0;
  case 0x2c:
    (*(code *)param_4)(param_5);
    goto LAB_0041219c;
  case 0x2d:
    (*(code *)param_4)(param_5,param_2);
LAB_0041219c:
    uVar1 = (uint)(param_5[7] == 0);
    param_5[7] = 0;
    break;
  case 0x2e:
    goto LAB_004121ad;
  case 0x2f:
    goto LAB_004121b8;
  }
  return uVar1;
}



void FUN_00412200(void)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  (**(code **)(**(int **)(iVar1 + 4) + 0x98))(1);
  return;
}



void FUN_00412215(void)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  (**(code **)(**(int **)(iVar1 + 4) + 0x98))(0xffffffff);
  return;
}



void __fastcall FUN_00412242(int *param_1)

{
  CTypeLibCache *this;
  
  FUN_0041c922(0xd);
  this = (CTypeLibCache *)(**(code **)(*param_1 + 0x28))();
  if (this != (CTypeLibCache *)0x0) {
    CTypeLibCache::Unlock(this);
  }
  FUN_0041c992(0xd);
  if (param_1 != (int *)0x0) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}



uint32_t FUN_00412284(void)

{
  int iVar1;
  
  iVar1 = FUN_0041bc33();
  return *(uint32_t *)(iVar1 + 0xc4);
}



void __thiscall FUN_004122b6(void *this,int param_1)

{
  HWND pHVar1;
  CWnd *pCVar2;
  HWND pHVar3;
  
  if (*(int *)((int)this + 0xc) == 0) {
    if (param_1 == 0) {
      pHVar3 = *(HWND *)(*(int *)((int)this + 0x14) + 0x1c);
      pHVar1 = GetFocus();
      if (pHVar1 == pHVar3) {
        GetParent(pHVar3);
        pCVar2 = FUN_004140eb();
        pHVar3 = (HWND)0x0;
        if (*(int *)((int)this + 0x14) != 0) {
          pHVar3 = *(HWND *)(*(int *)((int)this + 0x14) + 0x1c);
        }
        GetNextDlgTabItem(*(HWND *)(pCVar2 + 0x1c),pHVar3,0);
        pCVar2 = FUN_004140eb();
        FUN_00416be4((int)pCVar2);
      }
    }
    FUN_00416bbd(*(void **)((int)this + 0x14),param_1);
  }
  else {
    if (*(int *)((int)this + 0x10) != 0) {
      return;
    }
    EnableMenuItem(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),
                   (-(uint)(param_1 != 0) & 0xfffffffd) + 3 | 0x400);
  }
  *(uint32_t *)((int)this + 0x18) = 1;
  return;
}



void __thiscall FUN_00412346(void *this,WPARAM param_1)

{
  uint uVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    uVar1 = SendMessageA(*(HWND *)(*(int *)((int)this + 0x14) + 0x1c),0x87,0,0);
    if ((uVar1 & 0x2000) != 0) {
      SendMessageA(*(HWND *)(*(int *)((int)this + 0x14) + 0x1c),0xf1,param_1,0);
    }
  }
  else if (*(int *)((int)this + 0x10) == 0) {
    CheckMenuItem(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),
                  (uint)CONCAT11(4,-(param_1 != 0) & 8));
  }
  return;
}



void __thiscall FUN_004123a8(void *this,int param_1)

{
  (**(code **)(*(int *)this + 4))(param_1 != 0);
  if ((*(int *)((int)this + 0xc) != 0) && (*(int *)((int)this + 0x10) == 0)) {
    if (DAT_0042abe8 == (HBITMAP)0x0) {
      FUN_0041baa3();
    }
    if (DAT_0042abe8 != (HBITMAP)0x0) {
      SetMenuItemBitmaps(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),0x400,
                         (HBITMAP)0x0,DAT_0042abe8);
    }
  }
  return;
}



void __thiscall FUN_004123fa(void *this,LPCSTR param_1)

{
  UINT UVar1;
  
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_00418289(*(HWND *)(*(int *)((int)this + 0x14) + 0x1c),param_1);
  }
  else if (*(int *)((int)this + 0x10) == 0) {
    UVar1 = GetMenuState(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),0x400);
    ModifyMenuA(*(HMENU *)(*(int *)((int)this + 0xc) + 4),*(UINT *)((int)this + 8),
                UVar1 & 0xfffff6fb | 0x400,*(UINT_PTR *)((int)this + 4),param_1);
  }
  return;
}



uint32_t __thiscall FUN_00412450(void *this,int *param_1,int param_2)

{
  uint32_t uVar1;
  uint32_t uVar2;
  void *local_c;
  void *pvStack_8;
  
  if ((*(int *)((int)this + 4) == 0) || (*(short *)((int)this + 4) == -1)) {
    uVar1 = 1;
  }
  else {
    *(uint32_t *)((int)this + 0x18) = 0;
    local_c = this;
    pvStack_8 = this;
    uVar1 = (**(code **)(*param_1 + 0x14))(*(int *)((int)this + 4),0xffffffff,this,0);
    if ((param_2 != 0) && (*(int *)((int)this + 0x18) == 0)) {
      local_c = (void *)0x0;
      uVar2 = (**(code **)(*param_1 + 0x14))(*(uint32_t *)((int)this + 4),0,this,&local_c);
      (*(code *)**(uint32_t **)this)(uVar2);
    }
  }
  return uVar1;
}



uint32_t FUN_004124bb(uint32_t param_1)

{
  uint32_t uVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  
  pAVar2 = AfxGetModuleThreadState();
  uVar1 = *(uint32_t *)(pAVar2 + 0x28);
  *(uint32_t *)(pAVar2 + 0x28) = param_1;
  return uVar1;
}



int __cdecl FUN_004124cf(uint param_1)

{
  int iVar1;
  AFX_MODULE_THREAD_STATE *pAVar2;
  code *pcVar3;
  
  pcVar3 = (code *)0xffffffff;
  while( true ) {
    iVar1 = FUN_00403b50(param_1);
    if (iVar1 != 0) {
      return iVar1;
    }
    if (pcVar3 == (code *)0xffffffff) {
      pAVar2 = AfxGetModuleThreadState();
      pcVar3 = *(code **)(pAVar2 + 0x28);
    }
    if (pcVar3 == (code *)0x0) break;
    iVar1 = (*pcVar3)(param_1);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return 0;
}



void __cdecl FUN_0041250b(uint *param_1)

{
  FUN_004039d0(param_1);
  return;
}



uint ** FUN_00412516(void)

{
  return &PTR_DAT_004253b4;
}



uint32_t * __fastcall FUN_0041251c(uint32_t *param_1)

{
  uint **ppuVar1;
  
  ppuVar1 = FUN_00412516();
  *param_1 = *ppuVar1;
  return param_1;
}



int * __thiscall FUN_0041252c(void *this,int *param_1)

{
  int iVar1;
  uint **ppuVar2;
  
  iVar1 = *param_1;
  if (*(int *)(iVar1 + -0xc) < 0) {
    ppuVar2 = FUN_00412516();
    *(uint **)this = *ppuVar2;
    FUN_004127af(this,(LPCSTR)*param_1);
  }
  else {
    *(int *)this = iVar1;
    InterlockedIncrement((LONG *)(iVar1 + -0xc));
  }
  return this;
}



void __thiscall FUN_00412563(void *this,int param_1)

{
  uint **ppuVar1;
  uint32_t *puVar2;
  
  if (param_1 == 0) {
    ppuVar1 = FUN_00412516();
    puVar2 = (uint32_t *)*ppuVar1;
  }
  else {
    puVar2 = (uint32_t *)FUN_004124cf(param_1 + 0xd);
    *puVar2 = 1;
    *(uint8_t *)((int)puVar2 + param_1 + 0xc) = 0;
    puVar2[1] = param_1;
    puVar2[2] = param_1;
    puVar2 = puVar2 + 3;
  }
  *(uint32_t **)this = puVar2;
  return;
}



void __fastcall FUN_0041259d(int *param_1)

{
  LONG LVar1;
  uint **ppuVar2;
  
  if ((LONG *)(*param_1 + -0xc) != (LONG *)PTR_DAT_004253b0) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_0041250b((uint *)(*param_1 + -0xc));
    }
    ppuVar2 = FUN_00412516();
    *param_1 = (int)*ppuVar2;
  }
  return;
}



void FUN_004125cf(LONG *param_1)

{
  LONG LVar1;
  
  if (param_1 != (LONG *)PTR_DAT_004253b0) {
    LVar1 = InterlockedDecrement(param_1);
    if (LVar1 < 1) {
      FUN_0041250b((uint *)param_1);
    }
  }
  return;
}



void __fastcall FUN_004125f2(int *param_1)

{
  if (*(int *)(*param_1 + -8) != 0) {
    if (-1 < *(int *)(*param_1 + -0xc)) {
      FUN_0041259d(param_1);
      return;
    }
    FUN_004127af(param_1,&DAT_00428dd8);
  }
  return;
}



void __fastcall FUN_00412610(int *param_1)

{
  uint32_t *puVar1;
  
  puVar1 = (uint32_t *)*param_1;
  if (1 < (int)puVar1[-3]) {
    FUN_0041259d(param_1);
    FUN_00412563(param_1,puVar1[-2]);
    FUN_00403c20((uint32_t *)*param_1,puVar1,puVar1[-2] + 1);
  }
  return;
}



void __thiscall FUN_0041263e(void *this,int param_1)

{
  if ((1 < *(int *)(*(int *)this + -0xc)) || (*(int *)(*(int *)this + -4) < param_1)) {
    FUN_0041259d(this);
    FUN_00412563(this,param_1);
  }
  return;
}



void __fastcall FUN_00412667(int *param_1)

{
  LONG LVar1;
  
  if ((LONG *)(*param_1 + -0xc) != (LONG *)PTR_DAT_004253b0) {
    LVar1 = InterlockedDecrement((LONG *)(*param_1 + -0xc));
    if (LVar1 < 1) {
      FUN_0041250b((uint *)(*param_1 + -0xc));
    }
  }
  return;
}



void __thiscall FUN_00412690(void *this,uint32_t *param_1,uint param_2,int param_3,int param_4)

{
  uint **ppuVar1;
  
  if (param_4 + param_2 == 0) {
    ppuVar1 = FUN_00412516();
    *param_1 = *ppuVar1;
  }
  else {
    FUN_00412563(param_1,param_4 + param_2);
    FUN_00403c20((uint32_t *)*param_1,(uint32_t *)(param_3 + *(int *)this),param_2);
  }
  return;
}



uint32_t * __thiscall FUN_004126d5(void *this,LPCSTR param_1)

{
  uint **ppuVar1;
  uint uVar2;
  
  ppuVar1 = FUN_00412516();
  *(uint **)this = *ppuVar1;
  if (param_1 != (LPCSTR)0x0) {
    if ((short)((uint)param_1 >> 0x10) == 0) {
      FUN_00416c7a((uint)param_1 & 0xffff);
      return this;
    }
    if (param_1 != (LPCSTR)0x0) {
      uVar2 = lstrlenA(param_1);
      goto LAB_00412713;
    }
  }
  uVar2 = 0;
LAB_00412713:
  if (uVar2 != 0) {
    FUN_00412563(this,uVar2);
    FUN_00403c20(*(uint32_t **)this,(uint32_t *)param_1,uVar2);
  }
  return this;
}



void __thiscall FUN_00412733(void *this,uint param_1,uint32_t *param_2)

{
  FUN_0041263e(this,param_1);
  FUN_00403c20(*(uint32_t **)this,param_2,param_1);
  *(uint *)(*(int *)this + -8) = param_1;
  *(uint8_t *)(param_1 + *(int *)this) = 0;
  return;
}



int * __thiscall FUN_00412760(void *this,int *param_1)

{
  uint32_t *puVar1;
  int iVar2;
  int *piVar3;
  
  puVar1 = (uint32_t *)*param_1;
  if (*(uint32_t **)this != puVar1) {
    piVar3 = *(uint32_t **)this + -3;
    if (((*piVar3 < 0) && (piVar3 != (int *)PTR_DAT_004253b0)) || ((int)puVar1[-3] < 0)) {
      FUN_00412733(this,puVar1[-2],puVar1);
    }
    else {
      FUN_0041259d(this);
      iVar2 = *param_1;
      *(int *)this = iVar2;
      InterlockedIncrement((LONG *)(iVar2 + -0xc));
    }
  }
  return this;
}



void * __thiscall FUN_004127af(void *this,LPCSTR param_1)

{
  uint uVar1;
  
  if (param_1 == (LPCSTR)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = lstrlenA(param_1);
  }
  FUN_00412733(this,uVar1,(uint32_t *)param_1);
  return this;
}



void __thiscall
FUN_004127d6(void *this,uint param_1,uint32_t *param_2,uint param_3,uint32_t *param_4)

{
  if (param_3 + param_1 != 0) {
    FUN_00412563(this,param_3 + param_1);
    FUN_00403c20(*(uint32_t **)this,param_2,param_1);
    FUN_00403c20((uint32_t *)(param_1 + *(int *)this),param_4,param_3);
  }
  return;
}



uint32_t FUN_00412815(void)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t *)(unaff_EBP + -0x14) = 0;
  FUN_0041251c((uint32_t *)(unaff_EBP + -0x10));
  puVar1 = (uint32_t *)**(uint32_t **)(unaff_EBP + 0x10);
  puVar2 = (uint32_t *)**(uint32_t **)(unaff_EBP + 0xc);
  *(uint32_t *)(unaff_EBP + -4) = 1;
  FUN_004127d6((void *)(unaff_EBP + -0x10),puVar2[-2],puVar2,puVar1[-2],puVar1);
  FUN_0041252c(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
  *(uint32_t *)(unaff_EBP + -0x14) = 1;
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(unaff_EBP + 8);
}



uint32_t FUN_0041287b(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t *)(unaff_EBP + -0x14) = 0;
  FUN_0041251c((uint32_t *)(unaff_EBP + -0x10));
  *(uint32_t *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = lstrlenA(*(LPCSTR *)(unaff_EBP + 0x10));
  }
  FUN_004127d6((void *)(unaff_EBP + -0x10),((uint32_t *)**(uint32_t **)(unaff_EBP + 0xc))[-2],
               (uint32_t *)**(uint32_t **)(unaff_EBP + 0xc),uVar1,
               *(uint32_t **)(unaff_EBP + 0x10));
  FUN_0041252c(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
  *(uint32_t *)(unaff_EBP + -0x14) = 1;
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(unaff_EBP + 8);
}



uint32_t FUN_004128ef(void)

{
  uint uVar1;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t *)(unaff_EBP + -0x14) = 0;
  FUN_0041251c((uint32_t *)(unaff_EBP + -0x10));
  *(uint32_t *)(unaff_EBP + -4) = 1;
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = lstrlenA(*(LPCSTR *)(unaff_EBP + 0xc));
  }
  FUN_004127d6((void *)(unaff_EBP + -0x10),uVar1,*(uint32_t **)(unaff_EBP + 0xc),
               ((uint32_t *)**(uint32_t **)(unaff_EBP + 0x10))[-2],
               (uint32_t *)**(uint32_t **)(unaff_EBP + 0x10));
  FUN_0041252c(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
  *(uint32_t *)(unaff_EBP + -0x14) = 1;
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(unaff_EBP + 8);
}



void __thiscall FUN_00412963(void *this,uint param_1,uint32_t *param_2)

{
  uint32_t *puVar1;
  
  if (param_1 != 0) {
    puVar1 = *(uint32_t **)this;
    if (((int)puVar1[-3] < 2) && ((int)(param_1 + puVar1[-2]) <= (int)puVar1[-1])) {
      FUN_00403c20((uint32_t *)(puVar1[-2] + (int)puVar1),param_2,param_1);
      *(int *)(*(int *)this + -8) = *(int *)(*(int *)this + -8) + param_1;
      *(uint8_t *)(*(int *)(*(int *)this + -8) + *(int *)this) = 0;
    }
    else {
      FUN_004127d6(this,puVar1[-2],puVar1,param_1,param_2);
      FUN_004125cf(puVar1 + -3);
    }
  }
  return;
}



int __thiscall FUN_004129da(void *this,int param_1)

{
  uint32_t *puVar1;
  int iVar2;
  
  puVar1 = *(uint32_t **)this;
  if ((1 < (int)puVar1[-3]) || ((int)puVar1[-1] < param_1)) {
    iVar2 = puVar1[-2];
    if (param_1 < iVar2) {
      param_1 = iVar2;
    }
    FUN_00412563(this,param_1);
    FUN_00403c20(*(uint32_t **)this,puVar1,iVar2 + 1);
    *(int *)(*(int *)this + -8) = iVar2;
    FUN_004125cf(puVar1 + -3);
  }
  return *(int *)this;
}



void __thiscall FUN_00412a29(void *this,int param_1)

{
  FUN_00412610(this);
  if (param_1 == -1) {
    param_1 = lstrlenA(*(LPCSTR *)this);
  }
  *(int *)(*(int *)this + -8) = param_1;
  *(uint8_t *)(param_1 + *(int *)this) = 0;
  return;
}



int __thiscall FUN_00412a51(void *this,int param_1)

{
  FUN_004129da(this,param_1);
  *(int *)(*(int *)this + -8) = param_1;
  *(uint8_t *)(param_1 + *(int *)this) = 0;
  return *(int *)this;
}



int __cdecl FUN_00412a71(LPWSTR param_1,LPCSTR param_2,int param_3)

{
  int iVar1;
  
  if ((param_3 == 0) && (param_1 != (LPWSTR)0x0)) {
    return 0;
  }
  iVar1 = MultiByteToWideChar(0,0,param_2,-1,param_1,param_3);
  if (0 < iVar1) {
    param_1[iVar1 + -1] = L'\0';
  }
  return iVar1;
}



uint32_t * FUN_00412aa6(void)

{
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0041e9d4;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  FUN_0041251c(extraout_ECX + 3);
  extraout_ECX[1] = 0xffffffff;
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[2] = 0;
  *extraout_ECX = &PTR_LAB_0041ecac;
  return extraout_ECX;
}



uint * __thiscall FUN_00412ae6(void *this,byte param_1)

{
  FUN_00412b46();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



uint32_t * FUN_00412b02(void)

{
  uint32_t uVar1;
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0041e9d4;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  FUN_0041251c(extraout_ECX + 3);
  uVar1 = *(uint32_t *)(unaff_EBP + 8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[2] = 0;
  extraout_ECX[1] = uVar1;
  *extraout_ECX = &PTR_LAB_0041ecac;
  return extraout_ECX;
}



void FUN_00412b46(void)

{
  int iVar1;
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0041ecac;
  iVar1 = extraout_ECX[1];
  *(uint32_t *)(unaff_EBP + -4) = 1;
  if ((iVar1 != -1) && (extraout_ECX[2] != 0)) {
    FUN_00412e4b((int)extraout_ECX);
  }
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667(extraout_ECX + 3);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e9d4;
  return;
}



int * FUN_00412b94(void)

{
  int iVar1;
  int *piVar2;
  HANDLE hTargetProcessHandle;
  HANDLE hSourceProcessHandle;
  int extraout_ECX;
  int unaff_EBP;
  HANDLE hSourceHandle;
  LPHANDLE lpTargetHandle;
  DWORD DVar3;
  BOOL BVar4;
  DWORD dwOptions;
  
  FUN_004037f0();
  iVar1 = FUN_004124cf(0x10);
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (iVar1 == 0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = FUN_00412b02();
  }
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  dwOptions = 2;
  BVar4 = 0;
  lpTargetHandle = (LPHANDLE)(unaff_EBP + -0x10);
  DVar3 = 0;
  hTargetProcessHandle = GetCurrentProcess();
  hSourceHandle = *(HANDLE *)(extraout_ECX + 4);
  hSourceProcessHandle = GetCurrentProcess();
  BVar4 = DuplicateHandle(hSourceProcessHandle,hSourceHandle,hTargetProcessHandle,lpTargetHandle,
                          DVar3,BVar4,dwOptions);
  if (BVar4 == 0) {
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 4))(1);
    }
    DVar3 = GetLastError();
    FUN_00417302(DVar3);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  piVar2[1] = *(int *)(unaff_EBP + -0x10);
  piVar2[2] = *(int *)(extraout_ECX + 8);
  return piVar2;
}



LPCSTR __thiscall FUN_00412c25(void *this,LPCSTR param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  HANDLE pvVar3;
  uint32_t uVar4;
  LPCSTR pCVar5;
  uint uVar6;
  DWORD DVar7;
  LPCSTR dwShareMode;
  CHAR local_114 [260];
  _SECURITY_ATTRIBUTES local_10;
  
  uVar1 = param_2;
  *(uint32_t *)((int)this + 8) = 0;
  *(uint32_t *)((int)this + 4) = 0xffffffff;
  uVar6 = param_2 & 0xffff7fff;
  FUN_004125f2((int *)((int)this + 0xc));
  FUN_00412f5c();
  FUN_004127af((int *)((int)this + 0xc),local_114);
  uVar2 = param_2 & 3;
  if (uVar2 == 0) {
    param_2 = 0x80000000;
  }
  else if (uVar2 == 1) {
    param_2 = 0x40000000;
  }
  else if (uVar2 == 2) {
    param_2 = 0xc0000000;
  }
  uVar2 = uVar1 & 0x70;
  pCVar5 = (LPCSTR)0x1;
  if ((uVar2 == 0) || (uVar2 == 0x10)) {
    dwShareMode = (LPCSTR)0x0;
  }
  else {
    dwShareMode = pCVar5;
    if (uVar2 != 0x20) {
      if (uVar2 == 0x30) {
        dwShareMode = (LPCSTR)0x2;
      }
      else {
        dwShareMode = param_1;
        if (uVar2 == 0x40) {
          dwShareMode = (LPCSTR)0x3;
        }
      }
    }
  }
  local_10.nLength = 0xc;
  local_10.bInheritHandle = ~uVar6 >> 7 & 1;
  local_10.lpSecurityDescriptor = (LPVOID)0x0;
  if ((uVar1 & 0x1000) == 0) {
    DVar7 = 3;
  }
  else {
    DVar7 = (-(uint)((uVar1 & 0x2000) != 0) & 2) + 2;
  }
  pvVar3 = CreateFileA(param_1,param_2,(DWORD)dwShareMode,&local_10,DVar7,0x80,(HANDLE)0x0);
  if (pvVar3 == (HANDLE)0xffffffff) {
    if (param_3 != 0) {
      DVar7 = GetLastError();
      *(DWORD *)(param_3 + 0xc) = DVar7;
      uVar4 = FUN_00417444(DVar7);
      *(uint32_t *)(param_3 + 8) = uVar4;
      FUN_004127af((void *)(param_3 + 0x10),param_1);
    }
    pCVar5 = (LPCSTR)0x0;
  }
  else {
    *(HANDLE *)((int)this + 4) = pvVar3;
    *(uint32_t *)((int)this + 8) = 1;
  }
  return pCVar5;
}



DWORD __thiscall FUN_00412d4d(void *this,LPVOID param_1,DWORD param_2)

{
  BOOL BVar1;
  DWORD DVar2;
  
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    BVar1 = ReadFile(*(HANDLE *)((int)this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar1 == 0) {
      DVar2 = GetLastError();
      FUN_00417302(DVar2);
    }
  }
  return param_2;
}



void __thiscall FUN_00412d87(void *this,LPCVOID param_1,DWORD param_2)

{
  DWORD DVar1;
  BOOL BVar2;
  DWORD DVar3;
  
  DVar1 = param_2;
  if (param_2 != 0) {
    BVar2 = WriteFile(*(HANDLE *)((int)this + 4),param_1,param_2,&param_2,(LPOVERLAPPED)0x0);
    if (BVar2 == 0) {
      DVar3 = GetLastError();
      FUN_00417302(DVar3);
    }
    if (param_2 != DVar1) {
      FUN_004173c3();
    }
  }
  return;
}



void __fastcall FUN_00412e4b(int param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  bool bVar3;
  
  bVar3 = false;
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    BVar1 = CloseHandle(*(HANDLE *)(param_1 + 4));
    bVar3 = BVar1 == 0;
  }
  *(uint32_t *)(param_1 + 4) = 0xffffffff;
  *(uint32_t *)(param_1 + 8) = 0;
  FUN_004125f2((int *)(param_1 + 0xc));
  if (bVar3) {
    DVar2 = GetLastError();
    FUN_00417302(DVar2);
  }
  return;
}



void __fastcall FUN_00412e8c(int param_1)

{
  if (*(HANDLE *)(param_1 + 4) != (HANDLE)0xffffffff) {
    CloseHandle(*(HANDLE *)(param_1 + 4));
    *(uint32_t *)(param_1 + 4) = 0xffffffff;
  }
  FUN_004125f2((int *)(param_1 + 0xc));
  return;
}



void __thiscall FUN_00412efe(void *this,uint32_t param_1)

{
  BOOL BVar1;
  DWORD DVar2;
  
  (**(code **)(*(int *)this + 0x30))(param_1,0);
  BVar1 = SetEndOfFile(*(HANDLE *)((int)this + 4));
  if (BVar1 == 0) {
    DVar2 = GetLastError();
    FUN_00417302(DVar2);
  }
  return;
}



uint32_t __fastcall FUN_00412f2a(int *param_1)

{
  uint32_t uVar1;
  uint32_t uVar2;
  
  uVar1 = (**(code **)(*param_1 + 0x30))(0,1);
  uVar2 = (**(code **)(*param_1 + 0x30))(0,2);
  (**(code **)(*param_1 + 0x30))(uVar1,0);
  return uVar2;
}



uint32_t FUN_00412f5c(void)

{
  LPSTR lpBuffer;
  DWORD DVar1;
  BOOL BVar2;
  uint32_t uVar3;
  HANDLE hFindFile;
  int unaff_EBP;
  
  FUN_004037f0();
  lpBuffer = *(LPSTR *)(unaff_EBP + 8);
  DVar1 = GetFullPathNameA(*(LPCSTR *)(unaff_EBP + 0xc),0x104,lpBuffer,(LPSTR *)(unaff_EBP + -0x14))
  ;
  if (DVar1 == 0) {
    lstrcpynA(lpBuffer,*(LPCSTR *)(unaff_EBP + 0xc),0x104);
  }
  else {
    FUN_0041251c((uint32_t *)(unaff_EBP + 8));
    *(uint32_t *)(unaff_EBP + -4) = 0;
    FUN_00413035(lpBuffer,(void *)(unaff_EBP + 8));
    BVar2 = GetVolumeInformationA
                      (*(LPCSTR *)(unaff_EBP + 8),(LPSTR)0x0,0,(LPDWORD)0x0,
                       (LPDWORD)(unaff_EBP + -0x18),(LPDWORD)(unaff_EBP + -0x10),(LPSTR)0x0,0);
    if (BVar2 != 0) {
      if ((*(byte *)(unaff_EBP + -0x10) & 2) == 0) {
        CharUpperA(lpBuffer);
      }
      if ((*(byte *)(unaff_EBP + -0x10) & 4) == 0) {
        hFindFile = FindFirstFileA(*(LPCSTR *)(unaff_EBP + 0xc),
                                   (LPWIN32_FIND_DATAA)(unaff_EBP + -0x158));
        if (hFindFile != (HANDLE)0xffffffff) {
          FindClose(hFindFile);
          lstrcpyA(*(LPSTR *)(unaff_EBP + -0x14),(LPCSTR)(unaff_EBP + -300));
        }
      }
      *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00412667((int *)(unaff_EBP + 8));
      uVar3 = 1;
      goto LAB_00413025;
    }
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00412667((int *)(unaff_EBP + 8));
  }
  uVar3 = 0;
LAB_00413025:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



void FUN_00413035(LPCSTR param_1,void *param_2)

{
  byte *lpString1;
  byte *pbVar1;
  byte bVar2;
  
  lpString1 = (byte *)FUN_004129da(param_2,0x104);
  _memset(lpString1,0,0x104);
  lstrcpynA((LPSTR)lpString1,param_1,0x104);
  bVar2 = *lpString1;
  pbVar1 = lpString1;
  while ((bVar2 != 0 &&
         (((bVar2 != 0x5c && (bVar2 != 0x2f)) || ((pbVar1[1] != 0x5c && (pbVar1[1] != 0x2f))))))) {
    pbVar1 = FUN_00404080(pbVar1);
    bVar2 = *pbVar1;
  }
  if (*pbVar1 == 0) {
    bVar2 = *lpString1;
    while (((bVar2 != 0 && (bVar2 != 0x5c)) && (bVar2 != 0x2f))) {
      lpString1 = FUN_00404080(lpString1);
      bVar2 = *lpString1;
    }
  }
  else {
    for (lpString1 = pbVar1 + 2;
        ((bVar2 = *lpString1, bVar2 != 0 && (bVar2 != 0x5c)) && (bVar2 != 0x2f));
        lpString1 = FUN_00404080(lpString1)) {
    }
    if (*lpString1 == 0) goto LAB_004130b6;
    do {
      lpString1 = FUN_00404080(lpString1);
LAB_004130b6:
      bVar2 = *lpString1;
    } while (((bVar2 != 0) && (bVar2 != 0x5c)) && (bVar2 != 0x2f));
  }
  if (*lpString1 != 0) {
    lpString1[1] = 0;
  }
  FUN_00412a29(param_2,-1);
  return;
}



int FUN_004130fb(byte *param_1,LPSTR param_2,int param_3)

{
  short sVar1;
  int iVar2;
  CHAR *Buf;
  CHAR local_108 [260];
  
  Buf = param_2;
  if (param_2 == (LPSTR)0x0) {
    Buf = local_108;
    param_3 = 0x104;
  }
  sVar1 = GetFileTitleA((LPCSTR)param_1,Buf,(WORD)param_3);
  if (sVar1 == 0) {
    if (param_2 == (LPSTR)0x0) {
      iVar2 = lstrlenA(Buf);
      iVar2 = iVar2 + 1;
    }
    else {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = FUN_0041cd25(param_1,param_2,param_3);
  }
  return iVar2;
}



uint32_t FUN_00413151(uint param_1,int param_2)

{
  void *pvVar1;
  int *piVar2;
  uint32_t uVar3;
  
  if (param_2 == 0x110) {
    pvVar1 = (void *)FUN_00414113(param_1);
    piVar2 = FUN_00416eae(0x41ee08,pvVar1);
    if (piVar2 == (int *)0x0) {
      uVar3 = 1;
    }
    else {
      uVar3 = (**(code **)(*piVar2 + 0xc4))();
    }
  }
  else {
    uVar3 = 0;
  }
  return uVar3;
}



uint32_t __thiscall
FUN_0041322a(void *this,uint32_t *param_1,uint param_2,uint32_t *param_3,uint32_t *param_4)

{
  uint uVar1;
  CWnd *pCVar2;
  int iVar3;
  CWinThread *pCVar4;
  uint32_t uVar5;
  
  uVar1 = FUN_00411fab(this,param_1,param_2,param_3,param_4);
  if (uVar1 == 0) {
    if ((((param_2 == 0) || (param_2 == 0xffffffff)) && (((uint)param_1 & 0x8000) != 0)) &&
       (param_1 < (uint32_t *)0xf000)) {
      GetParent(*(HWND *)((int)this + 0x1c));
      pCVar2 = FUN_004140eb();
      if (pCVar2 != (CWnd *)0x0) {
        iVar3 = (**(code **)(*(int *)pCVar2 + 0x14))(param_1,param_2,param_3,param_4);
        if (iVar3 != 0) goto LAB_004132a1;
      }
      pCVar4 = AfxGetThread();
      if (pCVar4 != (CWinThread *)0x0) {
        iVar3 = (**(code **)(*(int *)pCVar4 + 0x14))(param_1,param_2,param_3,param_4);
        if (iVar3 != 0) goto LAB_004132a1;
      }
    }
    uVar5 = 0;
  }
  else {
LAB_004132a1:
    uVar5 = 1;
  }
  return uVar5;
}



CDialog * __thiscall FUN_004132af(void *this,byte param_1)

{
  CDialog::~CDialog(this);
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}


bool FUN_00413309(void)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  LPVOID pvVar4;
  HWND pHVar5;
  int *extraout_ECX;
  int unaff_EBP;
  bool bVar6;
  
  FUN_004037f0();
  *(uint8_t **)(unaff_EBP + -0x10) = &stack0xffffffc0;
  *(int **)(unaff_EBP + -0x24) = extraout_ECX;
  if (*(int *)(unaff_EBP + 0x10) == 0) {
    iVar2 = FUN_0041bf1f();
    *(uint32_t *)(unaff_EBP + 0x10) = *(uint32_t *)(iVar2 + 8);
  }
  iVar2 = FUN_0041bf1f();
  piVar1 = *(int **)(iVar2 + 0x1038);
  *(uint32_t *)(unaff_EBP + -0x14) = 0;
  *(int **)(unaff_EBP + -0x28) = piVar1;
  *(uint32_t *)(unaff_EBP + -0x20) = 0;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  iVar2 = FUN_0041bf1f();
  if ((*(byte *)(iVar2 + 0x18) & 0x10) == 0) {
    FUN_0041684c(0x10);
  }
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*extraout_ECX + 0xbc))(unaff_EBP + -0x34);
    if (iVar2 == 0) goto LAB_00413516;
    uVar3 = (**(code **)(*piVar1 + 0x10))(unaff_EBP + -0x34,*(uint32_t *)(unaff_EBP + 8));
    *(uint32_t *)(unaff_EBP + 8) = uVar3;
  }
  if (*(int *)(unaff_EBP + 8) == 0) {
LAB_00413516:
    ExceptionList = *(void **)(unaff_EBP + -0xc);
    return false;
  }
  FUN_0041251c((uint32_t *)(unaff_EBP + -0x1c));
  *(uint8_t *)(unaff_EBP + -4) = 1;
  *(uint32_t *)(unaff_EBP + -0x18) = 0;
  iVar2 = FUN_00417829(*(uint **)(unaff_EBP + 8),(void *)(unaff_EBP + -0x1c),
                       (undefined2 *)(unaff_EBP + -0x18));
  bVar6 = iVar2 == 0;
  if (!bVar6) {
    iVar2 = GetSystemMetrics(0x2a);
    if (iVar2 != 0) {
      iVar2 = FUN_004040a0(*(byte **)(unaff_EBP + -0x1c),(byte *)"MS Sans Serif");
      if (iVar2 != 0) {
        iVar2 = FUN_004040a0(*(byte **)(unaff_EBP + -0x1c),&DAT_0041ef0c);
        if (iVar2 != 0) {
          bVar6 = false;
          goto LAB_0041340c;
        }
      }
      bVar6 = true;
      if (*(short *)(unaff_EBP + -0x18) == 8) {
        *(uint32_t *)(unaff_EBP + -0x18) = 0;
      }
    }
LAB_0041340c:
    if (!bVar6) goto LAB_00413441;
  }
  FUN_00417679((void *)(unaff_EBP + -0x40),*(uint **)(unaff_EBP + 8));
  *(uint8_t *)(unaff_EBP + -4) = 2;
  FUN_004179af((short)*(uint32_t *)(unaff_EBP + -0x18));
  uVar3 = FUN_00417716((uint32_t *)(unaff_EBP + -0x40));
  *(uint32_t *)(unaff_EBP + -0x14) = uVar3;
  *(uint8_t *)(unaff_EBP + -4) = 1;
  FUN_00417708((uint32_t *)(unaff_EBP + -0x40));
LAB_00413441:
  if (*(int *)(unaff_EBP + -0x14) != 0) {
    pvVar4 = GlobalLock(*(HGLOBAL *)(unaff_EBP + -0x14));
    *(LPVOID *)(unaff_EBP + 8) = pvVar4;
  }
  extraout_ECX[0xb] = -1;
  extraout_ECX[9] = extraout_ECX[9] | 0x10;
  FUN_00414650((int)extraout_ECX);
  if (*(int *)(unaff_EBP + 0xc) == 0) {
    pHVar5 = (HWND)0x0;
  }
  else {
    pHVar5 = *(HWND *)(*(int *)(unaff_EBP + 0xc) + 0x1c);
  }
  pHVar5 = CreateDialogIndirectParamA
                     (*(HINSTANCE *)(unaff_EBP + 0x10),*(LPCDLGTEMPLATEA *)(unaff_EBP + 8),pHVar5,
                      FUN_00413151,0);
  *(HWND *)(unaff_EBP + -0x20) = pHVar5;
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667((int *)(unaff_EBP + -0x1c));
  bVar6 = FUN_004134ab();
  return bVar6;
}



uint * Catch_00413491(void)

{
  int unaff_EBP;
  
  FUN_00416f4f(*(int **)(unaff_EBP + -0x2c));
  *(uint32_t *)(*(int *)(unaff_EBP + -0x24) + 0x2c) = 0xffffffff;
  return &DAT_004134a6;
}



bool FUN_004134ab(void)

{
  int iVar1;
  HWND unaff_EBX;
  int unaff_EBP;
  HWND hWnd;
  int *unaff_EDI;
  
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  if (*(HWND *)(unaff_EBP + -0x28) != unaff_EBX) {
    (**(code **)((*(HWND *)(unaff_EBP + -0x28))->unused + 0x14))(unaff_EBP + -0x34);
    if (*(HWND *)(unaff_EBP + -0x20) != unaff_EBX) {
      (**(code **)(*unaff_EDI + 0xbc))();
    }
  }
  iVar1 = FUN_0041469c();
  if (iVar1 == 0) {
    (**(code **)(*unaff_EDI + 0xac))();
  }
  hWnd = *(HWND *)(unaff_EBP + -0x20);
  if ((hWnd != unaff_EBX) && ((*(byte *)(unaff_EDI + 9) & 0x10) == 0)) {
    DestroyWindow(hWnd);
    hWnd = (HWND)0x0;
  }
  if (*(HWND *)(unaff_EBP + -0x14) != unaff_EBX) {
    GlobalUnlock(*(HGLOBAL *)(unaff_EBP + -0x14));
    GlobalFree(*(HGLOBAL *)(unaff_EBP + -0x14));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return hWnd != unaff_EBX;
}



uint32_t * __thiscall FUN_00413534(void *this,uint param_1,uint32_t param_2)

{
  FUN_00413d9a(this);
  *(uint ***)this = &PTR_LAB_0041ee34;
  _memset((uint *)((int)this + 0x3c),0,0x20);
  *(uint32_t *)((int)this + 0x50) = param_2;
  *(uint *)((int)this + 0x3c) = param_1;
  *(uint *)((int)this + 0x40) = param_1 & 0xffff;
  return this;
}



uint32_t __fastcall FUN_0041356d(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  FUN_0041bf1f();
  FUN_00418f27(0);
  iVar1 = FUN_004157e0(*(int *)(param_1 + 0x50),(uint32_t *)(param_1 + 0x54));
  FUN_00414650(param_1);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(uint32_t *)(iVar1 + 0x1c);
  }
  return uVar2;
}



void __fastcall FUN_004135a4(int param_1)

{
  BOOL BVar1;
  
  FUN_0041469c();
  FUN_00414168(param_1);
  BVar1 = IsWindow(*(HWND *)(param_1 + 0x54));
  if (BVar1 != 0) {
    EnableWindow(*(HWND *)(param_1 + 0x54),1);
  }
  *(uint32_t *)(param_1 + 0x54) = 0;
  FUN_0041bf1f();
  FUN_00418f27(1);
  return;
}



int FUN_004135e2(void)

{
  BOOL bVar1;
  int iVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  LPVOID pvVar3;
  HWND hWnd;
  BOOL BVar4;
  CWnd *pCVar5;
  undefined3 extraout_var;
  uint uVar6;
  HWND pHVar7;
  int *this;
  byte bVar8;
  HMODULE hModule;
  int unaff_EBP;
  uint32_t uVar9;
  
  FUN_004037f0();
  *(uint8_t **)(unaff_EBP + -0x10) = &stack0xffffffdc;
  *(int **)(unaff_EBP + -0x18) = this;
  hResData = (HGLOBAL)this[0x11];
  *(int *)(unaff_EBP + -0x14) = this[0x12];
  iVar2 = FUN_0041bf1f();
  hModule = *(HMODULE *)(iVar2 + 0xc);
  if (this[0x10] != 0) {
    iVar2 = FUN_0041bf1f();
    hModule = *(HMODULE *)(iVar2 + 0xc);
    hResInfo = FindResourceA(hModule,(LPCSTR)this[0x10],(LPCSTR)0x5);
    hResData = LoadResource(hModule,hResInfo);
  }
  if (hResData != (HGLOBAL)0x0) {
    pvVar3 = LockResource(hResData);
    *(LPVOID *)(unaff_EBP + -0x14) = pvVar3;
  }
  if (*(int *)(unaff_EBP + -0x14) == 0) {
    iVar2 = -1;
  }
  else {
    hWnd = (HWND)FUN_0041356d((int)this);
    *(HWND *)(unaff_EBP + -0x20) = hWnd;
    FUN_0041469c();
    FUN_004140eb();
    *(uint32_t *)(unaff_EBP + -0x1c) = 0;
    if (hWnd != (HWND)0x0) {
      BVar4 = IsWindowEnabled(hWnd);
      if (BVar4 != 0) {
        EnableWindow(hWnd,0);
        *(uint32_t *)(unaff_EBP + -0x1c) = 1;
      }
    }
    *(uint32_t *)(unaff_EBP + -4) = 0;
    FUN_00414650((int)this);
    pCVar5 = FUN_004140eb();
    uVar9 = *(uint32_t *)(unaff_EBP + -0x14);
    bVar1 = FUN_00413309();
    if (CONCAT31(extraout_var,bVar1) != 0) {
      if ((*(byte *)(this + 9) & 0x10) != 0) {
        bVar8 = 4;
        uVar6 = FUN_00416a9d((int)this);
        if ((uVar6 & 0x100) != 0) {
          bVar8 = 5;
        }
        FUN_004166c2(this,bVar8);
      }
      if (this[7] != 0) {
        FUN_00416b2c(this,0,0,0,0,0,0x97);
        iVar2 = FUN_004136ff();
        return iVar2;
      }
    }
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    if (*(int *)(unaff_EBP + -0x1c) != 0) {
      EnableWindow(hWnd,1);
    }
    if (hWnd != (HWND)0x0) {
      pHVar7 = GetActiveWindow();
      if (pHVar7 == (HWND)this[7]) {
        SetActiveWindow(hWnd);
      }
    }
    (**(code **)(*this + 0x60))(uVar9,pCVar5,hModule);
    FUN_004135a4((int)this);
    iVar2 = this[0xb];
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar2;
}



uint * Catch_004136e2(void)

{
  int unaff_EBP;
  
  FUN_00416f4f(*(int **)(unaff_EBP + -0x24));
  *(uint32_t *)(*(int *)(unaff_EBP + -0x18) + 0x2c) = 0xffffffff;
  return &DAT_004136f7;
}



int FUN_004136ff(void)

{
  HWND pHVar1;
  HWND unaff_EBX;
  int unaff_EBP;
  int *unaff_ESI;
  HWND unaff_EDI;
  
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  if (*(HWND *)(unaff_EBP + -0x1c) != unaff_EBX) {
    EnableWindow(unaff_EDI,1);
  }
  if (unaff_EDI != unaff_EBX) {
    pHVar1 = GetActiveWindow();
    if (pHVar1 == (HWND)unaff_ESI[7]) {
      SetActiveWindow(unaff_EDI);
    }
  }
  (**(code **)(*unaff_ESI + 0x60))();
  FUN_004135a4((int)unaff_ESI);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return unaff_ESI[0xb];
}



void __thiscall FUN_00413747(void *this,INT_PTR param_1)

{
  if ((*(byte *)((int)this + 0x24) & 0x18) != 0) {
    (**(code **)(*(int *)this + 0x7c))(param_1);
  }
  EndDialog(*(HWND *)((int)this + 0x1c),param_1);
  return;
}



int __fastcall FUN_0041378e(int *param_1)

{
  int *piVar1;
  int iVar2;
  CWnd *pCVar3;
  
  (**(code **)(*param_1 + 0xd4))();
  iVar2 = FUN_0041bf1f();
  piVar1 = *(int **)(iVar2 + 0x1038);
  if ((piVar1 != (int *)0x0) && (iVar2 = param_1[0x16], iVar2 != 0)) {
    if (param_1[0x13] == 0) {
      iVar2 = (**(code **)(*piVar1 + 0x20))(param_1,param_1[0x10],iVar2);
    }
    else {
      iVar2 = (**(code **)(*piVar1 + 0x1c))(param_1,param_1[0x13],iVar2);
    }
    if (iVar2 == 0) {
      FUN_00413747(param_1,-1);
      return 0;
    }
  }
  iVar2 = FUN_00414040(param_1);
  if ((iVar2 != 0) && ((*(byte *)((int)param_1 + 0x25) & 1) != 0)) {
    GetNextDlgTabItem((HWND)param_1[7],(HWND)0x0,0);
    pCVar3 = FUN_004140eb();
    if (pCVar3 != (CWnd *)0x0) {
      FUN_00416be4((int)pCVar3);
      iVar2 = 0;
    }
  }
  return iVar2;
}



uint32_t FUN_00413816(void)

{
  int iVar1;
  int *piVar2;
  uint32_t uVar3;
  uint8_t local_c [8];
  
  iVar1 = FUN_0041bf1f();
  uVar3 = 0;
  if (*(int *)(iVar1 + 4) != 0) {
    piVar2 = (int *)FUN_00402a20();
    if ((piVar2 != (int *)0x0) &&
       (iVar1 = (**(code **)(*piVar2 + 0x14))(0xe146,0,0,local_c), iVar1 != 0)) {
      return 1;
    }
    iVar1 = FUN_0041bf1f();
    uVar3 = (**(code **)(**(int **)(iVar1 + 4) + 0x14))(0xe146,0,0,local_c);
  }
  return uVar3;
}



uint32_t __fastcall FUN_0041386a(void *param_1)

{
  ushort *puVar1;
  int iVar2;
  void *this;
  
  if (*(ushort **)((int)param_1 + 0x4c) == (ushort *)0x0) {
    puVar1 = FUN_004165b8(param_1,*(LPCSTR *)((int)param_1 + 0x40));
  }
  else {
    puVar1 = FUN_00416608(param_1,*(ushort **)((int)param_1 + 0x4c));
  }
  if (puVar1 != (ushort *)0x0) {
    iVar2 = FUN_00416385();
    if (iVar2 != 0) {
      this = (void *)FUN_00416a40(param_1,0xe146);
      if (this != (void *)0x0) {
        iVar2 = FUN_00413816();
        FUN_00416b7b(this,-(uint)(iVar2 != 0) & 5);
      }
      return 1;
    }
  }
  FUN_00413747(param_1,-1);
  return 0;
}



void __fastcall FUN_004138cf(void *param_1)

{
  int iVar1;
  
  iVar1 = FUN_00416385();
  if (iVar1 != 0) {
    FUN_00413747(param_1,1);
  }
  return;
}



uint32_t __fastcall FUN_004138f0(int param_1)

{
  short sVar1;
  HMODULE hModule;
  int iVar2;
  HRSRC hResInfo;
  HGLOBAL hResData;
  uint *puVar3;
  uint32_t uVar4;
  uint uVar5;
  short sVar6;
  
  puVar3 = *(uint **)(param_1 + 0x48);
  hResData = *(HGLOBAL *)(param_1 + 0x44);
  if (*(int *)(param_1 + 0x40) != 0) {
    iVar2 = FUN_0041bf1f();
    hModule = *(HMODULE *)(iVar2 + 0xc);
    hResInfo = FindResourceA(hModule,*(LPCSTR *)(param_1 + 0x40),(LPCSTR)0x5);
    hResData = LoadResource(hModule,hResInfo);
  }
  if (hResData != (HGLOBAL)0x0) {
    puVar3 = LockResource(hResData);
  }
  uVar4 = 1;
  if (puVar3 != (uint *)0x0) {
    uVar5 = *puVar3;
    if (*(short *)((int)puVar3 + 2) == -1) {
      uVar5 = puVar3[3];
      sVar1 = *(short *)((int)puVar3 + 0x12);
      sVar6 = (short)puVar3[5];
    }
    else {
      sVar1 = *(short *)((int)puVar3 + 10);
      sVar6 = (short)puVar3[3];
    }
    if ((((uVar5 & 0x1801) == 0) && (sVar1 == 0)) && (sVar6 == 0)) {
      uVar4 = 1;
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}



uint32_t FUN_004139cd(void)

{
  LPSTR pCVar1;
  void *this;
  int unaff_EBP;
  int iVar2;
  
  FUN_004037f0();
  *(uint32_t *)(unaff_EBP + -0x14) = 0;
  FUN_00413b00(this,(int *)(unaff_EBP + -300));
  FUN_0041251c((uint32_t *)(unaff_EBP + -0x10));
  iVar2 = 0x100;
  *(uint32_t *)(unaff_EBP + -4) = 1;
  pCVar1 = (LPSTR)FUN_004129da((void *)(unaff_EBP + -0x10),0x100);
  FUN_0041cd25((byte *)(unaff_EBP + -0x11a),pCVar1,iVar2);
  FUN_00412a29((void *)(unaff_EBP + -0x10),-1);
  FUN_0041252c(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
  *(uint32_t *)(unaff_EBP + -0x14) = 1;
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(unaff_EBP + 8);
}



uint32_t FUN_00413a4f(void)

{
  LPSTR pCVar1;
  void *this;
  int unaff_EBP;
  int iVar2;
  
  FUN_004037f0();
  *(uint32_t *)(unaff_EBP + -0x14) = 0;
  FUN_00413b00(this,(int *)(unaff_EBP + -300));
  FUN_0041251c((uint32_t *)(unaff_EBP + -0x10));
  iVar2 = 0x100;
  *(uint32_t *)(unaff_EBP + -4) = 1;
  pCVar1 = (LPSTR)FUN_004129da((void *)(unaff_EBP + -0x10),0x100);
  FUN_004130fb((byte *)(unaff_EBP + -0x11a),pCVar1,iVar2);
  FUN_00412a29((void *)(unaff_EBP + -0x10),-1);
  FUN_0041252c(*(void **)(unaff_EBP + 8),(int *)(unaff_EBP + -0x10));
  *(uint32_t *)(unaff_EBP + -0x14) = 1;
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(unaff_EBP + 8);
}



void * __thiscall FUN_00413ad1(void *this,void *param_1)

{
  int local_120 [4];
  CHAR local_10e [262];
  uint32_t local_8;
  
  local_8 = 0;
  FUN_00413b00(this,local_120);
  FUN_004126d5(param_1,local_10e);
  return param_1;
}



uint32_t __thiscall FUN_00413b00(void *this,int *param_1)

{
  int iVar1;
  int *piVar2;
  BOOL BVar3;
  DWORD DVar4;
  uint32_t uVar5;
  int *piVar6;
  _FILETIME local_1c;
  _FILETIME local_14;
  _FILETIME local_c;
  
  piVar2 = param_1;
  _memset(param_1,0,0x118);
  lstrcpynA((LPSTR)((int)piVar2 + 0x12),*(LPCSTR *)((int)this + 0xc),0x104);
  if (*(HANDLE *)((int)this + 4) == (HANDLE)0xffffffff) {
LAB_00413bd0:
    uVar5 = 1;
  }
  else {
    BVar3 = GetFileTime(*(HANDLE *)((int)this + 4),&local_c,&local_14,&local_1c);
    if (BVar3 != 0) {
      DVar4 = GetFileSize(*(HANDLE *)((int)this + 4),(LPDWORD)0x0);
      piVar2[3] = DVar4;
      if (DVar4 != 0xffffffff) {
        if (*(int *)(*(LPCSTR *)((int)this + 0xc) + -8) == 0) {
LAB_00413b7f:
          *(uint8_t *)(piVar2 + 4) = 0;
        }
        else {
          DVar4 = GetFileAttributesA(*(LPCSTR *)((int)this + 0xc));
          if (DVar4 == 0xffffffff) goto LAB_00413b7f;
          *(char *)(piVar2 + 4) = (char)DVar4;
        }
        piVar6 = FUN_00410f4c(&param_1,&local_c,0xffffffff);
        *piVar2 = *piVar6;
        piVar6 = FUN_00410f4c(&param_1,&local_14,0xffffffff);
        piVar2[2] = *piVar6;
        piVar6 = FUN_00410f4c(&param_1,&local_1c,0xffffffff);
        iVar1 = *piVar6;
        piVar2[1] = iVar1;
        if (*piVar2 == 0) {
          *piVar2 = iVar1;
        }
        if (piVar2[2] == 0) {
          piVar2[2] = piVar2[1];
        }
        goto LAB_00413bd0;
      }
    }
    uVar5 = 0;
  }
  return uVar5;
}



uint32_t FUN_00413bda(LPCSTR param_1,int *param_2)

{
  uint8_t *puVar1;
  int *piVar2;
  int iVar3;
  HANDLE hFindFile;
  int *piVar4;
  _WIN32_FIND_DATAA local_144;
  
  piVar2 = param_2;
  puVar1 = (uint8_t *)((int)param_2 + 0x12);
  iVar3 = FUN_00412f5c();
  if (iVar3 == 0) {
    *puVar1 = 0;
  }
  else {
    hFindFile = FindFirstFileA(param_1,&local_144);
    if (hFindFile != (HANDLE)0xffffffff) {
      FindClose(hFindFile);
      *(byte *)(piVar2 + 4) = (byte)local_144.dwFileAttributes & 0x7f;
      piVar2[3] = local_144.nFileSizeLow;
      piVar4 = FUN_00410f4c(&param_1,&local_144.ftCreationTime,0xffffffff);
      *piVar2 = *piVar4;
      piVar4 = FUN_00410f4c(&param_1,&local_144.ftLastAccessTime,0xffffffff);
      piVar2[2] = *piVar4;
      piVar4 = FUN_00410f4c(&param_1,&local_144.ftLastWriteTime,0xffffffff);
      iVar3 = *piVar4;
      piVar2[1] = iVar3;
      if (*piVar2 == 0) {
        *piVar2 = iVar3;
      }
      if (piVar2[2] == 0) {
        piVar2[2] = piVar2[1];
      }
      return 1;
    }
  }
  return 0;
}



void FUN_00413cac(void)

{
  FUN_00413de0(&DAT_0042a5f0,0);
  return;
}



void FUN_00413cb9(void)

{
  FUN_004030e0(0x413cc5);
  return;
}



void FUN_00413cea(void)

{
  FUN_00413de0(&DAT_0042a6b0,1);
  return;
}



void FUN_00413cf7(void)

{
  FUN_004030e0(0x413d03);
  return;
}



void FUN_00413d28(void)

{
  FUN_00413de0(&DAT_0042a630,0xffffffff);
  return;
}



void FUN_00413d35(void)

{
  FUN_004030e0(0x413d41);
  return;
}



void FUN_00413d66(void)

{
  FUN_00413de0(&DAT_0042a670,0xfffffffe);
  return;
}



void FUN_00413d73(void)

{
  FUN_004030e0(0x413d7f);
  return;
}



uint32_t * __fastcall FUN_00413d9a(uint32_t *param_1)

{
  FUN_00411f34(param_1);
  *param_1 = &PTR_LAB_0041f284;
  _memset(param_1 + 7,0,0x20);
  param_1[0xe] = 0;
  param_1[0xd] = 0;
  return param_1;
}


uint32_t * __thiscall FUN_00413de0(void *this,uint32_t param_1)

{
  FUN_00411f34(this);
  *(uint ***)this = &PTR_LAB_0041f284;
  _memset((uint32_t *)((int)this + 0x1c),0,0x20);
  *(uint32_t *)((int)this + 0x38) = 0;
  *(uint32_t *)((int)this + 0x34) = 0;
  *(uint32_t *)((int)this + 0x1c) = param_1;
  return this;
}



uint32_t FUN_00413e14(HWND param_1,int param_2,uint param_3,uint param_4,uint param_5)

{
  uint uVar1;
  uint32_t uVar2;
  uint dwNewLong;
  
  uVar1 = GetWindowLongA(param_1,param_2);
  dwNewLong = uVar1 & ~param_3 | param_4;
  if (uVar1 == dwNewLong) {
    uVar2 = 0;
  }
  else {
    SetWindowLongA(param_1,param_2,dwNewLong);
    if (param_5 != 0) {
      SetWindowPos(param_1,(HWND)0x0,0,0,0,0,param_5 | 0x17);
    }
    uVar2 = 1;
  }
  return uVar2;
}



void FUN_00413e65(HWND param_1,uint param_2,uint param_3,uint param_4)

{
  FUN_00413e14(param_1,-0x14,param_2,param_3,param_4);
  return;
}



uint32_t FUN_00413e7f(void)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  int iVar4;
  int unaff_EBP;
  uint32_t *puVar5;
  uint32_t *puVar6;
  
  FUN_004037f0();
  *(uint8_t **)(unaff_EBP + -0x10) = &stack0xffffffc0;
  iVar2 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
  *(uint32_t *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar2;
  puVar5 = (uint32_t *)(iVar2 + 0x34);
  puVar6 = (uint32_t *)(unaff_EBP + -0x40);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  iVar4 = *(int *)(unaff_EBP + 0x10);
  piVar1 = *(int **)(unaff_EBP + 8);
  *(uint32_t *)(iVar2 + 0x34) = *(uint32_t *)(unaff_EBP + 0xc);
  *(uint32_t *)(iVar2 + 0x3c) = *(uint32_t *)(unaff_EBP + 0x14);
  uVar3 = *(uint32_t *)(unaff_EBP + 0x18);
  *(int *)(iVar2 + 0x38) = iVar4;
  *(uint32_t *)(iVar2 + 0x40) = uVar3;
  if ((iVar4 == 2) && ((int *)piVar1[0xd] != (int *)0x0)) {
    (**(code **)(*(int *)piVar1[0xd] + 100))(0);
  }
  if (iVar4 == 0x110) {
    FUN_00413f6f((int)piVar1,(LPRECT)(unaff_EBP + -0x24),(uint32_t *)(unaff_EBP + 0xc));
  }
  uVar3 = (**(code **)(*piVar1 + 0xa0))
                    (iVar4,*(uint32_t *)(unaff_EBP + 0x14),*(uint32_t *)(unaff_EBP + 0x18));
  *(uint32_t *)(unaff_EBP + 8) = uVar3;
  if (iVar4 == 0x110) {
    FUN_00413f92(piVar1,(int *)(unaff_EBP + -0x24),*(uint *)(unaff_EBP + 0xc));
    uVar3 = FUN_00413f50();
    return uVar3;
  }
  uVar3 = *(uint32_t *)(unaff_EBP + 8);
  puVar5 = (uint32_t *)(unaff_EBP + -0x40);
  puVar6 = (uint32_t *)(iVar2 + 0x34);
  for (iVar4 = 7; iVar4 != 0; iVar4 = iVar4 + -1) {
    *puVar6 = *puVar5;
    puVar5 = puVar5 + 1;
    puVar6 = puVar6 + 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



uint * Catch_00413f26(void)

{
  CWinThread *pCVar1;
  uint32_t uVar2;
  int unaff_EBP;
  
  pCVar1 = AfxGetThread();
  uVar2 = (**(code **)(*(int *)pCVar1 + 0x74))
                    (*(uint32_t *)(unaff_EBP + 0x10),*(int *)(unaff_EBP + -0x14) + 0x34);
  *(uint32_t *)(unaff_EBP + 8) = uVar2;
  FUN_00416f4f(*(int **)(unaff_EBP + 0x10));
  return &DAT_00413f4d;
}



uint32_t FUN_00413f50(void)

{
  uint32_t uVar1;
  int iVar2;
  int unaff_EBX;
  int unaff_EBP;
  uint32_t *puVar3;
  uint32_t *puVar4;
  
  uVar1 = *(uint32_t *)(unaff_EBP + 8);
  puVar3 = (uint32_t *)(unaff_EBP + -0x40);
  puVar4 = (uint32_t *)(unaff_EBX + 0x34);
  for (iVar2 = 7; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar1;
}



void FUN_00413f6f(int param_1,LPRECT param_2,uint32_t *param_3)

{
  uint32_t uVar1;
  
  GetWindowRect(*(HWND *)(param_1 + 0x1c),param_2);
  uVar1 = FUN_00416a9d(param_1);
  *param_3 = uVar1;
  return;
}



void FUN_00413f92(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  CWnd *pCVar2;
  int iVar3;
  tagRECT local_14;
  
  if (((((param_3 & 0x10000000) == 0) &&
       (uVar1 = FUN_00416a9d((int)param_1), (uVar1 & 0x50000000) == 0)) &&
      (GetWindowRect((HWND)param_1[7],&local_14), *param_2 == local_14.left)) &&
     (param_2[1] == local_14.top)) {
    GetWindow((HWND)param_1[7],4);
    pCVar2 = FUN_004140eb();
    if ((pCVar2 != (CWnd *)0x0) && (iVar3 = FUN_00416ba2((int)pCVar2), iVar3 != 0)) {
      return;
    }
    iVar3 = (**(code **)(*param_1 + 0xb4))();
    if (iVar3 != 0) {
      FUN_0041643e(param_1,0);
    }
  }
  return;
}



int FUN_0041400b(void)

{
  int iVar1;
  LONG LVar2;
  DWORD DVar3;
  
  iVar1 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
  LVar2 = GetMessageTime();
  *(LONG *)(iVar1 + 0x44) = LVar2;
  DVar3 = GetMessagePos();
  *(int *)(iVar1 + 0x48) = (int)(short)DVar3;
  *(int *)(iVar1 + 0x4c) = (int)(short)(DVar3 >> 0x10);
  return iVar1 + 0x34;
}



void __fastcall FUN_00414040(int *param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
  (**(code **)(*param_1 + 0xa8))
            (*(uint32_t *)(iVar1 + 0x38),*(uint32_t *)(iVar1 + 0x3c),
             *(uint32_t *)(iVar1 + 0x40));
  return;
}



void FUN_00414067(void)

{
  int iVar1;
  
  iVar1 = FUN_0041407b();
  if (iVar1 != 0) {
    FUN_004172a1(iVar1);
    return;
  }
  return;
}



uint32_t FUN_0041407b(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  int unaff_EBP;
  
  FUN_004037f0();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x14) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    uVar2 = FUN_004124bb(&LAB_004183a7);
    iVar3 = FUN_004124cf(0x44);
    *(int *)(unaff_EBP + 8) = iVar3;
    *(uint32_t *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = FUN_0041716a();
    }
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    *(void **)(pAVar1 + 0x14) = pvVar4;
    FUN_004124bb(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(pAVar1 + 0x14);
}



CWnd * FUN_004140eb(void)

{
  CHandleMap *pCVar1;
  CWnd *this;
  
  pCVar1 = (CHandleMap *)FUN_0041407b();
  this = (CWnd *)FUN_004171c6();
  CWnd::AttachControlSite(this,pCVar1);
  return this;
}



uint32_t FUN_00414113(uint param_1)

{
  void *this;
  uint32_t uVar1;
  
  this = (void *)FUN_0041407b();
  uVar1 = 0;
  if (this != (void *)0x0) {
    uVar1 = FUN_00411434(this,param_1);
  }
  return uVar1;
}



bool __thiscall FUN_0041412f(void *this,uint param_1)

{
  CHandleMap *this_00;
  uint32_t *puVar1;
  
  if (param_1 != 0) {
    this_00 = (CHandleMap *)FUN_0041407b();
    *(uint *)((int)this + 0x1c) = param_1;
    puVar1 = FUN_00411467(this_00,param_1);
    *puVar1 = this;
    CWnd::AttachControlSite(this,this_00);
  }
  return param_1 != 0;
}



int __fastcall FUN_00414168(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  if (iVar1 != 0) {
    this = (void *)FUN_0041407b();
    if (this != (void *)0x0) {
      FUN_004114b7(this,*(uint *)(param_1 + 0x1c));
    }
    *(uint32_t *)(param_1 + 0x1c) = 0;
  }
  *(uint32_t *)(param_1 + 0x38) = 0;
  return iVar1;
}



uint32_t FUN_00414196(uint param_1,int param_2)

{
  uint32_t uVar1;
  
  if (param_2 == 0x360) {
    uVar1 = 1;
  }
  else {
    FUN_00414113(param_1);
    uVar1 = FUN_00413e7f();
  }
  return uVar1;
}



uint * FUN_004141c5(void)

{
  return FUN_00414196;
}



uint32_t FUN_004141cb(void)

{
  HWND hWnd;
  HANDLE pvVar1;
  CWnd *pCVar2;
  LRESULT LVar3;
  int iVar4;
  CWnd *pCVar5;
  int unaff_EBP;
  bool bVar6;
  
  FUN_004037f0();
  hWnd = *(HWND *)(unaff_EBP + 8);
  *(uint8_t **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  pvVar1 = GetPropA(hWnd,"AfxOldWndProc");
  *(uint32_t *)(unaff_EBP + -0x14) = 0;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  *(HANDLE *)(unaff_EBP + -0x18) = pvVar1;
  iVar4 = *(int *)(unaff_EBP + 0xc);
  bVar6 = true;
  if (iVar4 == 6) {
    pCVar2 = FUN_004140eb();
    pCVar5 = FUN_004140eb();
    FUN_00414318((int)pCVar5,*(WPARAM *)(unaff_EBP + 0x10),(int)pCVar2);
  }
  else if (iVar4 == 0x20) {
    pCVar2 = FUN_004140eb();
    iVar4 = FUN_00414379((int)pCVar2,(int)*(short *)(unaff_EBP + 0x14),
                         *(uint *)(unaff_EBP + 0x14) >> 0x10);
    bVar6 = iVar4 == 0;
  }
  else if (iVar4 == 0x82) {
    SetWindowLongA(hWnd,-4,*(LONG *)(unaff_EBP + -0x18));
    RemovePropA(hWnd,"AfxOldWndProc");
  }
  else if (iVar4 == 0x110) {
    pCVar2 = FUN_004140eb();
    FUN_00413f6f((int)pCVar2,(LPRECT)(unaff_EBP + -0x30),(uint32_t *)(unaff_EBP + -0x1c));
    bVar6 = false;
    LVar3 = CallWindowProcA(*(WNDPROC *)(unaff_EBP + -0x18),hWnd,0x110,*(WPARAM *)(unaff_EBP + 0x10)
                            ,*(LPARAM *)(unaff_EBP + 0x14));
    *(LRESULT *)(unaff_EBP + -0x14) = LVar3;
    FUN_00413f92((int *)pCVar2,(int *)(unaff_EBP + -0x30),*(uint *)(unaff_EBP + -0x1c));
  }
  if (bVar6) {
    LVar3 = CallWindowProcA(*(WNDPROC *)(unaff_EBP + -0x18),hWnd,*(UINT *)(unaff_EBP + 0xc),
                            *(WPARAM *)(unaff_EBP + 0x10),*(LPARAM *)(unaff_EBP + 0x14));
    *(LRESULT *)(unaff_EBP + -0x14) = LVar3;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(unaff_EBP + -0x14);
}



uint32_t Catch_004142dc(void)

{
  CWinThread *pCVar1;
  uint32_t uVar2;
  int unaff_EBP;
  
  *(uint32_t *)(unaff_EBP + -0x3c) = *(uint32_t *)(unaff_EBP + 8);
  *(uint32_t *)(unaff_EBP + -0x38) = *(uint32_t *)(unaff_EBP + 0xc);
  *(uint32_t *)(unaff_EBP + -0x34) = *(uint32_t *)(unaff_EBP + 0x10);
  *(uint32_t *)(unaff_EBP + -0x30) = *(uint32_t *)(unaff_EBP + 0x14);
  pCVar1 = AfxGetThread();
  uVar2 = (**(code **)(*(int *)pCVar1 + 0x74))(*(uint32_t *)(unaff_EBP + -0x20),unaff_EBP + -0x3c)
  ;
  *(uint32_t *)(unaff_EBP + -0x14) = uVar2;
  FUN_00416f4f(*(int **)(unaff_EBP + -0x20));
  return 0x4142c8;
}



void FUN_00414318(int param_1,WPARAM param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint32_t local_c;
  uint32_t local_8;
  
  uVar1 = FUN_00416a9d(param_1);
  if ((uVar1 & 0x40000000) == 0) {
    iVar2 = FUN_00415770(param_1);
    iVar3 = FUN_00415770(param_3);
    if (iVar2 != iVar3) {
      local_c = *(uint32_t *)(param_1 + 0x1c);
      if (param_3 == 0) {
        local_8 = 0;
      }
      else {
        local_8 = *(uint32_t *)(param_3 + 0x1c);
      }
      SendMessageA(*(HWND *)(iVar2 + 0x1c),0x36e,param_2,(LPARAM)&local_c);
    }
  }
  return;
}



uint32_t FUN_00414379(int param_1,int param_2,int param_3)

{
  int iVar1;
  CWnd *pCVar2;
  CWnd *pCVar3;
  
  if (((param_2 == -2) && (((param_3 == 0x201 || (param_3 == 0x207)) || (param_3 == 0x204)))) &&
     (iVar1 = FUN_00415770(param_1), iVar1 != 0)) {
    GetLastActivePopup(*(HWND *)(iVar1 + 0x1c));
    pCVar2 = FUN_004140eb();
    if (pCVar2 != (CWnd *)0x0) {
      GetForegroundWindow();
      pCVar3 = FUN_004140eb();
      if ((pCVar2 != pCVar3) && (iVar1 = FUN_00416ba2((int)pCVar2), iVar1 != 0)) {
        SetForegroundWindow(*(HWND *)(pCVar2 + 0x1c));
        return 1;
      }
    }
  }
  return 0;
}



uint32_t FUN_004143f1(uint32_t param_1,int param_2,HDC param_3,HWND param_4)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  
  iVar1 = FUN_0041c6da();
  if (((*(HANDLE *)(iVar1 + 4) != (HANDLE)0x0) &&
      ((((param_2 == 0x135 || (param_2 == 0x136)) || (param_2 == 0x138)) ||
       ((param_2 == 0x137 || (param_2 == 0x134)))))) &&
     (iVar2 = FUN_00416308(param_3,param_4,param_2 + -0x132,*(HANDLE *)(iVar1 + 4),
                           *(COLORREF *)(iVar1 + 8)), iVar2 != 0)) {
    return *(uint32_t *)(iVar1 + 4);
  }
  uVar3 = FUN_004141cb();
  return uVar3;
}



LRESULT FUN_0041446d(int param_1,HWND param_2,int *param_3)

{
  int *this;
  LRESULT LVar1;
  byte *pbVar2;
  DWORD DVar3;
  int iVar4;
  int iVar5;
  LONG *pLVar6;
  uint *puVar7;
  uint *puVar8;
  HANDLE hData;
  HANDLE pvVar9;
  code *dwNewLong;
  byte local_14 [8];
  int local_c;
  int local_8;
  
  local_8 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
  if (param_1 != 3) {
    LVar1 = CallNextHookEx(*(HHOOK *)(local_8 + 0x2c),param_1,(WPARAM)param_2,(LPARAM)param_3);
    return LVar1;
  }
  this = *(int **)(local_8 + 0x14);
  iVar5 = *param_3;
  pbVar2 = *(byte **)(iVar5 + 0x28);
  if ((short)((uint)pbVar2 >> 0x10) == 0) {
    local_14[0] = local_14[0] & (byte)((uint)pbVar2 >> 0x10);
    GlobalGetAtomNameA(*(ATOM *)(iVar5 + 0x28),(LPSTR)local_14,5);
    pbVar2 = local_14;
  }
  DVar3 = GetClassLongA(param_2,-0x1a);
  if (((DVar3 & 0x10000) != 0) || (iVar4 = FUN_004040a0(pbVar2,&DAT_0041f344), iVar4 == 0))
  goto LAB_0041461e;
  if (this == (int *)0x0) {
    if ((((*(byte *)(iVar5 + 0x23) & 0x40) == 0) &&
        (iVar5 = FUN_0041bf1f(), *(char *)(iVar5 + 0x14) == '\0')) &&
       (hData = (HANDLE)GetWindowLongA(param_2,-4), hData != (HANDLE)0x0)) {
      SetPropA(param_2,"AfxOldWndProc",hData);
      pvVar9 = GetPropA(param_2,"AfxOldWndProc");
      if (pvVar9 == hData) {
        dwNewLong = FUN_004143f1;
        if (*(int *)(local_8 + 0x28) == 0) {
          dwNewLong = FUN_004141cb;
        }
        SetWindowLongA(param_2,-4,(LONG)dwNewLong);
      }
    }
    goto LAB_0041461e;
  }
  FUN_0041412f(this,(uint)param_2);
  (**(code **)(*this + 0x58))();
  pLVar6 = (LONG *)(**(code **)(*this + 0x88))();
  if (((DAT_0042abf4 == 0) &&
      (iVar4 = FUN_0041bf1f(), iVar5 = DAT_0042ac04, *(char *)(iVar4 + 0x14) == '\0')) &&
     ((DAT_0042ac04 != 0 &&
      ((*(int *)(DAT_0042ac04 + 0x20) != 0 && (local_c = FUN_00413e7f(), local_c != 0)))))) {
    puVar7 = FUN_004141c5();
    puVar8 = (uint *)GetWindowLongA(param_2,-4);
    (**(code **)(iVar5 + 0x20))(param_2,local_c);
    if (puVar8 != puVar7) {
      puVar8 = (uint *)SetWindowLongA(param_2,-4,(LONG)puVar7);
LAB_004145c7:
      *pLVar6 = (LONG)puVar8;
    }
  }
  else {
    puVar7 = FUN_004141c5();
    puVar8 = (uint *)SetWindowLongA(param_2,-4,(LONG)puVar7);
    if (puVar8 != puVar7) goto LAB_004145c7;
  }
  *(uint32_t *)(local_8 + 0x14) = 0;
LAB_0041461e:
  iVar5 = local_8;
  LVar1 = CallNextHookEx(*(HHOOK *)(local_8 + 0x2c),3,(WPARAM)param_2,(LPARAM)param_3);
  iVar4 = FUN_0041bf1f();
  if (*(char *)(iVar4 + 0x14) != '\0') {
    UnhookWindowsHookEx(*(HHOOK *)(iVar5 + 0x2c));
    *(uint32_t *)(iVar5 + 0x2c) = 0;
  }
  return LVar1;
}



void FUN_00414650(int param_1)

{
  int iVar1;
  DWORD dwThreadId;
  HHOOK pHVar2;
  
  iVar1 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
  if (*(int *)(iVar1 + 0x14) != param_1) {
    if (*(int *)(iVar1 + 0x2c) == 0) {
      dwThreadId = GetCurrentThreadId();
      pHVar2 = SetWindowsHookExA(5,FUN_0041446d,(HINSTANCE)0x0,dwThreadId);
      *(HHOOK *)(iVar1 + 0x2c) = pHVar2;
      if (pHVar2 == (HHOOK)0x0) {
        FUN_00410e99();
      }
    }
    *(int *)(iVar1 + 0x14) = param_1;
  }
  return;
}



uint32_t FUN_0041469c(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
  iVar2 = FUN_0041bf1f();
  if ((*(char *)(iVar2 + 0x14) != '\0') && (*(HHOOK *)(iVar1 + 0x2c) != (HHOOK)0x0)) {
    UnhookWindowsHookEx(*(HHOOK *)(iVar1 + 0x2c));
    *(uint32_t *)(iVar1 + 0x2c) = 0;
  }
  if (*(int *)(iVar1 + 0x14) != 0) {
    *(uint32_t *)(iVar1 + 0x14) = 0;
    return 0;
  }
  return 1;
}



bool __thiscall
FUN_004146de(void *this,DWORD param_1,LPCSTR param_2,LPCSTR param_3,DWORD param_4,int param_5,
            int param_6,int param_7,int param_8,HWND param_9,HMENU param_10,LPVOID param_11)

{
  int iVar1;
  HWND pHVar2;
  bool bVar3;
  LPVOID local_34;
  HINSTANCE local_30;
  HMENU local_2c;
  HWND local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  DWORD local_14;
  LPCSTR local_10;
  LPCSTR local_c;
  DWORD local_8;
  
  local_8 = param_1;
  local_c = param_2;
  local_10 = param_3;
  local_14 = param_4;
  local_18 = param_5;
  local_1c = param_6;
  local_20 = param_7;
  local_24 = param_8;
  local_28 = param_9;
  local_2c = param_10;
  iVar1 = FUN_0041bf1f();
  local_30 = *(HINSTANCE *)(iVar1 + 8);
  local_34 = param_11;
  iVar1 = (**(code **)(*(int *)this + 100))(&local_34);
  if (iVar1 == 0) {
    (**(code **)(*(int *)this + 0xac))();
    bVar3 = false;
  }
  else {
    FUN_00414650((int)this);
    pHVar2 = CreateWindowExA(local_8,local_c,local_10,local_14,local_18,local_1c,local_20,local_24,
                             local_28,local_2c,local_30,local_34);
    iVar1 = FUN_0041469c();
    if (iVar1 == 0) {
      (**(code **)(*(int *)this + 0xac))();
    }
    bVar3 = pHVar2 != (HWND)0x0;
  }
  return bVar3;
}



uint32_t FUN_004147a4(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = FUN_0041bf1f();
    if ((*(byte *)(iVar1 + 0x18) & 1) == 0) {
      iVar1 = FUN_0041684c(1);
    }
    else {
      iVar1 = 1;
    }
    if (iVar1 == 0) {
      return 0;
    }
    *(char **)(param_1 + 0x28) = "AfxWnd42s";
  }
  return 1;
}



void __thiscall
FUN_004147d6(void *this,LPCSTR param_1,LPCSTR param_2,uint param_3,int *param_4,int param_5,
            HMENU param_6,LPVOID param_7)

{
  HWND pHVar1;
  
  if (param_5 == 0) {
    pHVar1 = (HWND)0x0;
  }
  else {
    pHVar1 = *(HWND *)(param_5 + 0x1c);
  }
  FUN_004146de(this,0,param_1,param_2,param_3 | 0x40000000,*param_4,param_4[1],param_4[2] - *param_4
               ,param_4[3] - param_4[1],pHVar1,param_6,param_7);
  return;
}


void __fastcall FUN_0041489e(int *param_1)

{
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))(1);
  }
  param_1[0xd] = 0;
  FUN_00414040(param_1);
  return;
}



void __fastcall FUN_004148bc(int *param_1)

{
  bool bVar1;
  CWinThread *pCVar2;
  int iVar3;
  undefined3 extraout_var;
  int iVar4;
  LONG LVar5;
  LONG LVar6;
  int *piVar7;
  uint32_t local_30;
  uint32_t local_2c;
  int local_28;
  int local_24;
  
  pCVar2 = AfxGetThread();
  if (pCVar2 == (CWinThread *)0x0) goto LAB_00414907;
  if (*(int **)(pCVar2 + 0x1c) == param_1) {
    iVar3 = FUN_0041bf1f();
    if (*(char *)(iVar3 + 0x14) == '\0') {
      iVar3 = FUN_0041bf1f();
      if (pCVar2 == *(CWinThread **)(iVar3 + 4)) {
        bVar1 = FUN_00419497();
        if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_004148fc;
      }
      AfxPostQuitMessage(0);
    }
LAB_004148fc:
    *(uint32_t *)(pCVar2 + 0x1c) = 0;
  }
  if (*(int **)(pCVar2 + 0x20) == param_1) {
    *(uint32_t *)(pCVar2 + 0x20) = 0;
  }
LAB_00414907:
  if ((int *)param_1[0xc] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xc] + 0x58))();
    param_1[0xc] = 0;
  }
  if ((int *)param_1[0xd] != (int *)0x0) {
    (**(code **)(*(int *)param_1[0xd] + 4))(1);
  }
  param_1[0xd] = 0;
  if ((*(byte *)(param_1 + 9) & 1) != 0) {
    iVar3 = FUN_0041bc33();
    iVar3 = *(int *)(iVar3 + 0xcc);
    if (iVar3 == 0) {
      iVar4 = 0;
    }
    else {
      iVar4 = *(int *)(iVar3 + 0x1c);
    }
    if (iVar4 != 0) {
      _memset(&local_30,0,0x2c);
      local_28 = param_1[7];
      local_30 = 0x28;
      local_2c = 1;
      local_24 = local_28;
      SendMessageA(*(HWND *)(iVar3 + 0x1c),0x405,0,(LPARAM)&local_30);
    }
  }
  LVar5 = GetWindowLongA((HWND)param_1[7],-4);
  FUN_00414040(param_1);
  LVar6 = GetWindowLongA((HWND)param_1[7],-4);
  if (LVar6 == LVar5) {
    piVar7 = (int *)(**(code **)(*param_1 + 0x88))();
    if (*piVar7 != 0) {
      SetWindowLongA((HWND)param_1[7],-4,*piVar7);
    }
  }
  FUN_00414168((int)param_1);
  (**(code **)(*param_1 + 0xac))();
  return;
}



BOOL __fastcall FUN_004149e5(int param_1)

{
  void *this;
  int iVar1;
  BOOL BVar2;
  
  if (*(int *)(param_1 + 0x1c) == 0) {
    return 0;
  }
  this = (void *)FUN_0041407b();
  iVar1 = FUN_00411434(this,*(uint *)(param_1 + 0x1c));
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    BVar2 = DestroyWindow(*(HWND *)(param_1 + 0x1c));
  }
  else {
    BVar2 = (**(code **)(**(int **)(param_1 + 0x38) + 0x58))();
  }
  if (iVar1 == 0) {
    FUN_00414168(param_1);
  }
  return BVar2;
}



void __thiscall FUN_00414a32(void *this,UINT param_1,WPARAM param_2,LPARAM param_3)

{
  int *piVar1;
  WNDPROC lpPrevWndFunc;
  
  lpPrevWndFunc = *(WNDPROC *)((int)this + 0x28);
  if (lpPrevWndFunc == (WNDPROC)0x0) {
    piVar1 = (int *)(**(code **)(*(int *)this + 0x88))();
    lpPrevWndFunc = (WNDPROC)*piVar1;
    if (lpPrevWndFunc == (WNDPROC)0x0) {
      DefWindowProcA(*(HWND *)((int)this + 0x1c),param_1,param_2,param_3);
      return;
    }
  }
  CallWindowProcA(lpPrevWndFunc,*(HWND *)((int)this + 0x1c),param_1,param_2,param_3);
  return;
}



uint32_t __thiscall FUN_00414a7d(void *this,uint32_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  if (*(code **)(iVar1 + 0x1034) != (code *)0x0) {
    (**(code **)(iVar1 + 0x1034))(param_1,this);
  }
  return 0;
}



void FUN_00414a9c(int param_1)

{
  int iVar1;
  int *piVar2;
  SHORT SVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = FUN_0041bc33();
  iVar1 = *(int *)(iVar4 + 0xcc);
  if (iVar1 == 0) {
    iVar5 = 0;
  }
  else {
    iVar5 = *(int *)(iVar1 + 0x1c);
  }
  if (iVar5 != 0) {
    SendMessageA(*(HWND *)(iVar1 + 0x1c),0x401,0,0);
  }
  piVar2 = *(int **)(iVar4 + 0x108);
  if ((param_1 != 0) && (piVar2 != (int *)0x0)) {
    SVar3 = GetKeyState(1);
    if (-1 < SVar3) {
      (**(code **)(*piVar2 + 0xe4))(0xffffffff);
    }
  }
  return;
}



uint __thiscall FUN_00414af9(void *this,LONG param_1,LONG param_2,uint *param_3)

{
  HWND hWnd;
  uint uVar1;
  uint uVar2;
  
  hWnd = FUN_00418214(*(HWND *)((int)this + 0x1c),param_1,param_2);
  if (hWnd == (HWND)0x0) {
    uVar1 = 0xffffffff;
  }
  else {
    uVar1 = GetDlgCtrlID(hWnd);
    uVar1 = uVar1 & 0xffff;
    if ((param_3 != (uint *)0x0) && (0x27 < *param_3)) {
      uVar2 = *(uint *)((int)this + 0x1c);
      param_3[1] = param_3[1] | 1;
      param_3[9] = 0xffffffff;
      param_3[2] = uVar2;
      param_3[3] = (uint)hWnd;
      uVar2 = SendMessageA(hWnd,0x87,0,0);
      if ((uVar2 & 0x2000) == 0) {
        param_3[1] = param_3[1] | 0x80000002;
      }
    }
  }
  return uVar1;
}



void __thiscall FUN_00414b6a(void *this,void *param_1)

{
  int iVar1;
  LPSTR lpString;
  int nMaxCount;
  
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    iVar1 = GetWindowTextLengthA(*(HWND *)((int)this + 0x1c));
    nMaxCount = iVar1 + 1;
    lpString = (LPSTR)FUN_00412a51(param_1,iVar1);
    GetWindowTextA(*(HWND *)((int)this + 0x1c),lpString,nMaxCount);
    FUN_00412a29(param_1,-1);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0x90))(param_1);
  }
  return;
}



void __thiscall FUN_00414bb2(void *this,uint32_t param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  
  if (*param_2 == 1) {
    piVar1 = (int *)FUN_00416e37(param_2[5]);
    if (piVar1 != (int *)0x0) {
      (**(code **)(*piVar1 + 0x14))(param_2);
      return;
    }
  }
  else {
    iVar2 = FUN_00415dc1();
    if (iVar2 != 0) {
      return;
    }
  }
  FUN_00414040(this);
  return;
}



uint32_t __thiscall FUN_00414bef(void *this,uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_00415dc1();
  if (iVar1 == 0) {
    param_2 = FUN_00414040(this);
  }
  return param_2;
}



void * __thiscall FUN_00414c39(void *this,uint32_t param_1,void *param_2)

{
  int iVar1;
  
  if ((param_2 == (void *)0x0) || (iVar1 = FUN_00415d94(param_2,&param_2), iVar1 == 0)) {
    param_2 = (void *)FUN_00414040(this);
  }
  return param_2;
}



void __thiscall FUN_00414c64(void *this,uint32_t param_1,int *param_2)

{
  int iVar1;
  int *piVar2;
  CWnd *this_00;
  
  if (*param_2 == 1) {
    iVar1 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
    if (*(HWND *)(iVar1 + 0x50) != *(HWND *)((int)this + 0x1c)) {
      GetMenu(*(HWND *)((int)this + 0x1c));
    }
    iVar1 = FUN_00416e21();
    piVar2 = (int *)FUN_00414cdd(iVar1,param_2[2]);
    if (piVar2 != (int *)0x0) {
      (**(code **)(*piVar2 + 0x18))(param_2);
    }
  }
  else {
    this_00 = FUN_00415880(*(HWND *)((int)this + 0x1c),param_2[1],1);
    if ((this_00 != (CWnd *)0x0) && (iVar1 = FUN_00415d94(this_00,0), iVar1 != 0)) {
      return;
    }
  }
  FUN_00414040(this);
  return;
}



int __cdecl FUN_00414cdd(int param_1,UINT param_2)

{
  int iVar1;
  int iVar2;
  UINT UVar3;
  int nPos;
  
  iVar1 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
  nPos = 0;
  if (0 < iVar1) {
    do {
      GetSubMenu(*(HMENU *)(param_1 + 4),nPos);
      iVar2 = FUN_00416e21();
      if (iVar2 == 0) {
        UVar3 = GetMenuItemID(*(HMENU *)(param_1 + 4),nPos);
        if (UVar3 == param_2) {
          iVar1 = FUN_00416e37(*(uint *)(param_1 + 4));
          return iVar1;
        }
      }
      else {
        iVar2 = FUN_00414cdd(iVar2,param_2);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      nPos = nPos + 1;
    } while (nPos < iVar1);
  }
  return 0;
}



uint32_t FUN_00414d40(void)

{
  WNDCLASSA *lpWndClass;
  ATOM AVar1;
  BOOL BVar2;
  uint32_t uVar3;
  int iVar4;
  int unaff_EBP;
  
  FUN_004037f0();
  lpWndClass = *(WNDCLASSA **)(unaff_EBP + 8);
  *(uint8_t **)(unaff_EBP + -0x10) = &stack0xffffffc4;
  BVar2 = GetClassInfoA(lpWndClass->hInstance,lpWndClass->lpszClassName,
                        (LPWNDCLASSA)(unaff_EBP + -0x38));
  if (BVar2 == 0) {
    AVar1 = RegisterClassA(lpWndClass);
    if (AVar1 == 0) {
      uVar3 = 0;
      goto LAB_00414dc2;
    }
    iVar4 = FUN_0041bf1f();
    if (*(char *)(iVar4 + 0x14) != '\0') {
      FUN_0041c922(1);
      *(uint32_t *)(unaff_EBP + -4) = 0;
      iVar4 = FUN_0041bf1f();
      lstrcatA((LPSTR)(iVar4 + 0x34),lpWndClass->lpszClassName);
      *(uint8_t *)(unaff_EBP + 0xb) = 0;
      *(uint8_t *)(unaff_EBP + 10) = 10;
      lstrcatA((LPSTR)(iVar4 + 0x34),(LPCSTR)(unaff_EBP + 10));
      *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
      FUN_0041c992(1);
    }
  }
  uVar3 = 1;
LAB_00414dc2:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



uint32_t Catch_00414dd3(void)

{
  FUN_0041c992(1);
  FUN_004041a0(0,0);
  return 0x414db4;
}



LPSTR FUN_00414de9(UINT param_1,HCURSOR param_2,HBRUSH param_3,HICON param_4)

{
  HINSTANCE hInstance;
  int iVar1;
  BOOL BVar2;
  LPSTR lpClassName;
  tagWNDCLASSA local_2c;
  
  iVar1 = FUN_0041bc33();
  lpClassName = (LPSTR)(iVar1 + 0x58);
  iVar1 = FUN_0041bf1f();
  hInstance = *(HINSTANCE *)(iVar1 + 8);
  if (((param_2 == (HCURSOR)0x0) && (param_3 == (HBRUSH)0x0)) && (param_4 == (HICON)0x0)) {
    wsprintfA(lpClassName,"Afx:%x:%x",hInstance,param_1);
  }
  else {
    wsprintfA(lpClassName,"Afx:%x:%x:%x:%x:%x",hInstance,param_1,param_2,param_3,param_4);
  }
  BVar2 = GetClassInfoA(hInstance,lpClassName,&local_2c);
  if (BVar2 == 0) {
    local_2c.style = param_1;
    local_2c.lpfnWndProc = DefWindowProcA_exref;
    local_2c.cbWndExtra = 0;
    local_2c.cbClsExtra = 0;
    local_2c.lpszMenuName = (LPCSTR)0x0;
    local_2c.hIcon = param_4;
    local_2c.hCursor = param_2;
    local_2c.hbrBackground = param_3;
    local_2c.hInstance = hInstance;
    local_2c.lpszClassName = lpClassName;
    iVar1 = FUN_00414d40();
    if (iVar1 == 0) {
      FUN_00418184();
    }
  }
  return lpClassName;
}



void __thiscall FUN_00414e9d(void *this,uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  uint32_t local_10;
  uint32_t local_c;
  int local_8;
  
  local_c = param_1;
  local_10 = param_2;
  iVar1 = FUN_0041400b();
  local_8 = *(int *)(iVar1 + 4) + -0x132;
  (**(code **)(*(int *)this + 0xa0))(0x19,0,&local_10);
  return;
}



void FUN_00414ed9(void)

{
  int iVar1;
  HWND hWnd;
  BOOL BVar2;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  iVar1 = FUN_0041bf1f();
  *(uint32_t *)(unaff_EBP + -0x10) = *(uint32_t *)(iVar1 + 4);
  FUN_0041bf1f();
  FUN_00412200();
  iVar1 = *extraout_ECX;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  iVar1 = (**(code **)(iVar1 + 0xb8))();
  if (iVar1 != 0) {
    (**(code **)(*extraout_ECX + 0xf8))();
  }
  SendMessageA((HWND)extraout_ECX[7],0x1f,0,0);
  FUN_004158f9((HWND)extraout_ECX[7],0x1f,0,0,1,1);
  iVar1 = FUN_00415770((int)extraout_ECX);
  SendMessageA(*(HWND *)(iVar1 + 0x1c),0x1f,0,0);
  FUN_004158f9(*(HWND *)(iVar1 + 0x1c),0x1f,0,0,1,1);
  hWnd = GetCapture();
  if (hWnd != (HWND)0x0) {
    SendMessageA(hWnd,0x1f,0,0);
  }
  BVar2 = WinHelpA(*(HWND *)(iVar1 + 0x1c),*(LPCSTR *)(*(int *)(unaff_EBP + -0x10) + 0x8c),
                   *(UINT *)(unaff_EBP + 0xc),*(ULONG_PTR *)(unaff_EBP + 8));
  if (BVar2 == 0) {
    FUN_00419030();
  }
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0041bf1f();
  FUN_00412215();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



uint32_t __thiscall
FUN_00415001(void *this,uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  uint32_t local_8;
  
  local_8 = 0;
  iVar1 = (**(code **)(*(int *)this + 0xa4))(param_1,param_2,param_3,&local_8);
  if (iVar1 == 0) {
    local_8 = (**(code **)(*(int *)this + 0xa8))(param_1,param_2,param_3);
  }
  return local_8;
}



// WARNING (jumptable): Unable to track spacebase fully for stack

uint32_t FUN_00415045(void)

{
  code *pcVar1;
  short sVar2;
  int iVar3;
  CWnd *pCVar4;
  uint uVar5;
  int iVar6;
  AFX_MSGMAP_ENTRY *pAVar7;
  DWORD DVar8;
  CWnd *pCVar9;
  int *extraout_ECX;
  uint uVar10;
  CWnd *pCVar11;
  int unaff_EBP;
  short sVar12;
  uint32_t uVar13;
  
  FUN_004037f0();
  *(uint32_t *)(unaff_EBP + -0x10) = 0;
  uVar5 = *(uint *)(unaff_EBP + 8);
  if (uVar5 == 0x111) {
    iVar3 = (**(code **)(*extraout_ECX + 0x80))
                      (*(uint32_t *)(unaff_EBP + 0xc),*(uint32_t *)(unaff_EBP + 0x10));
    if (iVar3 != 0) {
LAB_00415499:
      *(uint32_t *)(unaff_EBP + -0x10) = 1;
      goto switchD_00415212_caseD_26;
    }
LAB_004151c7:
    uVar13 = 0;
    goto LAB_004151c9;
  }
  if (uVar5 == 0x4e) {
    if (**(int **)(unaff_EBP + 0x10) != 0) {
      iVar3 = (**(code **)(*extraout_ECX + 0x84))
                        (*(uint32_t *)(unaff_EBP + 0xc),*(int **)(unaff_EBP + 0x10),
                         unaff_EBP + -0x10);
LAB_004154bd:
      if (iVar3 != 0) goto switchD_00415212_caseD_26;
    }
    goto LAB_004151c7;
  }
  pCVar9 = *(CWnd **)(unaff_EBP + 0x10);
  if (uVar5 == 6) {
    pCVar4 = FUN_004140eb();
    FUN_00414318((int)extraout_ECX,*(WPARAM *)(unaff_EBP + 0xc),(int)pCVar4);
  }
  sVar12 = (short)pCVar9;
  if ((uVar5 == 0x20) &&
     (iVar3 = FUN_00414379((int)extraout_ECX,(int)sVar12,(uint)pCVar9 >> 0x10), iVar3 != 0))
  goto LAB_00415499;
  uVar13 = (**(code **)(*extraout_ECX + 0x30))();
  *(uint32_t *)(unaff_EBP + -0x14) = uVar13;
  FUN_0041c922(7);
  uVar10 = *(uint *)(unaff_EBP + 8);
  uVar5 = uVar5 & 0x1ff ^ *(uint *)(unaff_EBP + -0x14) & 0x1ff;
  iVar3 = uVar5 * 0xc;
  iVar6 = *(int *)(unaff_EBP + -0x14);
  if ((uVar10 != *(uint *)(&DAT_00428df0 + uVar5 * 0xc)) ||
     (iVar6 != *(int *)(&DAT_00428df8 + iVar3))) {
    *(uint *)(&DAT_00428df0 + iVar3) = uVar10;
    *(int *)(&DAT_00428df8 + iVar3) = iVar6;
    if (iVar6 != 0) {
      while( true ) {
        if (uVar10 < 0xc000) {
          pAVar7 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(iVar6 + 4),uVar10,0,0);
          *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar7;
          if (pAVar7 != (AFX_MSGMAP_ENTRY *)0x0) {
            *(AFX_MSGMAP_ENTRY **)(&DAT_00428df4 + iVar3) = pAVar7;
            FUN_0041c992(7);
            iVar3 = *(int *)(unaff_EBP + 0x10);
            goto LAB_004151e7;
          }
        }
        else {
          pAVar7 = AfxFindMessageEntry(*(AFX_MSGMAP_ENTRY **)(iVar6 + 4),0xc000,0,0);
          *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar7;
          if (pAVar7 != (AFX_MSGMAP_ENTRY *)0x0) {
            while( true ) {
              if (**(int **)(pAVar7 + 0x10) == *(int *)(unaff_EBP + 8)) {
                *(AFX_MSGMAP_ENTRY **)(&DAT_00428df4 + iVar3) = pAVar7;
                FUN_0041c992(7);
                iVar3 = *(int *)(unaff_EBP + 0x10);
                goto LAB_004154d3;
              }
              pAVar7 = AfxFindMessageEntry(pAVar7 + 0x18,0xc000,0,0);
              *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10) = pAVar7;
              if (pAVar7 == (AFX_MSGMAP_ENTRY *)0x0) break;
              pAVar7 = *(AFX_MSGMAP_ENTRY **)(unaff_EBP + 0x10);
            }
          }
        }
        iVar6 = **(int **)(unaff_EBP + -0x14);
        *(int *)(unaff_EBP + -0x14) = iVar6;
        if (iVar6 == 0) break;
        uVar10 = *(uint *)(unaff_EBP + 8);
        iVar6 = *(int *)(unaff_EBP + -0x14);
      }
    }
    *(uint32_t *)(&DAT_00428df4 + iVar3) = 0;
    FUN_0041c992(7);
    goto LAB_004151c7;
  }
  iVar3 = *(int *)(&DAT_00428df4 + iVar3);
  *(int *)(unaff_EBP + 0x10) = iVar3;
  FUN_0041c992(7);
  if (iVar3 == 0) goto LAB_004151c7;
  if (0xbfff < *(uint *)(unaff_EBP + 8)) {
LAB_004154d3:
    uVar13 = (**(code **)(iVar3 + 0x14))(*(uint32_t *)(unaff_EBP + 0xc),pCVar9);
    goto LAB_004154dc;
  }
LAB_004151e7:
  iVar6 = *(int *)(unaff_EBP + 0x10);
  pcVar1 = *(code **)(iVar3 + 0x14);
  iVar3 = *(int *)(iVar6 + 0x10);
  if (*(int *)(iVar6 + 8) == 0x1a) {
    DVar8 = GetVersion();
    iVar6 = *(int *)(unaff_EBP + 0x10);
    iVar3 = (-(uint)((byte)DVar8 < 4) & 0xfffffff0) + 0x2f;
  }
  sVar2 = (short)((uint)pCVar9 >> 0x10);
  switch(iVar3) {
  case 1:
    pCVar9 = (CWnd *)FUN_00417b70();
    goto LAB_0041531d;
  case 2:
    pCVar9 = *(CWnd **)(unaff_EBP + 0xc);
    goto LAB_0041531d;
  case 3:
  case 8:
    uVar5 = (uint)pCVar9 >> 0x10;
    pCVar9 = (CWnd *)(int)sVar12;
    pCVar4 = FUN_004140eb();
    goto LAB_00415338;
  case 4:
    FUN_00417abc((uint32_t *)(unaff_EBP + -0x24));
    uVar5 = *(uint *)(pCVar9 + 4);
    *(uint32_t *)(unaff_EBP + -4) = 0;
    *(uint *)(unaff_EBP + -0x20) = uVar5;
    FUN_00413d9a((uint32_t *)(unaff_EBP + -0x60));
    uVar5 = *(uint *)pCVar9;
    uVar10 = *(uint *)(pCVar9 + 8);
    *(uint8_t *)(unaff_EBP + -4) = 1;
    *(uint *)(unaff_EBP + -0x44) = uVar5;
    iVar3 = FUN_00414113(uVar5);
    if (iVar3 == 0) {
      if ((extraout_ECX[0xd] != 0) &&
         (iVar3 = FUN_00411434((void *)(extraout_ECX[0xd] + 0x20),*(uint *)(unaff_EBP + -0x44)),
         iVar3 != 0)) {
        *(int *)(unaff_EBP + -0x28) = iVar3;
      }
      iVar3 = unaff_EBP + -0x60;
    }
    uVar13 = (*pcVar1)(unaff_EBP + -0x24,iVar3,uVar10);
    *(uint32_t *)(unaff_EBP + -0x20) = 0;
    *(uint32_t *)(unaff_EBP + -0x44) = 0;
    *(uint8_t *)(unaff_EBP + -4) = 0;
    *(uint32_t *)(unaff_EBP + -0x10) = uVar13;
    CWnd::~CWnd((CWnd *)(unaff_EBP + -0x60));
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    goto LAB_004152df;
  case 5:
    FUN_00417abc((uint32_t *)(unaff_EBP + -0x24));
    uVar5 = *(uint *)(pCVar9 + 8);
    *(uint *)(unaff_EBP + -0x20) = *(uint *)(pCVar9 + 4);
    *(uint32_t *)(unaff_EBP + -4) = 2;
    uVar13 = (*pcVar1)(unaff_EBP + -0x24,uVar5);
    *(uint32_t *)(unaff_EBP + -0x20) = 0;
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    *(uint32_t *)(unaff_EBP + -0x10) = uVar13;
LAB_004152df:
    FUN_00417bee();
    goto switchD_00415212_caseD_26;
  case 6:
    uVar5 = *(uint *)(unaff_EBP + 0xc) >> 0x10;
    pCVar9 = FUN_004140eb();
    goto LAB_00415333;
  case 7:
    pCVar9 = (CWnd *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    pCVar4 = (CWnd *)(uint)*(ushort *)(unaff_EBP + 0xc);
    goto LAB_0041544e;
  case 9:
  case 0x2a:
LAB_0041531d:
    uVar13 = (*pcVar1)(pCVar9);
    goto LAB_004154dc;
  case 10:
  case 0x21:
    pCVar4 = *(CWnd **)(unaff_EBP + 0xc);
    goto LAB_0041544e;
  case 0xb:
    uVar5 = FUN_00416e21();
    pCVar9 = (CWnd *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
LAB_00415333:
    pCVar4 = (CWnd *)(uint)*(ushort *)(unaff_EBP + 0xc);
LAB_00415338:
    uVar13 = (*pcVar1)(pCVar4,pCVar9,uVar5);
    goto LAB_004154dc;
  case 0xc:
    (*pcVar1)();
    goto switchD_00415212_caseD_26;
  case 0xd:
    pCVar9 = *(CWnd **)(unaff_EBP + 0xc);
    break;
  case 0xe:
  case 0x12:
  case 0x25:
  case 0x2f:
    goto LAB_0041545e;
  case 0xf:
    pCVar9 = (CWnd *)(int)sVar2;
    pCVar4 = (CWnd *)(int)sVar12;
    goto LAB_00415461;
  case 0x10:
  case 0x11:
    pCVar11 = (CWnd *)((uint)pCVar9 >> 0x10);
    pCVar4 = (CWnd *)((uint)pCVar9 & 0xffff);
    goto LAB_00415487;
  case 0x13:
    pCVar11 = FUN_004140eb();
    pCVar4 = FUN_004140eb();
    pCVar9 = (CWnd *)(uint)((CWnd *)extraout_ECX[7] == pCVar9);
    goto LAB_0041548b;
  case 0x14:
    pCVar9 = (CWnd *)FUN_00417b70();
    break;
  case 0x15:
    pCVar9 = (CWnd *)FUN_00416e21();
    break;
  case 0x16:
    pCVar11 = (CWnd *)((uint)pCVar9 >> 0x10);
    pCVar4 = (CWnd *)((uint)pCVar9 & 0xffff);
    pCVar9 = (CWnd *)FUN_00416e21();
    goto LAB_0041548b;
  case 0x17:
    goto LAB_004153c0;
  case 0x18:
    pCVar11 = (CWnd *)((uint)pCVar9 >> 0x10);
    pCVar4 = (CWnd *)((uint)pCVar9 & 0xffff);
    goto LAB_004153e0;
  case 0x19:
    pCVar4 = (CWnd *)(int)sVar12;
    pCVar11 = (CWnd *)(int)sVar2;
LAB_004153e0:
    pCVar9 = FUN_004140eb();
    goto LAB_0041548b;
  case 0x1a:
    pCVar4 = FUN_004140eb();
    goto LAB_00415461;
  case 0x1b:
    pCVar9 = FUN_004140eb();
LAB_0041545e:
    pCVar4 = *(CWnd **)(unaff_EBP + 0xc);
    goto LAB_00415461;
  case 0x1c:
    pCVar11 = (CWnd *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    pCVar4 = FUN_004140eb();
    goto LAB_00415475;
  case 0x1d:
  case 0x1e:
    pCVar4 = (CWnd *)(int)(short)*(uint32_t *)(unaff_EBP + 0xc);
    iVar3 = *(int *)(iVar6 + 0x10);
    *(CWnd **)(unaff_EBP + 8) = pCVar4;
    pCVar9 = (CWnd *)(int)(short)((uint)*(uint32_t *)(unaff_EBP + 0xc) >> 0x10);
    *(CWnd **)(unaff_EBP + 0xc) = pCVar9;
    if (iVar3 == 0x1d) {
      pCVar11 = FUN_004140eb();
      pCVar4 = *(CWnd **)(unaff_EBP + 0xc);
      pCVar9 = *(CWnd **)(unaff_EBP + 8);
      goto LAB_0041548b;
    }
LAB_00415461:
    (*pcVar1)(pCVar4,pCVar9);
    goto switchD_00415212_caseD_26;
  case 0x1f:
  case 0x24:
    break;
  case 0x20:
  case 0x2b:
    (*pcVar1)(*(uint32_t *)(unaff_EBP + 0xc),pCVar9);
    goto LAB_00415499;
  case 0x22:
    pCVar4 = (CWnd *)(int)sVar12;
    pCVar9 = (CWnd *)(int)sVar2;
    goto LAB_0041544e;
  case 0x23:
    uVar13 = (*pcVar1)();
    goto LAB_004154dc;
  default:
    goto switchD_00415212_caseD_26;
  case 0x2c:
LAB_004153c0:
    pCVar9 = FUN_004140eb();
    break;
  case 0x2d:
    pCVar4 = FUN_004140eb();
LAB_0041544e:
    uVar13 = (*pcVar1)(pCVar4,pCVar9);
LAB_004154dc:
    *(uint32_t *)(unaff_EBP + -0x10) = uVar13;
    goto switchD_00415212_caseD_26;
  case 0x2e:
    iVar3 = (*pcVar1)(*(undefined2 *)(unaff_EBP + 0xc),*(uint *)(unaff_EBP + 0xc) >> 0x10,
                      (uint)pCVar9 & 0xffff,(uint)pCVar9 >> 0x10);
    *(int *)(unaff_EBP + -0x10) = iVar3;
    goto LAB_004154bd;
  case 0x30:
    pCVar4 = (CWnd *)(*(uint *)(unaff_EBP + 0xc) >> 0x10);
    pCVar11 = pCVar9;
LAB_00415475:
    pCVar9 = (CWnd *)(uint)*(ushort *)(unaff_EBP + 0xc);
    goto LAB_0041548b;
  case 0x31:
    pCVar4 = (CWnd *)(int)sVar12;
    pCVar11 = (CWnd *)(int)sVar2;
LAB_00415487:
    pCVar9 = *(CWnd **)(unaff_EBP + 0xc);
LAB_0041548b:
    (*pcVar1)(pCVar9,pCVar4,pCVar11);
    goto switchD_00415212_caseD_26;
  }
  (*pcVar1)(pCVar9);
switchD_00415212_caseD_26:
  if (*(uint32_t **)(unaff_EBP + 0x14) != (uint32_t *)0x0) {
    **(uint32_t **)(unaff_EBP + 0x14) = *(uint32_t *)(unaff_EBP + -0x10);
  }
  uVar13 = 1;
LAB_004151c9:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar13;
}



CCmdUI * __fastcall FUN_004155b7(CCmdUI *param_1)

{
  CCmdUI::CCmdUI(param_1);
  *(uint ***)param_1 = &PTR_LAB_0041f36c;
  *(uint32_t *)(param_1 + 0x28) = 1;
  return param_1;
}



uint32_t __thiscall FUN_004155e1(void *this,uint param_1,int param_2)

{
  uint32_t uVar1;
  int iVar2;
  uint uVar3;
  CCmdUI local_30 [4];
  uint local_2c;
  int local_8;
  
  uVar3 = param_1 & 0xffff;
  param_1 = param_1 >> 0x10;
  if (param_2 == 0) {
    if (uVar3 == 0) {
      return 0;
    }
    FUN_004155b7(local_30);
    local_2c = uVar3;
    (**(code **)(*(int *)this + 0x14))(uVar3,0xffffffff,local_30,0);
    if (local_8 != 0) {
      param_1 = 0;
LAB_00415625:
      uVar1 = (**(code **)(*(int *)this + 0x14))(uVar3,param_1,0,0);
      return uVar1;
    }
  }
  else {
    iVar2 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
    if ((*(int *)(iVar2 + 0xb8) != *(int *)((int)this + 0x1c)) &&
       (iVar2 = FUN_00415dc1(), iVar2 == 0)) {
      if (uVar3 == 0) {
        return 0;
      }
      goto LAB_00415625;
    }
  }
  return 1;
}



uint32_t __thiscall
FUN_0041566d(void *this,uint32_t param_1,uint32_t *param_2,uint32_t param_3)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  uint32_t local_10;
  uint32_t *local_c;
  uint local_8;
  
  local_8 = GetDlgCtrlID((HWND)*param_2);
  local_8 = local_8 & 0xffff;
  uVar1 = param_2[2];
  iVar2 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
  if ((*(int *)(iVar2 + 0xb8) != *(int *)((int)this + 0x1c)) && (iVar2 = FUN_00415dc1(), iVar2 == 0)
     ) {
    local_10 = param_3;
    local_c = param_2;
    uVar3 = (**(code **)(*(int *)this + 0x14))(local_8,uVar1 & 0xffff | 0x4e0000,&local_10,0);
    return uVar3;
  }
  return 1;
}



CWnd * __fastcall FUN_004156e7(int param_1)

{
  int iVar1;
  CWnd *pCVar2;
  HWND hWnd;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (iVar1 != 0) {
    hWnd = *(HWND *)(param_1 + 0x1c);
    while( true ) {
      GetParent(hWnd);
      pCVar2 = FUN_004140eb();
      if (pCVar2 == (CWnd *)0x0) break;
      iVar1 = (**(code **)(*(int *)pCVar2 + 0xb8))();
      if (iVar1 != 0) {
        return pCVar2;
      }
      hWnd = *(HWND *)(pCVar2 + 0x1c);
    }
  }
  return (CWnd *)0x0;
}


void __fastcall FUN_00415770(int param_1)

{
  int iVar1;
  HWND__ *pHVar2;
  
  if (param_1 == 0) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
  }
  if (iVar1 != 0) {
    pHVar2 = *(HWND__ **)(param_1 + 0x1c);
    do {
      pHVar2 = AfxGetParentOwner(pHVar2);
    } while (pHVar2 != (HWND__ *)0x0);
    FUN_004140eb();
    return;
  }
  return;
}



CWnd * __fastcall FUN_0041579c(CWnd *param_1)

{
  CWnd *pCVar1;
  int iVar2;
  CWnd *pCVar3;
  
  if (param_1 == (CWnd *)0x0) {
    iVar2 = 0;
  }
  else {
    iVar2 = *(int *)(param_1 + 0x1c);
  }
  if (iVar2 != 0) {
    iVar2 = (**(code **)(*(int *)param_1 + 0xb8))();
    pCVar3 = param_1;
    if (iVar2 == 0) {
      param_1 = FUN_004156e7((int)param_1);
      pCVar3 = param_1;
    }
    while (pCVar1 = pCVar3, pCVar1 != (CWnd *)0x0) {
      pCVar3 = FUN_004156e7((int)pCVar1);
      param_1 = pCVar1;
    }
    return param_1;
  }
  return (CWnd *)0x0;
}



void FUN_004157e0(int param_1,uint32_t *param_2)

{
  HWND hWnd;
  int iVar1;
  uint uVar2;
  HWND pHVar3;
  HWND hWnd_00;
  BOOL BVar4;
  HWND hWnd_01;
  bool bVar5;
  
  if (param_1 == 0) {
    hWnd_01 = (HWND)0x0;
  }
  else {
    hWnd_01 = *(HWND *)(param_1 + 0x1c);
  }
  bVar5 = false;
  if (hWnd_01 == (HWND)0x0) {
    iVar1 = FUN_00402a20();
    if (iVar1 != 0) {
      hWnd_01 = *(HWND *)(iVar1 + 0x1c);
    }
    bVar5 = hWnd_01 == (HWND)0x0;
  }
  pHVar3 = hWnd_01;
  hWnd_00 = hWnd_01;
  if (!bVar5) {
    do {
      uVar2 = GetWindowLongA(hWnd_01,-0x10);
      pHVar3 = hWnd_01;
      hWnd_00 = hWnd_01;
      if ((uVar2 & 0x40000000) == 0) break;
      hWnd_01 = GetParent(hWnd_01);
      pHVar3 = hWnd_01;
      hWnd_00 = hWnd_01;
    } while (hWnd_01 != (HWND)0x0);
  }
  while (hWnd = pHVar3, hWnd != (HWND)0x0) {
    pHVar3 = GetParent(hWnd);
    hWnd_01 = hWnd;
  }
  if ((param_1 == 0) && (hWnd_00 != (HWND)0x0)) {
    hWnd_00 = GetLastActivePopup(hWnd_00);
  }
  if (param_2 != (uint32_t *)0x0) {
    if (((hWnd_01 == (HWND)0x0) || (BVar4 = IsWindowEnabled(hWnd_01), BVar4 == 0)) ||
       (hWnd_01 == hWnd_00)) {
      *param_2 = 0;
    }
    else {
      *param_2 = hWnd_01;
      EnableWindow(hWnd_01,0);
    }
  }
  FUN_004140eb();
  return;
}



CWnd * FUN_00415880(HWND param_1,int param_2,int param_3)

{
  HWND pHVar1;
  HWND pHVar2;
  CWnd *pCVar3;
  
  pHVar1 = GetDlgItem(param_1,param_2);
  if (pHVar1 != (HWND)0x0) {
    pHVar2 = GetTopWindow(pHVar1);
    if ((pHVar2 != (HWND)0x0) &&
       (pCVar3 = FUN_00415880(pHVar1,param_2,param_3), pCVar3 != (CWnd *)0x0)) {
      return pCVar3;
    }
    if (param_3 == 0) {
      pCVar3 = FUN_004140eb();
      return pCVar3;
    }
    pCVar3 = (CWnd *)FUN_00414113((uint)pHVar1);
    if (pCVar3 != (CWnd *)0x0) {
      return pCVar3;
    }
  }
  pHVar1 = GetTopWindow(param_1);
  while( true ) {
    if (pHVar1 == (HWND)0x0) {
      return (CWnd *)0x0;
    }
    pCVar3 = FUN_00415880(pHVar1,param_2,param_3);
    if (pCVar3 != (CWnd *)0x0) break;
    pHVar1 = GetWindow(pHVar1,2);
  }
  return pCVar3;
}



void FUN_004158f9(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4,int param_5,int param_6)

{
  HWND hWnd;
  int iVar1;
  HWND pHVar2;
  
  for (hWnd = GetTopWindow(param_1); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)) {
    if (param_6 == 0) {
      SendMessageA(hWnd,param_2,param_3,param_4);
    }
    else {
      iVar1 = FUN_00414113((uint)hWnd);
      if (iVar1 != 0) {
        FUN_00413e7f();
      }
    }
    if (param_5 != 0) {
      pHVar2 = GetTopWindow(hWnd);
      if (pHVar2 != (HWND)0x0) {
        FUN_004158f9(hWnd,param_2,param_3,param_4,param_5,param_6);
      }
    }
  }
  return;
}



void __thiscall FUN_0041597b(void *this,int param_1,int param_2,BOOL param_3)

{
  int iVar1;
  HWND hWnd;
  
  iVar1 = (**(code **)(*(int *)this + 0x70))(param_1);
  if (iVar1 == 0) {
    hWnd = *(HWND *)((int)this + 0x1c);
  }
  else {
    param_1 = 2;
    hWnd = *(HWND *)(iVar1 + 0x1c);
  }
  SetScrollPos(hWnd,param_1,param_2,param_3);
  return;
}



void __thiscall FUN_004159ab(void *this,uint32_t param_1)

{
  int iVar1;
  int unaff_retaddr;
  HWND hWnd;
  
  iVar1 = (**(code **)(*(int *)this + 0x70))(param_1);
  if (iVar1 == 0) {
    hWnd = *(HWND *)((int)this + 0x1c);
  }
  else {
    unaff_retaddr = 2;
    hWnd = *(HWND *)(iVar1 + 0x1c);
  }
  GetScrollPos(hWnd,unaff_retaddr);
  return;
}



void __thiscall FUN_004159d3(void *this,int param_1,int param_2,int param_3,BOOL param_4)

{
  int iVar1;
  HWND hWnd;
  
  iVar1 = (**(code **)(*(int *)this + 0x70))(param_1);
  if (iVar1 == 0) {
    hWnd = *(HWND *)((int)this + 0x1c);
  }
  else {
    param_1 = 2;
    hWnd = *(HWND *)(iVar1 + 0x1c);
  }
  SetScrollRange(hWnd,param_1,param_2,param_3,param_4);
  return;
}



void __thiscall FUN_00415a06(void *this,int param_1,uint32_t param_2)

{
  void *this_00;
  int wBar;
  
  wBar = param_1;
  if (param_1 == 3) {
    FUN_00415a06(this,0,param_2);
    wBar = 1;
  }
  this_00 = (void *)(**(code **)(*(int *)this + 0x70))(wBar);
  if (this_00 == (void *)0x0) {
    ShowScrollBar(*(HWND *)((int)this + 0x1c),wBar,param_1);
  }
  else {
    FUN_00416bbd(this_00,param_1);
  }
  return;
}



uint32_t __thiscall FUN_00415a49(void *this,int param_1,LPCSCROLLINFO param_2,BOOL param_3)

{
  uint32_t uVar1;
  int iVar2;
  HWND hwnd;
  
  if (DAT_0042abec < 0x333) {
    uVar1 = 0;
  }
  else {
    hwnd = *(HWND *)((int)this + 0x1c);
    if (param_1 != 2) {
      iVar2 = (**(code **)(*(int *)this + 0x70))(param_1);
      if (iVar2 != 0) {
        hwnd = *(HWND *)(iVar2 + 0x1c);
        param_1 = 2;
      }
    }
    param_2->cbSize = 0x1c;
    SetScrollInfo(hwnd,param_1,param_2,param_3);
    uVar1 = 1;
  }
  return uVar1;
}



void __thiscall FUN_00415a96(void *this,int param_1,int param_2,RECT *param_3,RECT *param_4)

{
  BOOL BVar1;
  HWND hWnd;
  uint8_t local_14 [16];
  
  BVar1 = IsWindowVisible(*(HWND *)((int)this + 0x1c));
  if (((BVar1 == 0) && (param_3 == (RECT *)0x0)) && (param_4 == (RECT *)0x0)) {
    for (hWnd = GetWindow(*(HWND *)((int)this + 0x1c),5); hWnd != (HWND)0x0;
        hWnd = GetWindow(hWnd,2)) {
      GetWindowRect(hWnd,(LPRECT)local_14);
      ScreenToClient(*(HWND *)((int)this + 0x1c),(LPPOINT)local_14);
      ScreenToClient(*(HWND *)((int)this + 0x1c),(LPPOINT)(local_14 + 8));
      SetWindowPos(hWnd,(HWND)0x0,local_14._0_4_ + param_1,local_14._4_4_ + param_2,0,0,0x15);
    }
  }
  else {
    ScrollWindow(*(HWND *)((int)this + 0x1c),param_1,param_2,param_3,param_4);
  }
  if ((*(int **)((int)this + 0x34) != (int *)0x0) && (param_3 == (RECT *)0x0)) {
    (**(code **)(**(int **)((int)this + 0x34) + 0x60))(param_1,param_2);
  }
  return;
}



void __thiscall
FUN_00415b53(void *this,uint param_1,uint param_2,uint param_3,int param_4,LPRECT param_5,
            int *param_6,int param_7)

{
  HWND pHVar1;
  HWND hWnd;
  uint uVar2;
  int iVar3;
  CWnd *pCVar4;
  HDWP local_28;
  tagRECT local_24;
  LONG local_14;
  LONG local_10;
  int local_c;
  HWND local_8;
  
  local_8 = (HWND)0x0;
  local_c = param_7;
  local_10 = 0;
  local_14 = 0;
  if (param_6 == (int *)0x0) {
    GetClientRect(*(HWND *)((int)this + 0x1c),&local_24);
  }
  else {
    local_24.left = *param_6;
    local_24.top = param_6[1];
    local_24.right = param_6[2];
    local_24.bottom = param_6[3];
  }
  if (param_4 == 1) {
    local_28 = (HDWP)0x0;
  }
  else {
    local_28 = BeginDeferWindowPos(8);
  }
  for (hWnd = GetTopWindow(*(HWND *)((int)this + 0x1c)); hWnd != (HWND)0x0; hWnd = GetWindow(hWnd,2)
      ) {
    uVar2 = GetDlgCtrlID(hWnd);
    uVar2 = uVar2 & 0xffff;
    iVar3 = FUN_00414113((uint)hWnd);
    pHVar1 = hWnd;
    if ((((uVar2 != param_3) && (pHVar1 = local_8, param_1 <= uVar2)) && (uVar2 <= param_2)) &&
       (iVar3 != 0)) {
      SendMessageA(hWnd,0x361,0,(LPARAM)&local_28);
      pHVar1 = local_8;
    }
    local_8 = pHVar1;
  }
  if (param_4 == 1) {
    if (param_7 == 0) {
      param_5->right = local_14;
      param_5->top = 0;
      param_5->left = 0;
      param_5->bottom = local_10;
    }
    else {
      CopyRect(param_5,&local_24);
    }
  }
  else {
    if ((param_3 != 0) && (local_8 != (HWND)0x0)) {
      pCVar4 = FUN_004140eb();
      if (param_4 == 2) {
        local_24.left = local_24.left + param_5->left;
        local_24.top = local_24.top + param_5->top;
        local_24.right = local_24.right - param_5->right;
        local_24.bottom = local_24.bottom - param_5->bottom;
      }
      (**(code **)(*(int *)pCVar4 + 0x68))(&local_24,0);
      FUN_00415c8d((int *)&local_28,local_8,&local_24);
    }
    if (local_28 != (HDWP)0x0) {
      EndDeferWindowPos(local_28);
    }
  }
  return;
}



void FUN_00415c8d(int *param_1,HWND param_2,RECT *param_3)

{
  int Y;
  int X;
  HWND hWnd;
  BOOL BVar1;
  HDWP pvVar2;
  uint8_t local_14 [16];
  
  hWnd = GetParent(param_2);
  if ((param_1 == (int *)0x0) || (*param_1 != 0)) {
    GetWindowRect(param_2,(LPRECT)local_14);
    ScreenToClient(hWnd,(LPPOINT)local_14);
    ScreenToClient(hWnd,(LPPOINT)(local_14 + 8));
    BVar1 = EqualRect((RECT *)local_14,param_3);
    if (BVar1 == 0) {
      Y = param_3->top;
      X = param_3->left;
      if (param_1 == (int *)0x0) {
        SetWindowPos(param_2,(HWND)0x0,X,Y,param_3->right - X,param_3->bottom - Y,0x14);
      }
      else {
        pvVar2 = DeferWindowPos((HDWP)*param_1,param_2,(HWND)0x0,X,Y,param_3->right - X,
                                param_3->bottom - Y,0x14);
        *param_1 = (int)pvVar2;
      }
    }
  }
  return;
}



void __thiscall FUN_00415d27(void *this,LPRECT param_1,int param_2)

{
  uint dwExStyle;
  DWORD dwStyle;
  BOOL bMenu;
  
  dwExStyle = FUN_00416ab7((int)this);
  if (param_2 == 0) {
    dwExStyle = dwExStyle & 0xfffffdff;
  }
  bMenu = 0;
  dwStyle = FUN_00416a9d((int)this);
  AdjustWindowRectEx(param_1,dwStyle,bMenu,dwExStyle);
  return;
}



uint32_t FUN_00415d52(HWND param_1,uint32_t *param_2)

{
  int *piVar1;
  int iVar2;
  HWND hWnd;
  
  hWnd = (HWND)*param_2;
  while( true ) {
    if (hWnd == (HWND)0x0) {
      return 0;
    }
    piVar1 = (int *)FUN_00414113((uint)hWnd);
    if ((piVar1 != (int *)0x0) && (iVar2 = (**(code **)(*piVar1 + 0x98))(param_2), iVar2 != 0))
    break;
    if (hWnd == param_1) {
      return 0;
    }
    hWnd = GetParent(hWnd);
  }
  return 1;
}



void __thiscall FUN_00415d94(void *this,uint32_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
  (**(code **)(*(int *)this + 0xb0))
            (*(uint32_t *)(iVar1 + 0x38),*(uint32_t *)(iVar1 + 0x3c),
             *(uint32_t *)(iVar1 + 0x40),param_1);
  return;
}



uint32_t FUN_00415dc1(void)

{
  HWND hWnd;
  void *this;
  void *this_00;
  HWND pHVar1;
  int iVar2;
  uint32_t uVar3;
  int unaff_EBP;
  
  FUN_004037f0();
  this = (void *)FUN_0041407b();
  if (this != (void *)0x0) {
    hWnd = *(HWND *)(unaff_EBP + 8);
    this_00 = (void *)FUN_00411434(this,(uint)hWnd);
    if (this_00 != (void *)0x0) {
      uVar3 = FUN_00415d94(this_00,*(uint32_t *)(unaff_EBP + 0xc));
      goto LAB_00415e55;
    }
    pHVar1 = GetParent(hWnd);
    iVar2 = FUN_00411434(this,(uint)pHVar1);
    if ((iVar2 != 0) && (*(int *)(iVar2 + 0x34) != 0)) {
      iVar2 = FUN_00411434((void *)(*(int *)(iVar2 + 0x34) + 0x20),(uint)hWnd);
      if (iVar2 != 0) {
        FUN_00413de0((void *)(unaff_EBP + -0x48),hWnd);
        *(uint32_t *)(unaff_EBP + -4) = 0;
        *(int *)(unaff_EBP + -0x10) = iVar2;
        uVar3 = FUN_00415d94((void *)(unaff_EBP + -0x48),*(uint32_t *)(unaff_EBP + 0xc));
        *(uint32_t *)(unaff_EBP + -0x2c) = 0;
        *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
        CWnd::~CWnd((CWnd *)(unaff_EBP + -0x48));
        goto LAB_00415e55;
      }
    }
  }
  uVar3 = 0;
LAB_00415e55:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



uint __thiscall FUN_00415e65(void *this,uint param_1,int *param_2,int param_3,int *param_4)

{
  LRESULT LVar1;
  uint uVar2;
  
  if (*(int *)((int)this + 0x38) == 0) {
    uVar2 = FUN_00415ec0(this,param_1,param_2,param_3,param_4);
  }
  else {
    LVar1 = SendMessageA(*(HWND *)((int)this + 0x1c),param_1 + 0x2000,(WPARAM)param_2,param_3);
    if (((param_1 < 0x132) || (0x138 < param_1)) || (uVar2 = 0, LVar1 != 0)) {
      if (param_4 != (int *)0x0) {
        *param_4 = LVar1;
      }
      uVar2 = 1;
    }
  }
  return uVar2;
}



uint __thiscall FUN_00415ec0(void *this,uint param_1,int *param_2,int param_3,int *param_4)

{
  uint uVar1;
  int *local_c;
  int local_8;
  
  if (param_1 < 0x3a) {
    if ((param_1 == 0x39) || ((0x2a < param_1 && (param_1 < 0x30)))) {
LAB_00415fa0:
      uVar1 = FUN_00415045();
      return uVar1;
    }
  }
  else {
    if (param_1 == 0x4e) {
      local_c = param_4;
      local_8 = param_3;
      uVar1 = FUN_00411fab(this,(uint32_t *)0x0,*(uint *)(param_3 + 8) & 0xffff | 0xbc4e0000,
                           &local_c,(uint32_t *)0x0);
      return uVar1;
    }
    if (param_1 == 0x111) {
      uVar1 = FUN_00411fab(this,(uint32_t *)0x0,(uint)param_2 >> 0x10 | 0xbd110000,
                           (uint32_t *)0x0,(uint32_t *)0x0);
      if (uVar1 == 0) {
        return 0;
      }
      if (param_4 != (int *)0x0) {
        *param_4 = 1;
        return 1;
      }
      return 1;
    }
    if ((0x113 < param_1) && ((param_1 < 0x116 || (param_1 == 0x210)))) goto LAB_00415fa0;
  }
  if ((0x131 < param_1) && (param_1 < 0x139)) {
    local_8 = param_1 - 0x132;
    local_c = param_2;
    uVar1 = FUN_00415045();
    if (*param_4 != 0) {
      return uVar1;
    }
  }
  return 0;
}



void __fastcall FUN_00416005(int *param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  uint uVar3;
  uint8_t *puVar4;
  
  iVar1 = FUN_0041bf1f();
  iVar1 = *(int *)(iVar1 + 4);
  FUN_0041c6da();
  if (*(int **)(iVar1 + 0x1c) == param_1) {
    FUN_00416fd7(0x42ab98);
  }
  iVar1 = FUN_0041bf1f();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if (*(int **)(pCVar2 + 0x1c) == param_1) {
        puVar4 = &LAB_0041ba43;
        iVar1 = FUN_0041c6da();
        if (*(code **)(iVar1 + 0x1c) != (code *)0x0) {
          (**(code **)(iVar1 + 0x1c))(puVar4);
        }
      }
    }
  }
  uVar3 = FUN_00416a9d((int)param_1);
  if ((uVar3 & 0x40000000) == 0) {
    FUN_004158f9((HWND)param_1[7],0x15,0,0,1,1);
  }
  FUN_00414040(param_1);
  return;
}



void __fastcall FUN_0041608f(CWnd *param_1)

{
  int iVar1;
  CWinThread *pCVar2;
  uint8_t *puVar3;
  
  iVar1 = FUN_0041bf1f();
  if (*(char *)(iVar1 + 0x14) == '\0') {
    puVar3 = &LAB_0041ba43;
    iVar1 = FUN_0041c6da();
    pCVar2 = AfxGetThread();
    if (pCVar2 != (CWinThread *)0x0) {
      pCVar2 = AfxGetThread();
      if ((*(CWnd **)(pCVar2 + 0x1c) == param_1) && (*(code **)(iVar1 + 0x24) != (code *)0x0)) {
        (**(code **)(iVar1 + 0x24))(puVar3);
      }
    }
  }
  FUN_004183f9((HKEY)0x1);
  CWnd::OnDisplayChange(param_1,0,0);
  return;
}



void __thiscall FUN_004160e3(void *this,LPSTR param_1)

{
  CWinThread *pCVar1;
  int iVar2;
  uint uVar3;
  
  pCVar1 = AfxGetThread();
  if (pCVar1 != (CWinThread *)0x0) {
    pCVar1 = AfxGetThread();
    if (*(void **)(pCVar1 + 0x1c) == this) {
      iVar2 = FUN_0041bf1f();
      FUN_0041184d(*(void **)(iVar2 + 4),param_1);
    }
  }
  uVar3 = FUN_00416a9d((int)this);
  if ((uVar3 & 0x40000000) == 0) {
    iVar2 = FUN_0041400b();
    FUN_004158f9(*(HWND *)((int)this + 0x1c),*(UINT *)(iVar2 + 4),*(WPARAM *)(iVar2 + 8),
                 *(LPARAM *)(iVar2 + 0xc),1,1);
  }
  return;
}



uint32_t __fastcall FUN_00416138(int *param_1)

{
  SHORT SVar1;
  uint uVar2;
  int iVar3;
  uint32_t uVar4;
  
  uVar2 = FUN_00416a9d((int)param_1);
  if (((((uVar2 & 0x40000000) == 0) && (iVar3 = FUN_00402a20(), iVar3 != 0)) &&
      (SVar1 = GetKeyState(0x10), -1 < SVar1)) &&
     ((SVar1 = GetKeyState(0x11), -1 < SVar1 && (SVar1 = GetKeyState(0x12), -1 < SVar1)))) {
    SendMessageA(*(HWND *)(iVar3 + 0x1c),0x111,0xe146,0);
    return 1;
  }
  uVar4 = FUN_00414040(param_1);
  return uVar4;
}



uint32_t __thiscall FUN_004161e9(void *this,uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_00415dc1();
  if (iVar1 == 0) {
    param_2 = FUN_00414040(this);
  }
  return param_2;
}



void __thiscall FUN_00416213(void *this,uint32_t param_1,uint32_t param_2,void *param_3)

{
  int iVar1;
  
  if ((param_3 != (void *)0x0) && (iVar1 = FUN_00415d94(param_3,0), iVar1 != 0)) {
    return;
  }
  FUN_00414040(this);
  return;
}



void __fastcall FUN_00416234(int *param_1)

{
  BOOL BVar1;
  tagMSG local_20;
  
  while( true ) {
    BVar1 = PeekMessageA(&local_20,(HWND)0x0,0x121,0x121,1);
    if (BVar1 == 0) break;
    DispatchMessageA(&local_20);
  }
  FUN_00414040(param_1);
  return;
}



void * __thiscall FUN_0041627e(void *this,uint32_t param_1,void *param_2)

{
  int iVar1;
  
  iVar1 = FUN_00415d94(param_2,&param_2);
  if (iVar1 == 0) {
    param_2 = (void *)FUN_00414040(this);
  }
  return param_2;
}



void * __thiscall FUN_004162a5(void *this,int param_1,void *param_2,int param_3)

{
  void *pvVar1;
  int iVar2;
  int iVar3;
  HWND pHVar4;
  
  pvVar1 = param_2;
  iVar2 = FUN_00415d94(param_2,&param_2);
  if (iVar2 == 0) {
    iVar2 = FUN_0041c6da();
    pHVar4 = (HWND)0x0;
    if (pvVar1 != (void *)0x0) {
      pHVar4 = *(HWND *)((int)pvVar1 + 0x1c);
    }
    iVar3 = FUN_00416308(*(HDC *)(param_1 + 4),pHVar4,param_3,*(HANDLE *)(iVar2 + 4),
                         *(COLORREF *)(iVar2 + 8));
    if (iVar3 == 0) {
      param_2 = (void *)FUN_00414040(this);
    }
    else {
      param_2 = *(void **)(iVar2 + 4);
    }
  }
  return param_2;
}



uint32_t FUN_00416308(HDC param_1,HWND param_2,int param_3,HANDLE param_4,COLORREF param_5)

{
  bool bVar1;
  undefined3 extraout_var;
  uint32_t uVar2;
  uint8_t local_10 [4];
  COLORREF local_c;
  
  if ((((param_1 == (HDC)0x0) || (param_4 == (HANDLE)0x0)) || (param_3 == 1)) ||
     ((param_3 == 0 || (param_3 == 5)))) {
LAB_00416377:
    uVar2 = 0;
  }
  else {
    if (param_3 == 2) {
      bVar1 = FUN_0041819f(param_2,2);
      if (CONCAT31(extraout_var,bVar1) == 0) goto LAB_00416377;
    }
    GetObjectA(param_4,0xc,local_10);
    SetBkColor(param_1,local_c);
    if (param_5 == 0xffffffff) {
      param_5 = GetSysColor(8);
    }
    SetTextColor(param_1,param_5);
    uVar2 = 1;
  }
  return uVar2;
}



void FUN_00416385(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint8_t **)(unaff_EBP + -0x10) = &stack0xffffffd0;
  FUN_00416428((void *)(unaff_EBP + -0x2c),extraout_ECX,*(uint32_t *)(unaff_EBP + 8));
  iVar1 = FUN_0041bc33();
  *(uint32_t *)(unaff_EBP + 8) = 0;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  *(int *)(unaff_EBP + -0x14) = iVar1;
  *(uint32_t *)(unaff_EBP + -0x18) = *(uint32_t *)(iVar1 + 0xb8);
  *(int *)(iVar1 + 0xb8) = extraout_ECX[7];
  (**(code **)(*extraout_ECX + 0x8c))(unaff_EBP + -0x2c);
  *(uint32_t *)(unaff_EBP + 8) = 1;
  FUN_0041640b();
  return;
}



uint * Catch_004163e4(void)

{
  return &DAT_00416408;
}



uint * Catch_004163ea(void)

{
  int *piVar1;
  int unaff_EBP;
  
  piVar1 = *(int **)(unaff_EBP + -0x1c);
  (**(code **)(*piVar1 + 0x18))(0x30,0xf108);
  FUN_00416f4f(piVar1);
  return &DAT_00416408;
}



uint32_t FUN_0041640b(void)

{
  int unaff_EBP;
  int unaff_EDI;
  
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(uint32_t *)(unaff_EDI + 0xb8) = *(uint32_t *)(unaff_EBP + -0x18);
  return *(uint32_t *)(unaff_EBP + 8);
}



void __thiscall FUN_00416428(void *this,uint32_t param_1,uint32_t param_2)

{
  *(uint32_t *)((int)this + 8) = 0;
  *(uint32_t *)this = param_2;
  *(uint32_t *)((int)this + 4) = param_1;
  return;
}



void __thiscall FUN_0041643e(void *this,int param_1)

{
  HWND hWnd;
  HWND pHVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  tagRECT local_3c;
  tagRECT local_2c;
  tagRECT local_1c;
  void *local_c;
  uint local_8;
  
  local_c = this;
  local_8 = FUN_00416a9d((int)this);
  if (param_1 == 0) {
    if ((local_8 & 0x40000000) == 0) {
      hWnd = GetWindow(*(HWND *)((int)this + 0x1c),4);
    }
    else {
      hWnd = GetParent(*(HWND *)((int)this + 0x1c));
    }
    if ((hWnd != (HWND)0x0) && (pHVar1 = (HWND)SendMessageA(hWnd,0x36b,0,0), pHVar1 != (HWND)0x0)) {
      hWnd = pHVar1;
    }
  }
  else {
    hWnd = *(HWND *)(param_1 + 0x1c);
  }
  GetWindowRect(*(HWND *)((int)this + 0x1c),&local_3c);
  if ((local_8 & 0x40000000) == 0) {
    if ((hWnd != (HWND)0x0) &&
       ((uVar2 = GetWindowLongA(hWnd,-0x10), (uVar2 & 0x10000000) == 0 ||
        ((uVar2 & 0x20000000) != 0)))) {
      hWnd = (HWND)0x0;
    }
    SystemParametersInfoA(0x30,0,&local_1c,0);
    if (hWnd == (HWND)0x0) {
      local_2c.left = local_1c.left;
      local_2c.top = local_1c.top;
      local_2c.right = local_1c.right;
      local_2c.bottom = local_1c.bottom;
    }
    else {
      GetWindowRect(hWnd,&local_2c);
    }
  }
  else {
    pHVar1 = GetParent(*(HWND *)((int)this + 0x1c));
    GetClientRect(pHVar1,&local_1c);
    GetClientRect(hWnd,&local_2c);
    MapWindowPoints(hWnd,pHVar1,(LPPOINT)&local_2c,2);
  }
  iVar3 = (local_2c.left + local_2c.right) / 2 - (local_3c.right - local_3c.left) / 2;
  iVar4 = (local_2c.top + local_2c.bottom) / 2 - (local_3c.bottom - local_3c.top) / 2;
  if ((local_1c.left <= iVar3) &&
     (local_1c.left = iVar3, local_1c.right < iVar3 + (local_3c.right - local_3c.left))) {
    local_1c.left = (local_3c.left - local_3c.right) + local_1c.right;
  }
  if ((local_1c.top <= iVar4) &&
     (local_1c.top = iVar4, local_1c.bottom < (local_3c.bottom - local_3c.top) + iVar4)) {
    local_1c.top = (local_3c.top - local_3c.bottom) + local_1c.bottom;
  }
  FUN_00416b2c(local_c,0,local_1c.left,local_1c.top,-1,-1,0x15);
  return;
}



ushort * __thiscall FUN_004165b8(void *this,LPCSTR param_1)

{
  HMODULE hModule;
  int iVar1;
  HRSRC hResInfo;
  HGLOBAL hResData;
  ushort *puVar2;
  
  puVar2 = (ushort *)0x0;
  if (param_1 != (LPCSTR)0x0) {
    iVar1 = FUN_0041bf1f();
    hModule = *(HMODULE *)(iVar1 + 0xc);
    hResInfo = FindResourceA(hModule,param_1,(LPCSTR)0xf0);
    if (hResInfo != (HRSRC)0x0) {
      hResData = LoadResource(hModule,hResInfo);
      if (hResData == (HGLOBAL)0x0) {
        return (ushort *)0x0;
      }
      puVar2 = LockResource(hResData);
    }
  }
  puVar2 = FUN_00416608(this,puVar2);
  return puVar2;
}



ushort * __thiscall FUN_00416608(void *this,ushort *param_1)

{
  int iVar1;
  ushort *puVar2;
  ushort uVar3;
  LRESULT LVar4;
  ushort *puVar5;
  
  puVar5 = (ushort *)0x1;
  puVar2 = param_1;
  for (; (puVar2 != (ushort *)0x0 && (*param_1 != 0));
      param_1 = (ushort *)((int)(param_1 + 4) + iVar1)) {
    uVar3 = param_1[1];
    iVar1 = *(int *)(param_1 + 2);
    if (uVar3 == 0x401) {
      uVar3 = 0x180;
    }
    else if (uVar3 == 0x403) {
      uVar3 = 0x143;
    }
    if (((uVar3 == 0x180) || (uVar3 == 0x143)) &&
       (LVar4 = SendDlgItemMessageA(*(HWND *)((int)this + 0x1c),(uint)*param_1,(uint)uVar3,0,
                                    (LPARAM)(param_1 + 4)), LVar4 == -1)) {
      puVar5 = (ushort *)0x0;
    }
    puVar2 = puVar5;
  }
  if (puVar5 != (ushort *)0x0) {
    FUN_004158f9(*(HWND *)((int)this + 0x1c),0x364,0,0,0,0);
  }
  return puVar5;
}



uint32_t __thiscall FUN_00416692(void *this,LPMSG param_1)

{
  uint uVar1;
  uint32_t uVar2;
  
  uVar1 = param_1->message;
  if (((uVar1 < 0x100) || (0x108 < uVar1)) && ((uVar1 < 0x200 || (0x209 < uVar1)))) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00416a6a(this,param_1);
  }
  return uVar2;
}



int __thiscall FUN_004166c2(void *this,byte param_1)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  HWND hWnd;
  CWinThread *pCVar4;
  BOOL BVar5;
  LRESULT LVar6;
  CWinThread *pCVar7;
  int iVar8;
  LPMSG lpMsg;
  int local_c;
  
  bVar1 = true;
  local_c = 0;
  if ((param_1 & 4) != 0) {
    uVar3 = FUN_00416a9d((int)this);
    bVar2 = true;
    if ((uVar3 & 0x10000000) == 0) goto LAB_004166f3;
  }
  bVar2 = false;
LAB_004166f3:
  hWnd = GetParent(*(HWND *)((int)this + 0x1c));
  *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) | 0x18;
  pCVar4 = AfxGetThread();
  lpMsg = (LPMSG)(pCVar4 + 0x30);
LAB_00416714:
  while ((!bVar1 || (BVar5 = PeekMessageA(lpMsg,(HWND)0x0,0,0,0), BVar5 != 0))) {
    do {
      pCVar7 = AfxGetThread();
      iVar8 = (**(code **)(*(int *)pCVar7 + 100))();
      if (iVar8 == 0) {
        AfxPostQuitMessage(0);
        return -1;
      }
      if ((bVar2) && ((*(int *)(pCVar4 + 0x34) == 0x118 || (*(int *)(pCVar4 + 0x34) == 0x104)))) {
        FUN_00416b7b(this,1);
        UpdateWindow(*(HWND *)((int)this + 0x1c));
        bVar2 = false;
      }
      iVar8 = (**(code **)(*(int *)this + 0x78))();
      if (iVar8 == 0) {
        *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xffffffe7;
        return *(int *)((int)this + 0x2c);
      }
      pCVar7 = AfxGetThread();
      iVar8 = (**(code **)(*(int *)pCVar7 + 0x6c))(lpMsg);
      if (iVar8 != 0) {
        bVar1 = true;
        local_c = 0;
      }
      BVar5 = PeekMessageA(lpMsg,(HWND)0x0,0,0,0);
    } while (BVar5 != 0);
  }
  if (bVar2) {
    FUN_00416b7b(this,1);
    UpdateWindow(*(HWND *)((int)this + 0x1c));
    bVar2 = false;
  }
  if ((((param_1 & 1) == 0) && (hWnd != (HWND)0x0)) && (local_c == 0)) {
    SendMessageA(hWnd,0x121,0,*(LPARAM *)((int)this + 0x1c));
  }
  if ((param_1 & 2) == 0) goto code_r0x0041676e;
  goto LAB_00416786;
code_r0x0041676e:
  iVar8 = local_c + 1;
  LVar6 = SendMessageA(*(HWND *)((int)this + 0x1c),0x36a,0,local_c);
  local_c = iVar8;
  if (LVar6 == 0) {
LAB_00416786:
    bVar1 = false;
  }
  goto LAB_00416714;
}



int FUN_0041684c(byte param_1)

{
  int iVar1;
  int iVar2;
  uint local_2c;
  code *local_28;
  uint32_t local_1c;
  uint32_t local_14;
  uint32_t local_10;
  char *local_8;
  
  iVar2 = 0;
  _memset(&local_2c,0,0x28);
  local_28 = DefWindowProcA_exref;
  iVar1 = FUN_0041bf1f();
  local_1c = *(uint32_t *)(iVar1 + 8);
  local_14 = DAT_0042abd8;
  iVar1 = FUN_0041bf1f();
  if ((param_1 & 1) == 0) {
    if ((param_1 & 0x20) == 0) {
      if ((param_1 & 2) == 0) {
        if ((param_1 & 4) == 0) {
          if ((param_1 & 8) == 0) {
            if ((param_1 & 0x10) != 0) {
              InitCommonControls();
              *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 0x10;
              iVar2 = 1;
            }
          }
          else {
            local_2c = 0xb;
            local_10 = 6;
            iVar2 = AfxRegisterWithIcon((int)&local_2c,"AfxFrameOrView42s",0x7a02);
            if (iVar2 != 0) {
              *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 8;
            }
          }
        }
        else {
          local_10 = 0;
          local_2c = 8;
          iVar2 = AfxRegisterWithIcon((int)&local_2c,"AfxMDIFrame42s",0x7a01);
          if (iVar2 != 0) {
            *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 4;
          }
        }
      }
      else {
        local_2c = 0;
        local_8 = "AfxControlBar42s";
        local_10 = 0x10;
        iVar2 = FUN_00414d40();
        if (iVar2 != 0) {
          *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 2;
        }
      }
    }
    else {
      local_2c = local_2c | 0x8b;
      local_8 = "AfxOleControl42s";
      iVar2 = FUN_00414d40();
      if (iVar2 != 0) {
        *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 0x20;
      }
    }
  }
  else {
    local_2c = 0xb;
    local_8 = "AfxWnd42s";
    iVar2 = FUN_00414d40();
    if (iVar2 != 0) {
      *(byte *)(iVar1 + 0x18) = *(byte *)(iVar1 + 0x18) | 1;
    }
  }
  return iVar2;
}


uint32_t __fastcall FUN_004169c7(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x90);
  if (((iVar1 != 0) && (iVar1 != 0xe002)) && (iVar1 != 0xe001)) {
    return 1;
  }
  return 0;
}



uint32_t __thiscall FUN_004169e6(void *this,HWND param_1)

{
  bool bVar1;
  undefined3 extraout_var;
  int *piVar2;
  uint *dwNewLong;
  LONG LVar3;
  uint32_t uVar4;
  
  bVar1 = FUN_0041412f(this,(uint)param_1);
  uVar4 = 0;
  if (CONCAT31(extraout_var,bVar1) != 0) {
    (**(code **)(*(int *)this + 0x58))();
    piVar2 = (int *)(**(code **)(*(int *)this + 0x88))();
    dwNewLong = FUN_004141c5();
    LVar3 = SetWindowLongA(param_1,-4,(LONG)dwNewLong);
    if (*piVar2 == 0) {
      *piVar2 = LVar3;
    }
    uVar4 = 1;
  }
  return uVar4;
}



void __thiscall FUN_00416a40(void *this,int param_1)

{
  if (*(int **)((int)this + 0x34) == (int *)0x0) {
    GetDlgItem(*(HWND *)((int)this + 0x1c),param_1);
    FUN_004140eb();
  }
  else {
    (**(code **)(**(int **)((int)this + 0x34) + 0x78))(param_1);
  }
  return;
}



void __thiscall FUN_00416a6a(void *this,LPMSG param_1)

{
  int iVar1;
  
  if ((*(byte *)((int)this + 0x25) & 1) == 0) {
    IsDialogMessageA(*(HWND *)((int)this + 0x1c),param_1);
  }
  else {
    iVar1 = FUN_0041bf1f();
    (**(code **)(**(int **)(iVar1 + 0x1038) + 0x24))(this,param_1);
  }
  return;
}



void __fastcall FUN_00416a9d(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowLongA(*(HWND *)(param_1 + 0x1c),-0x10);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00416ab4. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 0x38) + 0x78))();
  return;
}



void __fastcall FUN_00416ab7(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    GetWindowLongA(*(HWND *)(param_1 + 0x1c),-0x14);
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00416ace. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 0x38) + 0x7c))();
  return;
}



void __thiscall FUN_00416ad1(void *this,uint param_1,uint param_2,uint param_3)

{
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    FUN_00413e65(*(HWND *)((int)this + 0x1c),param_1,param_2,param_3);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0x84))(param_1,param_2,param_3);
  }
  return;
}



void __thiscall FUN_00416b05(void *this,LPCSTR param_1)

{
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    SetWindowTextA(*(HWND *)((int)this + 0x1c),param_1);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0x88))(param_1);
  }
  return;
}



void __thiscall
FUN_00416b2c(void *this,int param_1,int param_2,int param_3,int param_4,int param_5,UINT param_6)

{
  HWND hWndInsertAfter;
  
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    hWndInsertAfter = (HWND)0x0;
    if (param_1 != 0) {
      hWndInsertAfter = *(HWND *)(param_1 + 0x1c);
    }
    SetWindowPos(*(HWND *)((int)this + 0x1c),hWndInsertAfter,param_2,param_3,param_4,param_5,param_6
                );
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0xa4))
              (param_1,param_2,param_3,param_4,param_5,param_6);
  }
  return;
}



void __thiscall FUN_00416b7b(void *this,int param_1)

{
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    ShowWindow(*(HWND *)((int)this + 0x1c),param_1);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0xa8))(param_1);
  }
  return;
}



void __fastcall FUN_00416ba2(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    IsWindowEnabled(*(HWND *)(param_1 + 0x1c));
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00416bb7. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 0x38) + 0xac))();
  return;
}


void __thiscall FUN_00416bbd(void *this,BOOL param_1)

{
  if (*(int **)((int)this + 0x38) == (int *)0x0) {
    EnableWindow(*(HWND *)((int)this + 0x1c),param_1);
  }
  else {
    (**(code **)(**(int **)((int)this + 0x38) + 0xb0))(param_1);
  }
  return;
}

void __fastcall FUN_00416be4(int param_1)

{
  if (*(int **)(param_1 + 0x38) == (int *)0x0) {
    SetFocus(*(HWND *)(param_1 + 0x1c));
    FUN_004140eb();
    return;
  }
                    // WARNING: Could not recover jumptable at 0x00416bff. Too many branches
                    // WARNING: Treating indirect jump as call
  (**(code **)(**(int **)(param_1 + 0x38) + 0xb4))();
  return;
}



void __thiscall FUN_00416c35(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  if ((((this != (void *)0x0) && (*(int *)((int)this + 0x38) == 0)) && (param_1 != 0)) &&
     (*(int *)(param_1 + 0x34) != 0)) {
    iVar2 = FUN_00411434((void *)(*(int *)(param_1 + 0x34) + 0x20),*(uint *)((int)this + 0x1c));
    if (iVar2 != 0) {
      iVar1 = *(int *)(iVar2 + 0x24);
      if ((iVar1 != 0) && (*(int *)(iVar1 + 0x38) == iVar2)) {
        *(uint32_t *)(iVar1 + 0x38) = 0;
      }
      *(int *)((int)this + 0x38) = iVar2;
      *(void **)(iVar2 + 0x24) = this;
    }
  }
  return;
}



bool FUN_00416c7a(UINT param_1)

{
  int iVar1;
  LPSTR pCVar2;
  int iVar3;
  int iVar4;
  CHAR local_108 [256];
  void *local_8;
  
  iVar1 = FUN_00416cfe(param_1,local_108,0x100);
  if (0x100U - iVar1 < 3) {
    iVar3 = 0x100;
    do {
      iVar4 = iVar3 + 0x100;
      iVar1 = iVar4;
      pCVar2 = (LPSTR)FUN_004129da(local_8,iVar3 + 0xff);
      iVar1 = FUN_00416cfe(param_1,pCVar2,iVar1);
      iVar3 = iVar4;
    } while (iVar4 - iVar1 < 3);
    FUN_00412a29(local_8,-1);
  }
  else {
    FUN_004127af(local_8,local_108);
  }
  return 0 < iVar1;
}



void FUN_00416cfe(UINT param_1,LPSTR param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  iVar1 = LoadStringA(*(HINSTANCE *)(iVar1 + 0xc),param_1,param_2,param_3);
  if (iVar1 == 0) {
    *param_2 = '\0';
  }
  return;
}



uint32_t FUN_00416d25(int *param_1,byte *param_2,int param_3,char param_4)

{
  byte *pbVar1;
  uint uVar2;
  uint32_t *puVar3;
  uint32_t uVar4;
  
  if (param_2 == (byte *)0x0) {
LAB_00416d99:
    uVar4 = 0;
  }
  else {
    if (param_3 != 0) {
      do {
        param_3 = param_3 + -1;
        pbVar1 = FUN_00403f80(param_2,(int)param_4);
        if (pbVar1 == (byte *)0x0) {
          FUN_004125f2(param_1);
          goto LAB_00416d99;
        }
        param_2 = pbVar1 + 1;
      } while (param_3 != 0);
    }
    pbVar1 = FUN_00403f80(param_2,(int)param_4);
    if (pbVar1 == (byte *)0x0) {
      uVar2 = lstrlenA((LPCSTR)param_2);
    }
    else {
      uVar2 = (int)pbVar1 - (int)param_2;
    }
    puVar3 = (uint32_t *)FUN_00412a51(param_1,uVar2);
    FUN_00403c20(puVar3,(uint32_t *)param_2,uVar2);
    uVar4 = 1;
  }
  return uVar4;
}



void FUN_00416d9d(void)

{
  int iVar1;
  
  iVar1 = FUN_00416db1();
  if (iVar1 != 0) {
    FUN_004172a1(iVar1);
    return;
  }
  return;
}



uint32_t FUN_00416db1(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  int unaff_EBP;
  
  FUN_004037f0();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x18) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    uVar2 = FUN_004124bb(&LAB_004183a7);
    iVar3 = FUN_004124cf(0x44);
    *(int *)(unaff_EBP + 8) = iVar3;
    *(uint32_t *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = FUN_0041716a();
    }
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    *(void **)(pAVar1 + 0x18) = pvVar4;
    FUN_004124bb(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(pAVar1 + 0x18);
}



void FUN_00416e21(void)

{
  FUN_00416db1();
  FUN_004171c6();
  return;
}



uint32_t FUN_00416e37(uint param_1)

{
  void *this;
  uint32_t uVar1;
  
  this = (void *)FUN_00416db1();
  uVar1 = 0;
  if (this != (void *)0x0) {
    uVar1 = FUN_00411434(this,param_1);
  }
  return uVar1;
}



int __fastcall FUN_00416e53(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    this = (void *)FUN_00416db1();
    if (this != (void *)0x0) {
      FUN_004114b7(this,*(uint *)(param_1 + 4));
    }
  }
  *(uint32_t *)(param_1 + 4) = 0;
  return iVar1;
}



BOOL __fastcall FUN_00416e7d(int param_1)

{
  HMENU hMenu;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  hMenu = (HMENU)FUN_00416e53(param_1);
  BVar1 = DestroyMenu(hMenu);
  return BVar1;
}



void __thiscall FUN_00416e9c(void *this,int param_1)

{
  void *this_00;
  
  this_00 = (void *)(*(code *)**(uint32_t **)this)();
  FUN_00416f14(this_00,param_1);
  return;
}



void * __cdecl FUN_00416eae(int param_1,void *param_2)

{
  int iVar1;
  
  if (param_2 != (void *)0x0) {
    iVar1 = FUN_00416e9c(param_2,param_1);
    if (iVar1 != 0) {
      return param_2;
    }
  }
  return (void *)0x0;
}



uint32_t FUN_00416ece(void)

{
  int iVar1;
  uint32_t uVar2;
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  uVar2 = 0;
  iVar1 = *(int *)(extraout_ECX + 0xc);
  *(uint8_t **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  if (iVar1 != 0) {
    *(uint32_t *)(unaff_EBP + -0x14) = 0;
    *(uint32_t *)(unaff_EBP + -4) = 0;
    uVar2 = (**(code **)(extraout_ECX + 0xc))();
    *(uint32_t *)(unaff_EBP + -0x14) = uVar2;
    uVar2 = *(uint32_t *)(unaff_EBP + -0x14);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



uint32_t Catch_00416f06(void)

{
  int unaff_EBP;
  
  FUN_00416f4f(*(int **)(unaff_EBP + -0x18));
  return 0x416ef4;
}



uint32_t __thiscall FUN_00416f14(void *this,int param_1)

{
  while( true ) {
    if (this == (void *)0x0) {
      return 0;
    }
    if (this == (void *)param_1) break;
    this = *(void **)((int)this + 0x10);
  }
  return 1;
}



void __fastcall FUN_00416f2d(uint32_t *param_1)

{
  *param_1 = &PTR_LAB_0041fa7c;
  param_1[1] = 1;
  return;
}



void __thiscall FUN_00416f3d(void *this,uint32_t param_1)

{
  *(uint ***)this = &PTR_LAB_0041fa7c;
  *(uint32_t *)((int)this + 4) = param_1;
  return;
}



void __fastcall FUN_00416f4f(int *param_1)

{
  if ((0 < param_1[1]) && (param_1 != (int *)0x0)) {
    (**(code **)(*param_1 + 4))(1);
  }
  return;
}



void __thiscall FUN_00416f82(void *this,uint32_t param_1)

{
  int iVar1;
  uint8_t local_208 [512];
  uint32_t local_8;
  
  iVar1 = (**(code **)(*(int *)this + 0x14))(local_208,0x200,&local_8);
  if (iVar1 == 0) {
    FUN_00419030();
  }
  else {
    FUN_0041900f(local_208,param_1,local_8);
  }
  return;
}



void __fastcall FUN_00416fd7(int param_1)

{
  DWORD DVar1;
  HBRUSH pHVar2;
  
  DVar1 = GetSysColor(0xf);
  *(DWORD *)(param_1 + 0x28) = DVar1;
  DVar1 = GetSysColor(0x10);
  *(DWORD *)(param_1 + 0x2c) = DVar1;
  DVar1 = GetSysColor(0x14);
  *(DWORD *)(param_1 + 0x30) = DVar1;
  DVar1 = GetSysColor(0x12);
  *(DWORD *)(param_1 + 0x34) = DVar1;
  DVar1 = GetSysColor(6);
  *(DWORD *)(param_1 + 0x38) = DVar1;
  pHVar2 = GetSysColorBrush(0xf);
  *(HBRUSH *)(param_1 + 0x24) = pHVar2;
  pHVar2 = GetSysColorBrush(6);
  *(HBRUSH *)(param_1 + 0x20) = pHVar2;
  return;
}



void __fastcall FUN_0041701b(int param_1)

{
  int iVar1;
  HDC hdc;
  
  iVar1 = GetSystemMetrics(0xb);
  *(int *)(param_1 + 8) = iVar1;
  iVar1 = GetSystemMetrics(0xc);
  *(int *)(param_1 + 0xc) = iVar1;
  if (*(int *)(param_1 + 0x68) == 0) {
    FUN_0041ca0d();
  }
  else {
    FUN_0041c9dd();
  }
  hdc = GetDC((HWND)0x0);
  iVar1 = GetDeviceCaps(hdc,0x58);
  *(int *)(param_1 + 0x18) = iVar1;
  iVar1 = GetDeviceCaps(hdc,0x5a);
  *(int *)(param_1 + 0x1c) = iVar1;
  ReleaseDC((HWND)0x0,hdc);
  return;
}



void FUN_00417073(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  
  pAVar1 = AfxGetModuleThreadState();
  *(int *)(pAVar1 + 0x10) = *(int *)(pAVar1 + 0x10) + 1;
  return;
}



bool FUN_0041707c(int param_1)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  int iVar2;
  CWinThread *pCVar3;
  int iVar4;
  SIZE_T SVar5;
  uint32_t uVar6;
  
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x10) != 0) &&
     (iVar2 = *(int *)(pAVar1 + 0x10) + -1, *(int *)(pAVar1 + 0x10) = iVar2, iVar2 == 0)) {
    pCVar3 = AfxGetThread();
    iVar2 = FUN_0041bf1f();
    iVar2 = *(int *)(iVar2 + 4);
    if (param_1 != 0) {
      if (((param_1 != -1) && (pCVar3 != (CWinThread *)0x0)) &&
         (*(code **)(pCVar3 + 0x54) != (code *)0x0)) {
        (**(code **)(pCVar3 + 0x54))(0,0);
      }
      FUN_004180aa();
      FUN_00417aec();
      FUN_00416d9d();
      FUN_00414067();
      FUN_00403009();
    }
    iVar4 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
    if (((iVar2 != 0) &&
        ((*(uint **)(iVar4 + 0xc) == (uint *)0x0 ||
         (SVar5 = FUN_00404850(*(uint **)(iVar4 + 0xc)), SVar5 < *(uint *)(iVar2 + 0xb8))))) &&
       (*(int *)(iVar2 + 0xb8) != 0)) {
      SVar5 = 0;
      if (*(uint **)(iVar4 + 0xc) != (uint *)0x0) {
        SVar5 = FUN_00404850(*(uint **)(iVar4 + 0xc));
        FUN_004039d0(*(uint **)(iVar4 + 0xc));
      }
      iVar2 = FUN_00403b50(*(uint *)(iVar2 + 0xb8));
      *(int *)(iVar4 + 0xc) = iVar2;
      if ((iVar2 == 0) && (SVar5 != 0)) {
        uVar6 = FUN_00403b50(SVar5);
        *(uint32_t *)(iVar4 + 0xc) = uVar6;
      }
    }
  }
  return *(int *)(pAVar1 + 0x10) != 0;
}



void * FUN_0041716a(void)

{
  void *this;
  int unaff_EBP;
  
  FUN_004037f0();
  *(void **)(unaff_EBP + -0x10) = this;
  CMap<>(this,10);
  *(uint32_t *)(unaff_EBP + -4) = 0;
  CMap<>((void *)((int)this + 0x1c),4);
  *(uint8_t *)(unaff_EBP + -4) = 1;
  FUN_0041156b((void *)((int)this + 0x1c),7,0);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *(uint32_t *)((int)this + 0x38) = *(uint32_t *)(unaff_EBP + 8);
  *(uint32_t *)((int)this + 0x3c) = *(uint32_t *)(unaff_EBP + 0xc);
  *(uint32_t *)((int)this + 0x40) = *(uint32_t *)(unaff_EBP + 0x10);
  return this;
}



int FUN_004171c6(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint32_t uVar4;
  uint32_t *puVar5;
  void *this;
  int unaff_EBP;
  
  FUN_004037f0();
  uVar1 = *(uint *)(unaff_EBP + 8);
  *(uint8_t **)(unaff_EBP + -0x10) = &stack0xffffffe0;
  *(void **)(unaff_EBP + -0x1c) = this;
  if (uVar1 == 0) {
    iVar3 = 0;
  }
  else {
    iVar3 = FUN_00411434(this,uVar1);
    if (iVar3 == 0) {
      iVar3 = FUN_00411434((void *)((int)this + 0x1c),uVar1);
      if (iVar3 == 0) {
        uVar4 = FUN_004124bb(&LAB_004183a7);
        *(uint32_t *)(unaff_EBP + -4) = 0;
        *(uint32_t *)(unaff_EBP + -0x18) = uVar4;
        iVar3 = FUN_00416ece();
        *(int *)(unaff_EBP + -0x14) = iVar3;
        if (iVar3 == 0) {
          FUN_00410e99();
        }
        puVar5 = FUN_00411467((void *)((int)this + 0x1c),uVar1);
        *puVar5 = *(uint32_t *)(unaff_EBP + -0x14);
        iVar3 = FUN_00417270();
        return iVar3;
      }
      iVar2 = *(int *)((int)this + 0x3c);
      *(uint *)(iVar2 + iVar3) = uVar1;
      if (*(int *)((int)this + 0x40) == 2) {
        *(uint *)(iVar2 + iVar3 + 4) = uVar1;
      }
    }
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return iVar3;
}



uint * Catch_00417253(void)

{
  int unaff_EBP;
  
  FUN_004124bb(*(uint32_t *)(unaff_EBP + -0x18));
  FUN_004041a0(0,0);
  return &DAT_0041726a;
}



uint32_t FUN_00417270(void)

{
  uint32_t *puVar1;
  int unaff_EBP;
  int unaff_ESI;
  uint32_t unaff_EDI;
  
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004124bb(*(uint32_t *)(unaff_EBP + -0x18));
  puVar1 = (uint32_t *)(*(int *)(unaff_ESI + 0x3c) + *(int *)(unaff_EBP + -0x14));
  *puVar1 = unaff_EDI;
  if (*(int *)(unaff_ESI + 0x40) == 2) {
    puVar1[1] = unaff_EDI;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(unaff_EBP + -0x14);
}



void __fastcall FUN_004172a1(int param_1)

{
  uint32_t *puVar1;
  int local_10;
  int local_c;
  int *local_8;
  
  local_c = -(uint)(*(int *)(param_1 + 0x28) != 0);
  if (local_c != 0) {
    do {
      FUN_004114f9((void *)(param_1 + 0x1c),&local_c,&local_10,(int *)&local_8);
      puVar1 = (uint32_t *)((int)local_8 + *(int *)(param_1 + 0x3c));
      *puVar1 = 0;
      if (*(int *)(param_1 + 0x40) == 2) {
        puVar1[1] = 0;
      }
      if (local_8 != (int *)0x0) {
        (**(code **)(*local_8 + 4))(1);
      }
    } while (local_c != 0);
  }
  RemoveAll(param_1 + 0x1c);
  return;
}



void FUN_00417302(uint param_1)

{
  if (param_1 != 0) {
    FUN_00417444(param_1);
    FUN_004173c3();
  }
  return;
}



uint32_t FUN_00417323(void)

{
  int extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  if (*(int **)(unaff_EBP + 0x10) != (int *)0x0) {
    **(int **)(unaff_EBP + 0x10) = *(int *)(extraout_ECX + 8) + 0xf1a0;
  }
  FUN_0041251c((uint32_t *)(unaff_EBP + -0x10));
  *(uint32_t *)(unaff_EBP + -4) = 0;
  FUN_0041252c((void *)(unaff_EBP + 0x10),(int *)(extraout_ECX + 0x10));
  *(uint8_t *)(unaff_EBP + -4) = 1;
  if (*(int *)(*(int *)(unaff_EBP + 0x10) + -8) == 0) {
    FUN_00416c7a(0xf006);
  }
  FUN_0041943d((int *)(unaff_EBP + -0x10),*(int *)(extraout_ECX + 8) + 0xf1a0);
  lstrcpynA(*(LPSTR *)(unaff_EBP + 8),*(LPCSTR *)(unaff_EBP + -0x10),*(int *)(unaff_EBP + 0xc));
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_00412667((int *)(unaff_EBP + 0x10));
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412667((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return 1;
}



void FUN_004173c3(void)

{
  LPCSTR pCVar1;
  uint32_t uVar2;
  uint32_t *puVar3;
  int unaff_EBP;
  
  FUN_004037f0();
  puVar3 = (uint32_t *)FUN_004124cf(0x14);
  *(uint32_t **)(unaff_EBP + -0x14) = puVar3;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (puVar3 == (uint32_t *)0x0) {
    puVar3 = (uint32_t *)0x0;
  }
  else {
    FUN_00416f2d(puVar3);
    *(uint8_t *)(unaff_EBP + -4) = 1;
    FUN_0041251c(puVar3 + 4);
    pCVar1 = *(LPCSTR *)(unaff_EBP + 0x10);
    puVar3[2] = *(uint32_t *)(unaff_EBP + 8);
    uVar2 = *(uint32_t *)(unaff_EBP + 0xc);
    *(uint8_t *)(unaff_EBP + -4) = 2;
    *puVar3 = &PTR_LAB_0041ed0c;
    puVar3[3] = uVar2;
    FUN_004127af(puVar3 + 4,pCVar1);
  }
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  *(uint32_t **)(unaff_EBP + -0x10) = puVar3;
  FUN_004041a0(unaff_EBP + -0x10,&DAT_004232b8);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



uint32_t FUN_00417444(uint param_1)

{
  int iVar1;
  bool bVar2;
  
  if (0x10b < param_1) {
    if (param_1 == 0x3e3) {
      return 10;
    }
    if (param_1 == 0x3e4) {
      return 10;
    }
    if (param_1 == 0x3e5) {
      return 10;
    }
    if (param_1 == 999) {
      return 5;
    }
    return 1;
  }
  if (param_1 == 0x10b) {
    return 3;
  }
  if (param_1 < 0x3f) {
    if (param_1 == 0x3e) {
      return 8;
    }
    switch(param_1) {
    case 0:
      return 0;
    default:
      return 1;
    case 2:
    case 6:
    case 0x12:
      return 2;
    case 3:
    case 0xf:
    case 0x11:
    case 0x22:
    case 0x34:
    case 0x35:
    case 0x37:
      goto LAB_0041752e;
    case 4:
    case 0x24:
      return 4;
    case 5:
    case 0xc:
    case 0x13:
    case 0x1d:
    case 0x36:
    case 0x3a:
      return 5;
    case 0xb:
    case 0x1a:
    case 0x3c:
      return 6;
    case 0x10:
      return 7;
    case 0x14:
    case 0x15:
    case 0x16:
    case 0x17:
    case 0x39:
    case 0x3b:
      goto LAB_0041752e;
    case 0x18:
    case 0x19:
    case 0x1b:
    case 0x1e:
      return 9;
    case 0x20:
      return 0xb;
    case 0x21:
      return 0xc;
    case 0x26:
      return 0xe;
    case 0x27:
      return 0xd;
    }
  }
  if (param_1 < 0x6c) {
    if (param_1 == 0x6b) {
      return 2;
    }
    if (param_1 < 0x48) {
      if (param_1 == 0x47) {
        return 5;
      }
      if (param_1 == 0x40) {
        return 5;
      }
      if (param_1 == 0x41) {
        return 5;
      }
      if (param_1 == 0x42) {
        return 6;
      }
      if (param_1 == 0x43) {
        return 3;
      }
      iVar1 = param_1 - 0x44;
      if (iVar1 == 0) {
        return 4;
      }
LAB_00417504:
      bVar2 = iVar1 == 2;
      goto LAB_00417506;
    }
    if (param_1 == 0x50) {
      return 5;
    }
    if (param_1 == 0x52) {
      return 5;
    }
    if (param_1 == 0x55) {
      return 3;
    }
    if (param_1 == 0x56) {
      return 5;
    }
    bVar2 = param_1 == 0x58;
  }
  else {
    if (param_1 < 0x70) {
      if (param_1 == 0x6f) {
        return 3;
      }
      if (param_1 == 0x6c) {
        return 0xc;
      }
      return 1;
    }
    if (0x90 < param_1) {
      if (param_1 < 0x9b) {
        if (param_1 == 0x9a) {
          return 3;
        }
        if (param_1 == 0x91) {
          return 7;
        }
        return 1;
      }
      if (0xa7 < param_1) {
        if (param_1 == 0xaa) {
          return 5;
        }
        if (param_1 == 0xb6) {
          return 6;
        }
        if (param_1 == 0xb7) {
          return 5;
        }
        if (param_1 == 0xbf) {
          return 6;
        }
        if (param_1 == 0xc1) {
          return 6;
        }
        iVar1 = param_1 - 0xce;
        if (iVar1 == 0) {
          return 3;
        }
        goto LAB_00417504;
      }
      if (param_1 == 0xa7) {
        return 0xc;
      }
      bVar2 = param_1 == 0xa1;
LAB_00417506:
      if (!bVar2) {
        return 1;
      }
LAB_0041752e:
      return 3;
    }
    if (param_1 == 0x90) {
      return 3;
    }
    if (0x7b < param_1) {
      if (param_1 == 0x7c) {
        return 3;
      }
      if (param_1 == 0x7d) {
        return 3;
      }
      if (param_1 == 0x83) {
        return 9;
      }
      if (param_1 == 0x84) {
        return 9;
      }
      return 1;
    }
    if (param_1 == 0x7b) {
      return 3;
    }
    if (param_1 == 0x70) {
      return 0xd;
    }
    if (param_1 == 0x71) {
      return 4;
    }
    if (param_1 == 0x72) {
      return 6;
    }
    bVar2 = param_1 == 0x75;
  }
  if (!bVar2) {
    return 1;
  }
LAB_0041752e:
  return 10;
}



uint32_t * __thiscall FUN_00417679(void *this,uint *param_1)

{
  int iVar1;
  
  if (param_1 == (uint *)0x0) {
    *(uint32_t *)this = 0;
    *(uint32_t *)((int)this + 4) = 0;
    *(uint32_t *)((int)this + 8) = 0;
  }
  else {
    iVar1 = FUN_00417772(param_1);
    FUN_004176a8(this,param_1,iVar1);
  }
  return this;
}



uint32_t __thiscall FUN_004176a8(void *this,uint32_t *param_1,int param_2)

{
  HGLOBAL hMem;
  uint *puVar1;
  uint uVar2;
  uint32_t uVar3;
  
  *(int *)((int)this + 4) = param_2;
  hMem = GlobalAlloc(0x40,param_2 + 0x40);
  *(HGLOBAL *)this = hMem;
  uVar3 = 0;
  if (hMem != (HGLOBAL)0x0) {
    puVar1 = GlobalLock(hMem);
    FUN_00403c20(puVar1,param_1,*(uint *)((int)this + 4));
    if (*(short *)((int)puVar1 + 2) == -1) {
      uVar2 = puVar1[3];
    }
    else {
      uVar2 = *puVar1;
    }
    *(uint *)((int)this + 8) = ~uVar2 >> 6 & 1;
    GlobalUnlock(*(HGLOBAL *)this);
    uVar3 = 1;
  }
  return uVar3;
}



void __fastcall FUN_00417708(uint32_t *param_1)

{
  if ((HGLOBAL)*param_1 != (HGLOBAL)0x0) {
    GlobalFree((HGLOBAL)*param_1);
  }
  return;
}



uint32_t __fastcall FUN_00417716(uint32_t *param_1)

{
  uint32_t uVar1;
  
  uVar1 = *param_1;
  *param_1 = 0;
  return uVar1;
}



void __cdecl FUN_0041771c(int param_1)

{
  short *psVar1;
  short sVar2;
  
  if (*(short *)(param_1 + 2) == -1) {
    psVar1 = (short *)(param_1 + 0x1a);
  }
  else {
    psVar1 = (short *)(param_1 + 0x12);
  }
  sVar2 = *psVar1;
  if (sVar2 == -1) {
    psVar1 = psVar1 + 2;
  }
  else {
    while (psVar1 = psVar1 + 1, sVar2 != 0) {
      sVar2 = *psVar1;
    }
  }
  sVar2 = *psVar1;
  if (sVar2 == -1) {
    psVar1 = psVar1 + 2;
  }
  else {
    while (psVar1 = psVar1 + 1, sVar2 != 0) {
      sVar2 = *psVar1;
    }
  }
  do {
    sVar2 = *psVar1;
    psVar1 = psVar1 + 1;
  } while (sVar2 != 0);
  return;
}



int __cdecl FUN_00417772(uint *param_1)

{
  short *psVar1;
  int iVar2;
  ushort *puVar3;
  byte bVar4;
  ushort uVar5;
  uint uVar6;
  bool bVar7;
  
  bVar7 = *(short *)((int)param_1 + 2) == -1;
  psVar1 = (short *)FUN_0041771c((int)param_1);
  if (*(short *)((int)param_1 + 2) == -1) {
    uVar6 = param_1[3];
  }
  else {
    uVar6 = *param_1;
  }
  if ((uVar6 & 0x40) != 0) {
    iVar2 = FUN_00403f60(psVar1 + (-(uint)bVar7 & 2) + 1);
    psVar1 = psVar1 + (-(uint)bVar7 & 2) + 1 + iVar2 + 1;
  }
  if (bVar7) {
    bVar4 = (byte)param_1[4];
  }
  else {
    bVar4 = (byte)param_1[2];
  }
  if (bVar4 != 0) {
    uVar6 = (uint)bVar4;
    do {
      puVar3 = (ushort *)(((int)psVar1 + 3U & 0xfffffffc) + (-(uint)bVar7 & 6) + 0x12);
      uVar5 = *puVar3;
      if (uVar5 == 0xffff) {
        puVar3 = puVar3 + 2;
      }
      else {
        while (puVar3 = puVar3 + 1, uVar5 != 0) {
          uVar5 = *puVar3;
        }
      }
      uVar5 = *puVar3;
      if (uVar5 == 0xffff) {
        puVar3 = puVar3 + 2;
      }
      else {
        while (puVar3 = puVar3 + 1, uVar5 != 0) {
          uVar5 = *puVar3;
        }
      }
      uVar6 = uVar6 - 1;
      psVar1 = (short *)((int)puVar3 + *puVar3 + 2);
    } while (uVar6 != 0);
  }
  return (int)psVar1 - (int)param_1;
}



uint32_t __cdecl FUN_00417829(uint *param_1,void *param_2,undefined2 *param_3)

{
  short sVar1;
  uint uVar2;
  undefined2 *puVar3;
  LPSTR lpMultiByteStr;
  int cbMultiByte;
  LPCSTR lpDefaultChar;
  LPBOOL lpUsedDefaultChar;
  
  if (*(short *)((int)param_1 + 2) == -1) {
    uVar2 = param_1[3];
  }
  else {
    uVar2 = *param_1;
  }
  if ((uVar2 & 0x40) == 0) {
    return 0;
  }
  puVar3 = (undefined2 *)FUN_0041771c((int)param_1);
  lpUsedDefaultChar = (LPBOOL)0x0;
  *param_3 = *puVar3;
  sVar1 = *(short *)((int)param_1 + 2);
  lpDefaultChar = (LPCSTR)0x0;
  cbMultiByte = 0x20;
  lpMultiByteStr = (LPSTR)FUN_00412a51(param_2,0x20);
  WideCharToMultiByte(0,0,puVar3 + ((sVar1 != -1) - 1 & 2) + 1,-1,lpMultiByteStr,cbMultiByte,
                      lpDefaultChar,lpUsedDefaultChar);
  FUN_00412a29(param_2,-1);
  return 1;
}



uint32_t __thiscall FUN_00417898(void *this,LPCSTR param_1,undefined2 param_2)

{
  uint32_t *puVar1;
  uint32_t uVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  undefined2 *puVar6;
  int iVar7;
  char cVar8;
  int iVar9;
  uint32_t *puVar10;
  WCHAR local_54 [32];
  undefined2 *local_14;
  uint32_t *local_10;
  uint32_t *local_c;
  uint local_8;
  
  if (*(int *)((int)this + 4) == 0) {
    uVar2 = 0;
  }
  else {
    local_c = this;
    puVar3 = GlobalLock(*(HGLOBAL *)this);
    local_8 = (uint)(*(short *)((int)puVar3 + 2) == -1);
    if (*(short *)((int)puVar3 + 2) == -1) {
      uVar4 = puVar3[3];
    }
    else {
      uVar4 = *puVar3;
    }
    local_10 = (uint32_t *)(uVar4 & 0x40);
    iVar9 = (-(uint)(local_8 != 0) & 2) + 1;
    if (local_8 == 0) {
      *puVar3 = *puVar3 | 0x40;
    }
    else {
      puVar3[3] = puVar3[3] | 0x40;
    }
    iVar5 = MultiByteToWideChar(0,0,param_1,-1,local_54,0x20);
    iVar5 = iVar9 * 2 + iVar5 * 2;
    puVar6 = (undefined2 *)FUN_0041771c((int)puVar3);
    iVar7 = 0;
    local_14 = puVar6;
    if (local_10 != (uint32_t *)0x0) {
      iVar7 = FUN_00403f60(puVar6 + iVar9);
      iVar7 = iVar9 * 2 + 2 + iVar7 * 2;
    }
    local_10 = (uint32_t *)(iVar7 + 3 + (int)puVar6 & 0xfffffffc);
    puVar10 = (uint32_t *)((int)puVar6 + iVar5 + 3 & 0xfffffffc);
    if (local_8 == 0) {
      cVar8 = (char)puVar3[2];
    }
    else {
      cVar8 = (char)puVar3[4];
    }
    if ((iVar5 != iVar7) && (cVar8 != '\0')) {
      FUN_00404460(puVar10,local_10,(int)puVar3 + (local_c[1] - (int)local_10));
    }
    *local_14 = param_2;
    FUN_00404460((uint32_t *)(local_14 + iVar9),(uint32_t *)local_54,iVar5 + iVar9 * -2);
    puVar1 = local_c;
    local_c[1] = (int)puVar10 + (local_c[1] - (int)local_10);
    GlobalUnlock((HGLOBAL)*local_c);
    puVar1[2] = 0;
    uVar2 = 1;
  }
  return uVar2;
}



void FUN_004179af(short param_1)

{
  short sVar1;
  HANDLE h;
  int iVar2;
  HDC hdc;
  char *pcVar3;
  int local_44 [7];
  CHAR local_28 [32];
  void *local_8;
  
  sVar1 = 10;
  pcVar3 = "System";
  h = GetStockObject(0x11);
  if (h == (HGDIOBJ)0x0) {
    h = GetStockObject(0xd);
    if (h == (HGDIOBJ)0x0) goto LAB_00417a23;
  }
  iVar2 = GetObjectA(h,0x3c,local_44);
  if (iVar2 != 0) {
    pcVar3 = local_28;
    hdc = GetDC((HWND)0x0);
    if (local_44[0] < 0) {
      local_44[0] = -local_44[0];
    }
    iVar2 = GetDeviceCaps(hdc,0x5a);
    iVar2 = MulDiv(local_44[0],0x48,iVar2);
    sVar1 = (short)iVar2;
    ReleaseDC((HWND)0x0,hdc);
  }
LAB_00417a23:
  if (param_1 == 0) {
    param_1 = sVar1;
  }
  FUN_00417898(local_8,pcVar3,param_1);
  return;
}



uint32_t FUN_00417a40(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  int *piVar1;
  int iVar2;
  uint32_t uVar3;
  
  uVar3 = 0xffffffff;
  iVar2 = FUN_0041bf1f();
  piVar1 = *(int **)(iVar2 + 4);
  iVar2 = FUN_0041cba5(param_1,param_2,param_3,param_4);
  if ((iVar2 != 0) && (iVar2 = (**(code **)(*piVar1 + 0x8c))(), iVar2 != 0)) {
    iVar2 = (**(code **)(*piVar1 + 0x58))();
    if (iVar2 == 0) {
      if ((int *)piVar1[7] != (int *)0x0) {
        (**(code **)(*(int *)piVar1[7] + 0x60))();
      }
      uVar3 = (**(code **)(*piVar1 + 0x70))();
    }
    else {
      uVar3 = (**(code **)(*piVar1 + 0x5c))();
    }
  }
  FUN_0041cea1();
  return uVar3;
}



void __fastcall FUN_00417abc(uint32_t *param_1)

{
  *param_1 = &PTR_LAB_0041f65c;
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}



uint * __thiscall FUN_00417ad0(void *this,byte param_1)

{
  FUN_00417bee();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void FUN_00417aec(void)

{
  int iVar1;
  
  iVar1 = FUN_00417b00();
  if (iVar1 != 0) {
    FUN_004172a1(iVar1);
    return;
  }
  return;
}



uint32_t FUN_00417b00(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  int unaff_EBP;
  
  FUN_004037f0();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x1c) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    uVar2 = FUN_004124bb(&LAB_004183a7);
    iVar3 = FUN_004124cf(0x44);
    *(int *)(unaff_EBP + 8) = iVar3;
    *(uint32_t *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = FUN_0041716a();
    }
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    *(void **)(pAVar1 + 0x1c) = pvVar4;
    FUN_004124bb(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(pAVar1 + 0x1c);
}



void FUN_00417b70(void)

{
  FUN_00417b00();
  FUN_004171c6();
  return;
}



bool __thiscall FUN_00417b86(void *this,uint param_1)

{
  void *this_00;
  uint32_t *puVar1;
  
  if (param_1 != 0) {
    this_00 = (void *)FUN_00417b00();
    *(uint *)((int)this + 4) = param_1;
    puVar1 = FUN_00411467(this_00,param_1);
    *puVar1 = this;
    (**(code **)(*(int *)this + 0x14))(*(uint32_t *)((int)this + 4));
  }
  return param_1 != 0;
}



int __fastcall FUN_00417bbd(int *param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = param_1[1];
  if (iVar1 != 0) {
    this = (void *)FUN_00417b00();
    if (this != (void *)0x0) {
      FUN_004114b7(this,param_1[1]);
    }
  }
  (**(code **)(*param_1 + 0x1c))();
  param_1[1] = 0;
  return iVar1;
}



void FUN_00417bee(void)

{
  HDC hdc;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(int **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = (int)&PTR_LAB_0041f65c;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (extraout_ECX[1] != 0) {
    hdc = (HDC)FUN_00417bbd(extraout_ECX);
    DeleteDC(hdc);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = (int)&PTR_LAB_0041e9d4;
  return;
}



int __thiscall FUN_00417c83(void *this,int param_1)

{
  int iVar1;
  BOOL BVar2;
  
  iVar1 = 1;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    iVar1 = RestoreDC(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    if ((iVar1 != 0) && (BVar2 = RestoreDC(*(HDC *)((int)this + 8),param_1), BVar2 != 0)) {
      return 1;
    }
    iVar1 = 0;
  }
  return iVar1;
}



void __thiscall FUN_00417cc1(void *this,int param_1)

{
  HGDIOBJ h;
  
  h = GetStockObject(param_1);
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SelectObject(*(HDC *)((int)this + 4),h);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SelectObject(*(HDC *)((int)this + 8),h);
  }
  FUN_0041812e();
  return;
}



void __thiscall FUN_00417d06(void *this,int param_1)

{
  HGDIOBJ pvVar1;
  
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    if (param_1 == 0) {
      pvVar1 = (HGDIOBJ)0x0;
    }
    else {
      pvVar1 = *(HGDIOBJ *)(param_1 + 4);
    }
    SelectObject(*(HDC *)((int)this + 4),pvVar1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    if (param_1 == 0) {
      pvVar1 = (HGDIOBJ)0x0;
    }
    else {
      pvVar1 = *(HGDIOBJ *)(param_1 + 4);
    }
    SelectObject(*(HDC *)((int)this + 8),pvVar1);
  }
  FUN_0041812e();
  return;
}



COLORREF __thiscall FUN_00417d59(void *this,COLORREF param_1)

{
  uint32_t local_8;
  
  local_8 = this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    local_8 = (void *)SetBkColor(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = (void *)SetBkColor(*(HDC *)((int)this + 8),param_1);
  }
  return (COLORREF)local_8;
}



COLORREF __thiscall FUN_00417d91(void *this,COLORREF param_1)

{
  uint32_t local_8;
  
  local_8 = this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    local_8 = (void *)SetTextColor(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = (void *)SetTextColor(*(HDC *)((int)this + 8),param_1);
  }
  return (COLORREF)local_8;
}



int __thiscall FUN_00417dc9(void *this,int param_1)

{
  uint32_t local_8;
  
  local_8 = this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    local_8 = (void *)SetMapMode(*(HDC *)((int)this + 4),param_1);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    local_8 = (void *)SetMapMode(*(HDC *)((int)this + 8),param_1);
  }
  return (int)local_8;
}



void __thiscall FUN_00417e01(void *this,int *param_1,int param_2,int param_3)

{
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SetViewportOrgEx(*(HDC *)((int)this + 4),param_2,param_3,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SetViewportOrgEx(*(HDC *)((int)this + 8),param_2,param_3,&local_c);
  }
  *param_1 = local_c.x;
  param_1[1] = local_c.y;
  return;
}



void __thiscall FUN_00417e4d(void *this,int *param_1,int param_2,int param_3)

{
  tagPOINT local_c;
  
  local_c.x = (LONG)this;
  local_c.y = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    OffsetViewportOrgEx(*(HDC *)((int)this + 4),param_2,param_3,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    OffsetViewportOrgEx(*(HDC *)((int)this + 8),param_2,param_3,&local_c);
  }
  *param_1 = local_c.x;
  param_1[1] = local_c.y;
  return;
}



void __thiscall FUN_00417e99(void *this,int *param_1,int param_2,int param_3)

{
  tagSIZE local_c;
  
  local_c.cx = (LONG)this;
  local_c.cy = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SetViewportExtEx(*(HDC *)((int)this + 4),param_2,param_3,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SetViewportExtEx(*(HDC *)((int)this + 8),param_2,param_3,&local_c);
  }
  *param_1 = local_c.cx;
  param_1[1] = local_c.cy;
  return;
}



void __thiscall
FUN_00417ee5(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  tagSIZE local_c;
  
  local_c.cx = (LONG)this;
  local_c.cy = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    ScaleViewportExtEx(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    ScaleViewportExtEx(*(HDC *)((int)this + 8),param_2,param_3,param_4,param_5,&local_c);
  }
  *param_1 = local_c.cx;
  param_1[1] = local_c.cy;
  return;
}



void __thiscall FUN_00417f3d(void *this,int *param_1,int param_2,int param_3)

{
  tagSIZE local_c;
  
  local_c.cx = (LONG)this;
  local_c.cy = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    SetWindowExtEx(*(HDC *)((int)this + 4),param_2,param_3,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    SetWindowExtEx(*(HDC *)((int)this + 8),param_2,param_3,&local_c);
  }
  *param_1 = local_c.cx;
  param_1[1] = local_c.cy;
  return;
}



void __thiscall
FUN_00417f89(void *this,int *param_1,int param_2,int param_3,int param_4,int param_5)

{
  tagSIZE local_c;
  
  local_c.cx = (LONG)this;
  local_c.cy = (LONG)this;
  if (*(HDC *)((int)this + 4) != *(HDC *)((int)this + 8)) {
    ScaleWindowExtEx(*(HDC *)((int)this + 4),param_2,param_3,param_4,param_5,&local_c);
  }
  if (*(HDC *)((int)this + 8) != (HDC)0x0) {
    ScaleWindowExtEx(*(HDC *)((int)this + 8),param_2,param_3,param_4,param_5,&local_c);
  }
  *param_1 = local_c.cx;
  param_1[1] = local_c.cy;
  return;
}



uint32_t * FUN_00417ff1(void)

{
  int iVar1;
  HWND hWnd;
  bool bVar2;
  HDC pHVar3;
  undefined3 extraout_var;
  uint32_t *this;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = this;
  FUN_00417abc(this);
  iVar1 = *(int *)(unaff_EBP + 8);
  *(uint32_t *)(unaff_EBP + -4) = 0;
  *this = &PTR_LAB_0041f6dc;
  hWnd = *(HWND *)(iVar1 + 0x1c);
  this[4] = hWnd;
  pHVar3 = BeginPaint(hWnd,(LPPAINTSTRUCT)(this + 5));
  bVar2 = FUN_00417b86(this,(uint)pHVar3);
  if (CONCAT31(extraout_var,bVar2) == 0) {
    FUN_00418184();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return this;
}


void FUN_004180aa(void)

{
  int iVar1;
  
  iVar1 = FUN_004180be();
  if (iVar1 != 0) {
    FUN_004172a1(iVar1);
    return;
  }
  return;
}


uint32_t FUN_004180be(void)

{
  AFX_MODULE_THREAD_STATE *pAVar1;
  uint32_t uVar2;
  int iVar3;
  void *pvVar4;
  int unaff_EBP;
  
  FUN_004037f0();
  pAVar1 = AfxGetModuleThreadState();
  if ((*(int *)(pAVar1 + 0x20) == 0) && (*(int *)(unaff_EBP + 8) != 0)) {
    uVar2 = FUN_004124bb(&LAB_004183a7);
    iVar3 = FUN_004124cf(0x44);
    *(int *)(unaff_EBP + 8) = iVar3;
    *(uint32_t *)(unaff_EBP + -4) = 0;
    if (iVar3 == 0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = FUN_0041716a();
    }
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    *(void **)(pAVar1 + 0x20) = pvVar4;
    FUN_004124bb(uVar2);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *(uint32_t *)(pAVar1 + 0x20);
}



void FUN_0041812e(void)

{
  FUN_004180be();
  FUN_004171c6();
  return;
}



int __fastcall FUN_00418144(int param_1)

{
  int iVar1;
  void *this;
  
  iVar1 = *(int *)(param_1 + 4);
  if (iVar1 != 0) {
    this = (void *)FUN_004180be();
    if (this != (void *)0x0) {
      FUN_004114b7(this,*(uint *)(param_1 + 4));
    }
  }
  *(uint32_t *)(param_1 + 4) = 0;
  return iVar1;
}



BOOL __fastcall FUN_0041816e(int param_1)

{
  HGDIOBJ ho;
  BOOL BVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    return 0;
  }
  ho = (HGDIOBJ)FUN_00418144(param_1);
  BVar1 = DeleteObject(ho);
  return BVar1;
}



void FUN_00418184(void)

{
  uint *local_8;
  
  local_8 = &DAT_0042a788;
  FUN_004041a0(&local_8,&DAT_00422f78);
  return;
}



bool FUN_0041819f(HWND param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  CHAR local_10 [12];
  
  if ((param_1 != (HWND)0x0) && (uVar1 = GetWindowLongA(param_1,-0x10), (uVar1 & 0xf) == param_2)) {
    GetClassNameA(param_1,local_10,10);
    iVar2 = lstrcmpiA(local_10,"combobox");
    return (bool)('\x01' - (iVar2 != 0));
  }
  return false;
}



bool FUN_004181e9(HWND param_1,LPCSTR param_2)

{
  int iVar1;
  CHAR local_24 [32];
  
  GetClassNameA(param_1,local_24,0x20);
  iVar1 = lstrcmpiA(local_24,param_2);
  return (bool)('\x01' - (iVar1 != 0));
}



HWND FUN_00418214(HWND param_1,LONG param_2,LONG param_3)

{
  POINT pt;
  int iVar1;
  uint uVar2;
  BOOL BVar3;
  UINT uCmd;
  tagRECT local_14;
  
  ClientToScreen(param_1,(LPPOINT)&param_2);
  uCmd = 5;
  do {
    param_1 = GetWindow(param_1,uCmd);
    if (param_1 == (HWND)0x0) {
      return (HWND)0x0;
    }
    iVar1 = GetDlgCtrlID(param_1);
    if (((short)iVar1 != -1) && (uVar2 = GetWindowLongA(param_1,-0x10), (uVar2 & 0x10000000) != 0))
    {
      GetWindowRect(param_1,&local_14);
      pt.y = param_3;
      pt.x = param_2;
      BVar3 = PtInRect(&local_14,pt);
      if (BVar3 != 0) {
        return param_1;
      }
    }
    uCmd = 2;
  } while( true );
}



void FUN_00418289(HWND param_1,LPCSTR param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  CHAR local_104 [256];
  
  uVar1 = lstrlenA(param_2);
  if (((uVar1 < 0x101) && (uVar2 = GetWindowTextA(param_1,local_104,0x100), uVar2 == uVar1)) &&
     (iVar3 = lstrcmpA(local_104,param_2), iVar3 == 0)) {
    return;
  }
  SetWindowTextA(param_1,param_2);
  return;
}



void FUN_004182e1(uint32_t *param_1)

{
  if ((HGDIOBJ)*param_1 != (HGDIOBJ)0x0) {
    DeleteObject((HGDIOBJ)*param_1);
    *param_1 = 0;
  }
  return;
}



void FUN_004182fa(HWND param_1)

{
  bool bVar1;
  HWND hWnd;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  uint uVar2;
  HWND pHVar3;
  HWND pHVar4;
  
  hWnd = GetFocus();
  if (hWnd == (HWND)0x0) {
    return;
  }
  if (hWnd == param_1) {
    return;
  }
  bVar1 = FUN_0041819f(hWnd,3);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    hWnd = GetParent(hWnd);
    if (hWnd == param_1) {
      return;
    }
    bVar1 = FUN_0041819f(hWnd,2);
    if (CONCAT31(extraout_var_00,bVar1) == 0) {
      return;
    }
  }
  if ((param_1 != (HWND)0x0) && (uVar2 = GetWindowLongA(param_1,-0x10), (uVar2 & 0x40000000) != 0))
  {
    pHVar3 = GetParent(param_1);
    pHVar4 = GetDesktopWindow();
    if (pHVar3 == pHVar4) {
      return;
    }
  }
  SendMessageA(hWnd,0x14f,0,0);
  return;
}



void FUN_00418371(HGLOBAL param_1)

{
  UINT UVar1;
  uint uVar2;
  
  if (param_1 != (HGLOBAL)0x0) {
    UVar1 = GlobalFlags(param_1);
    for (uVar2 = UVar1 & 0xff; uVar2 != 0; uVar2 = uVar2 - 1) {
      GlobalUnlock(param_1);
    }
    GlobalFree(param_1);
  }
  return;
}



LRESULT __cdecl FUN_004183f9(HKEY param_1)

{
  HWND hWnd;
  BOOL BVar1;
  LSTATUS LVar2;
  byte local_120 [128];
  _OSVERSIONINFOA local_a0;
  DWORD local_c [2];
  
  if ((param_1 != (HKEY)0x0) || (DAT_0042ac0c == 0)) {
    DAT_0042ac0c = 1;
    if (DAT_0042ac18 == 0) {
      DAT_0042ac14 = RegisterWindowMessageA("MSH_SCROLL_LINES_MSG");
      DAT_0042ac18 = (DAT_0042ac14 != 0) + 1;
    }
    if (((DAT_0042ac18 == 2) && (hWnd = FindWindowA("MouseZ","Magellan MSWHEEL"), hWnd != (HWND)0x0)
        ) && (DAT_0042ac14 != 0)) {
      DAT_0042ac10 = SendMessageA(hWnd,DAT_0042ac14,0,0);
    }
    else {
      _memset(&local_a0,0,0x94);
      local_a0.dwOSVersionInfoSize = 0x94;
      DAT_0042ac10 = 3;
      BVar1 = GetVersionExA(&local_a0);
      if ((BVar1 != 0) && ((local_a0.dwPlatformId == 1 || (local_a0.dwPlatformId == 2)))) {
        if (local_a0.dwMajorVersion < 4) {
          LVar2 = RegOpenKeyExA((HKEY)0x80000001,"Control Panel\\Desktop",0,1,&param_1);
          if (LVar2 == 0) {
            local_c[1] = 0x80;
            LVar2 = RegQueryValueExA(param_1,"WheelScrollLines",(LPDWORD)0x0,local_c,local_120,
                                     local_c + 1);
            if (LVar2 == 0) {
              DAT_0042ac10 = FUN_004056b0(local_120,(uint32_t *)0x0,10);
            }
            RegCloseKey(param_1);
          }
        }
        else if ((local_a0.dwPlatformId == 2) && (3 < local_a0.dwMajorVersion)) {
          SystemParametersInfoA(0x68,0,&DAT_0042ac10,0);
        }
      }
    }
  }
  return DAT_0042ac10;
}



void __thiscall FUN_00418570(void *this,uint32_t param_1,uint32_t param_2)

{
  uint uVar1;
  tagRECT local_14;
  
  *(uint32_t *)((int)this + 0x40) = 0xffffffff;
  *(uint32_t *)((int)this + 0x44) = param_1;
  *(uint32_t *)((int)this + 0x48) = param_2;
  if (*(int *)((int)this + 0x1c) != 0) {
    uVar1 = FUN_00416a9d((int)this);
    if ((uVar1 & 0x300000) != 0) {
      FUN_0041597b(this,0,0,1);
      FUN_0041597b(this,1,0,1);
      FUN_00415a06(this,3,0);
    }
  }
  GetClientRect(*(HWND *)((int)this + 0x1c),&local_14);
  *(LONG *)((int)this + 0x4c) = local_14.right - local_14.left;
  *(LONG *)((int)this + 0x50) = local_14.bottom - local_14.top;
  if (*(int *)((int)this + 0x1c) != 0) {
    FUN_00418879(this);
    InvalidateRect(*(HWND *)((int)this + 0x1c),(RECT *)0x0,1);
  }
  return;
}



void __thiscall FUN_004185fb(void *this,int *param_1)

{
  int iVar1;
  int iVar2;
  tagRECT local_14;
  
  iVar1 = FUN_004159ab(this,1);
  iVar2 = FUN_004159ab(this,0);
  if (*(int *)((int)this + 100) != 0) {
    GetClientRect(*(HWND *)((int)this + 0x1c),&local_14);
    if (*(int *)((int)this + 0x4c) < local_14.right - local_14.left) {
      iVar2 = ((local_14.right - local_14.left) - *(int *)((int)this + 0x4c)) / -2;
    }
    if (*(int *)((int)this + 0x50) < local_14.bottom - local_14.top) {
      iVar1 = ((local_14.bottom - local_14.top) - *(int *)((int)this + 0x50)) / -2;
    }
  }
  *param_1 = iVar2;
  param_1[1] = iVar1;
  return;
}



void __thiscall FUN_00418674(void *this,int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_004159ab(this,0);
  FUN_0041597b(this,0,param_1,1);
  iVar2 = FUN_004159ab(this,1);
  FUN_0041597b(this,1,param_2,1);
  FUN_00415a96(this,iVar1 - param_1,iVar2 - param_2,(RECT *)0x0,(RECT *)0x0);
  return;
}



void __fastcall FUN_004186c6(int *param_1)

{
  FUN_00414040(param_1);
  if (param_1[0x10] == -1) {
    FUN_00418570(param_1,param_1[0x11],param_1[0x12]);
  }
  else {
    FUN_00418879(param_1);
  }
  return;
}



void __thiscall FUN_004186ee(void *this,int *param_1)

{
  uint uVar1;
  int iVar2;
  
  param_1[1] = 0;
  *param_1 = 0;
  uVar1 = FUN_00416a9d((int)this);
  iVar2 = (**(code **)(*(int *)this + 0x70))(1);
  if ((iVar2 == 0) && (*param_1 = DAT_0042ab98, (uVar1 & 0x800000) != 0)) {
    *param_1 = *param_1 + -1;
  }
  iVar2 = (**(code **)(*(int *)this + 0x70))(0);
  if ((iVar2 == 0) && (param_1[1] = DAT_0042ab9c, (uVar1 & 0x800000) != 0)) {
    param_1[1] = param_1[1] + -1;
  }
  return;
}



uint32_t __thiscall FUN_00418748(void *this,int *param_1,int *param_2)

{
  uint uVar1;
  uint32_t uVar2;
  tagRECT local_14;
  
  GetClientRect(*(HWND *)((int)this + 0x1c),&local_14);
  *param_1 = local_14.right;
  param_1[1] = local_14.bottom;
  uVar1 = FUN_00416a9d((int)this);
  FUN_004186ee(this,param_2);
  if ((*param_2 != 0) && ((uVar1 & 0x200000) != 0)) {
    *param_1 = *param_1 + *param_2;
  }
  if ((param_2[1] != 0) && ((uVar1 & 0x100000) != 0)) {
    param_1[1] = param_1[1] + param_2[1];
  }
  if ((*param_2 < *param_1) && (param_2[1] < param_1[1])) {
    uVar2 = 1;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}



void __thiscall
FUN_004187bd(void *this,int param_1,int param_2,uint *param_3,int *param_4,int *param_5,int param_6)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  uint uVar5;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
  FUN_004186ee(this,(int *)&local_c);
  piVar2 = param_4;
  iVar1 = *(int *)((int)this + 0x50);
  *param_4 = *(int *)((int)this + 0x4c) - param_1;
  param_4[1] = iVar1 - param_2;
  piVar3 = (int *)FUN_004185fb(this,&param_1);
  *param_5 = *piVar3;
  param_5[1] = piVar3[1];
  uVar4 = (uint)(0 < *piVar2);
  if (uVar4 == 0) {
    *param_5 = 0;
  }
  else if (param_6 != 0) {
    piVar2[1] = piVar2[1] + (int)local_8;
  }
  uVar5 = (uint)(0 < piVar2[1]);
  if (uVar5 == 0) {
    param_5[1] = 0;
  }
  else if (param_6 != 0) {
    *piVar2 = *piVar2 + (int)local_c;
  }
  if (((uVar5 != 0) && (uVar4 == 0)) && (0 < *piVar2)) {
    piVar2[1] = piVar2[1] + (int)local_8;
    uVar4 = 1;
  }
  iVar1 = *piVar2;
  if ((0 < iVar1) && (iVar1 <= *param_5)) {
    *param_5 = iVar1;
  }
  iVar1 = piVar2[1];
  if ((0 < iVar1) && (iVar1 <= param_5[1])) {
    param_5[1] = iVar1;
  }
  *param_3 = uVar4;
  param_3[1] = uVar5;
  return;
}



void __fastcall FUN_00418879(void *param_1)

{
  CWnd *pCVar1;
  LRESULT LVar2;
  int iVar3;
  SCROLLINFO local_6c;
  tagRECT local_50;
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  int local_30;
  int local_2c;
  int local_28;
  int local_24;
  int local_20;
  int local_1c;
  uint local_18;
  int local_14;
  UINT local_10;
  UINT local_c;
  int local_8;
  
  if (*(int *)((int)param_1 + 0x68) != 0) {
    return;
  }
  *(uint32_t *)((int)param_1 + 0x68) = 1;
  local_8 = 1;
  GetParent(*(HWND *)((int)param_1 + 0x1c));
  pCVar1 = FUN_004140eb();
  if ((pCVar1 != (CWnd *)0x0) &&
     (LVar2 = SendMessageA(*(HWND *)(pCVar1 + 0x1c),0x368,0,(LPARAM)&local_40), LVar2 != 0)) {
    local_8 = 0;
  }
  if (local_8 == 0) {
    FUN_004186ee(param_1,&local_20);
    local_10 = local_38 - local_40;
    local_c = local_34 - local_3c;
  }
  else {
    iVar3 = FUN_00418748(param_1,(int *)&local_10,&local_20);
    if (iVar3 == 0) {
      GetClientRect(*(HWND *)((int)param_1 + 0x1c),&local_50);
      if ((0 < local_50.right) && (0 < local_50.bottom)) {
        FUN_00415a06(param_1,3,0);
      }
      goto LAB_004189e7;
    }
  }
  FUN_004187bd(param_1,local_10,local_c,&local_18,&local_30,&local_28,local_8);
  if (local_18 != 0) {
    local_c = local_c - local_1c;
  }
  if (local_14 != 0) {
    local_10 = local_10 - local_20;
  }
  FUN_00418674(param_1,local_28,local_24);
  local_6c.fMask = 3;
  local_6c.nMin = 0;
  FUN_00415a06(param_1,0,local_18);
  if (local_18 != 0) {
    local_6c.nPage = local_10;
    local_6c.nMax = *(int *)((int)param_1 + 0x4c) + -1;
    iVar3 = FUN_00415a49(param_1,0,&local_6c,1);
    if (iVar3 == 0) {
      FUN_004159d3(param_1,0,0,local_30,1);
    }
  }
  FUN_00415a06(param_1,1,local_14);
  if (local_14 != 0) {
    local_6c.nPage = local_c;
    local_6c.nMax = *(int *)((int)param_1 + 0x50) + -1;
    iVar3 = FUN_00415a49(param_1,1,&local_6c,1);
    if (iVar3 == 0) {
      FUN_004159d3(param_1,1,0,local_2c,1);
    }
  }
LAB_004189e7:
  *(uint32_t *)((int)param_1 + 0x68) = 0;
  return;
}



void __thiscall FUN_004189ef(void *this,uint8_t param_1,uint32_t param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  
  if ((param_3 != (void *)0x0) && (iVar1 = FUN_00415d94(param_3,0), iVar1 != 0)) {
    return;
  }
  pvVar2 = (void *)(**(code **)(*(int *)this + 0x70))(0);
  if (param_3 == pvVar2) {
    (**(code **)(*(int *)this + 0xc4))(CONCAT11(0xff,param_1),param_2,1);
  }
  return;
}



void __thiscall FUN_00418a33(void *this,byte param_1,uint32_t param_2,void *param_3)

{
  int iVar1;
  void *pvVar2;
  
  if ((param_3 != (void *)0x0) && (iVar1 = FUN_00415d94(param_3,0), iVar1 != 0)) {
    return;
  }
  pvVar2 = (void *)(**(code **)(*(int *)this + 0x70))(1);
  if (param_3 == pvVar2) {
    (**(code **)(*(int *)this + 0xc4))(CONCAT31((uint3)param_1,0xff),param_2,1);
  }
  return;
}


int __thiscall FUN_00418aaf(int *param_1,uint32_t param_2,short param_3)

{
  bool bVar1;
  bool bVar2;
  uint uVar3;
  int iVar4;
  LRESULT nNumerator;
  int iVar5;
  int iVar6;
  
  uVar3 = FUN_00416a9d((int)param_1);
  iVar4 = (**(code **)(*param_1 + 0x70))(1);
  if (((iVar4 == 0) || (iVar4 = FUN_00416ba2(iVar4), iVar4 == 0)) && ((uVar3 & 0x200000) == 0)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  iVar4 = (**(code **)(*param_1 + 0x70))();
  if (((iVar4 == 0) || (iVar4 = FUN_00416ba2(iVar4), iVar4 == 0)) && ((uVar3 & 0x100000) == 0)) {
    bVar2 = false;
  }
  else {
    bVar2 = true;
  }
  iVar4 = 0;
  if ((!bVar1) && (!bVar2)) {
    return 0;
  }
  nNumerator = FUN_004183f9((HKEY)0x0);
  if (bVar1) {
    iVar5 = MulDiv(-(int)param_3,nNumerator,0x78);
    if ((iVar5 == -1) || (nNumerator == -1)) {
      iVar4 = param_1[0x16];
      if (0 < param_3) {
        iVar4 = -iVar4;
      }
    }
    else {
      iVar4 = param_1[0x18] * iVar5;
      if (param_1[0x16] <= param_1[0x18] * iVar5) {
        iVar4 = param_1[0x16];
      }
    }
    iVar6 = *param_1;
    iVar5 = 0;
  }
  else {
    if (!bVar2) goto LAB_00418bbd;
    iVar4 = MulDiv(-(int)param_3,nNumerator,0x78);
    if ((iVar4 == -1) || (nNumerator == -1)) {
      iVar5 = param_1[0x15];
    }
    else {
      iVar5 = param_1[0x17] * iVar4;
      if (param_1[0x15] <= param_1[0x17] * iVar4) {
        iVar5 = param_1[0x15];
      }
    }
    iVar6 = *param_1;
    iVar4 = 0;
  }
  iVar4 = (**(code **)(iVar6 + 200))(iVar5,iVar4,1);
LAB_00418bbd:
  if (iVar4 != 0) {
    UpdateWindow((HWND)param_1[7]);
  }
  return 0;
}

void __fastcall FUN_00418c03(int *param_1)

{
  CWnd *this;
  int *piVar1;
  
  this = FUN_004156e7((int)param_1);
  if (this != (CWnd *)0x0) {
    piVar1 = (int *)FUN_0041a70d((int)this);
    if (piVar1 == param_1) {
      CFrameWnd::SetActiveView((CFrameWnd *)this,(CView *)0x0,1);
    }
  }
  FUN_0041489e(param_1);
  return;
}



void FUN_00418c32(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  FUN_00417ff1();
  iVar1 = *extraout_ECX;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  (**(code **)(iVar1 + 0xe4))(unaff_EBP + -0x60,0);
  (**(code **)(*extraout_ECX + 0xf8))(unaff_EBP + -0x60);
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  CPaintDC::~CPaintDC((CPaintDC *)(unaff_EBP + -0x60));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



int __fastcall FUN_00418c86(CView *param_1)

{
  int iVar1;
  CWnd *this;
  CView *pCVar2;
  HWND hWnd;
  BOOL BVar3;
  
  iVar1 = FUN_00414040((int *)param_1);
  if (((iVar1 != 3) && (iVar1 != 4)) && (this = FUN_004156e7((int)param_1), this != (CWnd *)0x0)) {
    pCVar2 = (CView *)FUN_0041a70d((int)this);
    hWnd = GetFocus();
    if (((pCVar2 == param_1) && (*(HWND *)(param_1 + 0x1c) != hWnd)) &&
       (BVar3 = IsChild(*(HWND *)(param_1 + 0x1c),hWnd), BVar3 == 0)) {
      (**(code **)(*(int *)param_1 + 0xec))(1,param_1,param_1);
      return iVar1;
    }
    CFrameWnd::SetActiveView((CFrameWnd *)this,param_1,1);
  }
  return iVar1;
}



CWnd * FUN_00418cf3(CWnd *param_1,int param_2)

{
  CWnd *this;
  int iVar1;
  BOOL BVar2;
  
  GetParent(*(HWND *)(param_1 + 0x1c));
  this = FUN_004140eb();
  iVar1 = FUN_00416e9c(this,0x420760);
  if (iVar1 != 0) {
    if (param_2 != 0) {
      return this;
    }
    do {
      GetParent(*(HWND *)(param_1 + 0x1c));
      param_1 = FUN_004140eb();
      if (param_1 == (CWnd *)0x0) {
        return this;
      }
      BVar2 = IsIconic(*(HWND *)(param_1 + 0x1c));
    } while (BVar2 == 0);
  }
  return (CWnd *)0x0;
}



void __fastcall FUN_00418e02(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0x98))();
  if (iVar1 != 0) {
    (**(code **)(*param_1 + 0x84))();
  }
  return;
}


void __fastcall FUN_00418e96(int param_1)

{
  FUN_00416b7b(*(void **)(param_1 + 0x1c),0);
  ShowOwnedPopups(*(HWND *)(*(int *)(param_1 + 0x1c) + 0x1c),0);
  FUN_00416b2c(*(void **)(param_1 + 0x1c),0x42a6b0,0,0,0,0,0x13);
  return;
}



void __thiscall FUN_00418ec8(void *this,int param_1)

{
  HCURSOR pHVar1;
  
  FUN_0041c922(2);
  *(int *)((int)this + 0xa0) = *(int *)((int)this + 0xa0) + param_1;
  if (*(int *)((int)this + 0xa0) < 1) {
    *(uint32_t *)((int)this + 0xa0) = 0;
    SetCursor(*(HCURSOR *)((int)this + 0xa4));
  }
  else {
    pHVar1 = SetCursor(DAT_0042abd4);
    if ((0 < param_1) && (*(int *)((int)this + 0xa0) == 1)) {
      *(HCURSOR *)((int)this + 0xa4) = pHVar1;
    }
  }
  FUN_0041c992(2);
  return;
}



void FUN_00418f27(uint32_t param_1)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = (int *)FUN_00402a20();
  if (piVar1 != (int *)0x0) {
    iVar2 = (**(code **)(*piVar1 + 0xb8))();
    if ((iVar2 != 0) && ((int *)piVar1[0x1a] != (int *)0x0)) {
      (**(code **)(*(int *)piVar1[0x1a] + 0x6c))(param_1);
    }
  }
  return;
}



int __thiscall FUN_00418f55(void *this,LPCSTR param_1,uint param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  HWND hWnd;
  int *piVar5;
  HWND local_8;
  
  local_8 = this;
  FUN_00418f27(0);
  iVar1 = FUN_004157e0(0,&local_8);
  piVar5 = (int *)((int)this + 0x9c);
  if (iVar1 != 0) {
    piVar2 = (int *)FUN_00415770(iVar1);
    iVar3 = (**(code **)(*piVar2 + 0xb8))();
    if (iVar3 != 0) {
      piVar5 = piVar2 + 0x13;
    }
  }
  iVar3 = *piVar5;
  if (param_3 != 0) {
    *piVar5 = param_3 + 0x30000;
  }
  if (((param_2 & 0xf0) == 0) &&
     ((uVar4 = param_2 & 0xf, uVar4 < 2 || ((2 < uVar4 && (uVar4 < 5)))))) {
    param_2 = param_2 | 0x30;
  }
  FUN_0041bc33();
  hWnd = (HWND)0x0;
  if (iVar1 != 0) {
    hWnd = *(HWND *)(iVar1 + 0x1c);
  }
  iVar1 = MessageBoxA(hWnd,param_1,*(LPCSTR *)((int)this + 0x78),param_2);
  *piVar5 = iVar3;
  if (local_8 != (HWND)0x0) {
    EnableWindow(local_8,1);
  }
  FUN_00418f27(1);
  return iVar1;
}



void FUN_0041900f(uint32_t param_1,uint32_t param_2,uint32_t param_3)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  (**(code **)(**(int **)(iVar1 + 4) + 0x94))(param_1,param_2,param_3);
  return;
}



uint32_t FUN_00419030(void)

{
  int iVar1;
  uint32_t uVar2;
  int unaff_EBP;
  int iVar3;
  
  FUN_004037f0();
  FUN_0041251c((uint32_t *)(unaff_EBP + -0x10));
  *(uint32_t *)(unaff_EBP + -4) = 0;
  FUN_00416c7a(*(UINT *)(unaff_EBP + 8));
  iVar3 = *(int *)(unaff_EBP + 0x10);
  if (iVar3 == -1) {
    iVar3 = *(int *)(unaff_EBP + 8);
  }
  iVar1 = FUN_0041bf1f();
  uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0x94))
                    (*(uint32_t *)(unaff_EBP + -0x10),*(uint32_t *)(unaff_EBP + 0xc),iVar3);
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412667((int *)(unaff_EBP + -0x10));
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar2;
}



void __thiscall FUN_00419096(void *this,LPCSTR param_1,LPCSTR param_2,UINT param_3)

{
  int iVar1;
  HWND hWnd;
  
  if (param_2 == (LPCSTR)0x0) {
    iVar1 = FUN_0041bf1f();
    param_2 = *(LPCSTR *)(iVar1 + 0x10);
  }
  FUN_0041bc33();
  if (this == (void *)0x0) {
    hWnd = (HWND)0x0;
  }
  else {
    hWnd = *(HWND *)((int)this + 0x1c);
  }
  MessageBoxA(hWnd,param_1,param_2,param_3);
  return;
}



void __fastcall FUN_004190e2(int param_1)

{
  uint8_t local_108 [260];
  
  if (*(int *)(param_1 + 0xa8) != 0) {
    FUN_00412f5c();
    (**(code **)(**(int **)(param_1 + 0xa8) + 4))(local_108);
  }
  return;
}



void __thiscall FUN_0041912f(void *this,uint32_t param_1)

{
  if (*(int **)((int)this + 0x80) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x80) + 0x2c))(param_1);
  }
  return;
}



void __fastcall FUN_004191ba(int param_1)

{
  HWND pHVar1;
  LRESULT LVar2;
  int iVar3;
  
  for (pHVar1 = GetCapture(); pHVar1 != (HWND)0x0; pHVar1 = AfxGetParentOwner(pHVar1)) {
    LVar2 = SendMessageA(pHVar1,0x365,0,0);
    if (LVar2 != 0) {
      return;
    }
  }
  for (pHVar1 = GetFocus(); pHVar1 != (HWND)0x0; pHVar1 = AfxGetParentOwner(pHVar1)) {
    LVar2 = SendMessageA(pHVar1,0x365,0,0);
    if (LVar2 != 0) {
      return;
    }
  }
  iVar3 = FUN_00415770(param_1);
  if (iVar3 == 0) {
    pHVar1 = (HWND)0x0;
  }
  else {
    pHVar1 = *(HWND *)(iVar3 + 0x1c);
  }
  pHVar1 = GetLastActivePopup(pHVar1);
  while( true ) {
    if (pHVar1 == (HWND)0x0) {
      SendMessageA(*(HWND *)(param_1 + 0x1c),0x111,0xe147,0);
      return;
    }
    LVar2 = SendMessageA(pHVar1,0x365,0,0);
    if (LVar2 != 0) break;
    pHVar1 = AfxGetParentOwner(pHVar1);
  }
  return;
}



void __fastcall FUN_0041925c(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x4c) == 0) {
    FUN_004191ba(param_1);
  }
  else if (*(int *)(param_1 + 0x4c) != 0x3f107) {
    iVar1 = FUN_0041bf1f();
    (**(code **)(**(int **)(iVar1 + 4) + 0xa0))(*(uint32_t *)(param_1 + 0x4c),1);
    return;
  }
  return;
}



uint __thiscall FUN_0041928f(void *this,LPCSTR param_1,LPCSTR param_2,uint32_t param_3)

{
  HKEY hKey;
  LSTATUS LVar1;
  uint uVar2;
  CHAR local_14 [16];
  
  if (*(int *)((int)this + 0x7c) == 0) {
    wsprintfA(local_14,"%d",param_3);
    uVar2 = WritePrivateProfileStringA(param_1,param_2,local_14,*(LPCSTR *)((int)this + 0x90));
  }
  else {
    hKey = GetSectionKey(this,param_1);
    uVar2 = 0;
    if (hKey != (HKEY)0x0) {
      LVar1 = RegSetValueExA(hKey,param_2,0,4,(BYTE *)&param_3,4);
      RegCloseKey(hKey);
      uVar2 = (uint)(LVar1 == 0);
    }
  }
  return uVar2;
}



void FUN_00419304(int *param_1,UINT param_2,int param_3,int param_4)

{
  int iVar1;
  byte local_104 [256];
  
  iVar1 = FUN_00416cfe(param_2,(LPSTR)local_104,0x100);
  if (iVar1 != 0) {
    FUN_0041933e(param_1,local_104,param_3,param_4);
  }
  return;
}



void FUN_0041933e(int *param_1,byte *param_2,int param_3,int param_4)

{
  byte bVar1;
  byte bVar2;
  LPCSTR pCVar3;
  int iVar4;
  int iVar5;
  byte *pbVar6;
  
  iVar5 = 0;
  bVar1 = *param_2;
  pbVar6 = param_2;
  while (bVar1 != 0) {
    if (*pbVar6 == 0x25) {
      bVar1 = pbVar6[1];
      if (((char)bVar1 < '0') || ('9' < (char)bVar1)) {
        if (((char)bVar1 < 'A') || ('Z' < (char)bVar1)) goto LAB_00419397;
        if ((char)bVar1 < ':') goto LAB_00419375;
        iVar4 = (char)bVar1 + -0x38;
      }
      else {
LAB_00419375:
        iVar4 = (char)bVar1 + -0x31;
      }
      pbVar6 = pbVar6 + 2;
      if (param_4 <= iVar4) goto LAB_004193a6;
      pCVar3 = *(LPCSTR *)(param_3 + iVar4 * 4);
      if (pCVar3 != (LPCSTR)0x0) {
        iVar4 = lstrlenA(pCVar3);
        iVar5 = iVar5 + iVar4;
      }
    }
    else {
LAB_00419397:
      if ((*(byte *)((int)&DAT_0042aca8 + *pbVar6 + 1) & 4) != 0) {
        iVar5 = iVar5 + 1;
        pbVar6 = pbVar6 + 1;
      }
      pbVar6 = pbVar6 + 1;
LAB_004193a6:
      iVar5 = iVar5 + 1;
    }
    bVar1 = *pbVar6;
  }
  pbVar6 = (byte *)FUN_004129da(param_1,iVar5);
  do {
    while( true ) {
      if (*param_2 == 0) {
        FUN_00412a29(param_1,(int)pbVar6 - *param_1);
        return;
      }
      bVar1 = *param_2;
      if (bVar1 == 0x25) break;
LAB_00419414:
      if ((*(byte *)((int)&DAT_0042aca8 + bVar1 + 1) & 4) != 0) {
        *pbVar6 = bVar1;
        pbVar6 = pbVar6 + 1;
        param_2 = param_2 + 1;
      }
      *pbVar6 = *param_2;
      pbVar6 = pbVar6 + 1;
      param_2 = param_2 + 1;
    }
    bVar2 = param_2[1];
    if (((char)bVar2 < '0') || ('9' < (char)bVar2)) {
      if (((char)bVar2 < 'A') || ('Z' < (char)bVar2)) goto LAB_00419414;
      if ((char)bVar2 < ':') goto LAB_004193e4;
      iVar5 = (char)bVar2 + -0x38;
    }
    else {
LAB_004193e4:
      iVar5 = (char)bVar2 + -0x31;
    }
    param_2 = param_2 + 2;
    if (iVar5 < param_4) {
      pCVar3 = *(LPCSTR *)(param_3 + iVar5 * 4);
      if (pCVar3 != (LPCSTR)0x0) {
        lstrcpyA((LPSTR)pbVar6,pCVar3);
        iVar5 = lstrlenA((LPCSTR)pbVar6);
        pbVar6 = pbVar6 + iVar5;
      }
    }
    else {
      *pbVar6 = 0x3f;
      pbVar6 = pbVar6 + 1;
    }
  } while( true );
}



void FUN_0041943d(int *param_1,UINT param_2)

{
  FUN_00419304(param_1,param_2,(int)&stack0x0000000c,1);
  return;
}



void __thiscall FUN_00419454(void *this,WPARAM param_1,void *param_2)

{
  LRESULT LVar1;
  int lParam;
  
  LVar1 = SendMessageA(*(HWND *)((int)this + 0x1c),0x149,param_1,0);
  lParam = FUN_00412a51(param_2,LVar1);
  SendMessageA(*(HWND *)((int)this + 0x1c),0x148,param_1,lParam);
  FUN_00412a29(param_2,-1);
  return;
}



bool FUN_00419497(void)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  return *(int *)(iVar1 + 0x2c) == 0;
}



void FUN_004194a7(uint32_t param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  *(uint32_t *)(iVar1 + 0x30) = param_1;
  return;
}



uint32_t FUN_004194b6(void)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  return *(uint32_t *)(iVar1 + 0x30);
}



uint32_t * FUN_00419542(void)

{
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00413d9a(extraout_ECX);
  *(uint32_t *)(unaff_EBP + -4) = 0;
  FUN_0041117b(extraout_ECX + 0x1b,10);
  *(uint8_t *)(unaff_EBP + -4) = 1;
  FUN_0041251c(extraout_ECX + 0x2b);
  extraout_ECX[0x10] = 0xffffffff;
  *(uint8_t *)(unaff_EBP + -4) = 2;
  *extraout_ECX = &PTR_LAB_004201ec;
  extraout_ECX[0xf] = 1;
  extraout_ECX[0x27] = 0;
  extraout_ECX[0x11] = 0;
  extraout_ECX[0x12] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x2e] = 0;
  SetRectEmpty((LPRECT)(extraout_ECX + 0x16));
  extraout_ECX[0x22] = 0xffffffff;
  extraout_ECX[0x14] = 0;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x15] = 0;
  extraout_ECX[0x2c] = 0;
  extraout_ECX[0x2d] = 0;
  FUN_0041968b((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



uint * __thiscall FUN_00419608(void *this,byte param_1)

{
  FUN_00419624();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void FUN_00419624(void)

{
  CWnd *this;
  int unaff_EBP;
  
  FUN_004037f0();
  *(CWnd **)(unaff_EBP + -0x10) = this;
  *(uint ***)this = &PTR_LAB_004201ec;
  *(uint32_t *)(unaff_EBP + -4) = 2;
  FUN_004196af((int)this);
  if (*(uint **)(this + 0xa4) != (uint *)0x0) {
    FUN_0041250b(*(uint **)(this + 0xa4));
  }
  *(uint8_t *)(unaff_EBP + -4) = 1;
  FUN_00412667((int *)(this + 0xac));
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_004111da();
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  CWnd::~CWnd(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



void __fastcall FUN_0041968b(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  iVar1 = FUN_0041c645((void *)(iVar1 + 0x1070),&LAB_0041b94a);
  FUN_0041c20d((void *)(iVar1 + 8),param_1);
  return;
}



void __fastcall FUN_004196af(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  iVar1 = FUN_0041c645((void *)(iVar1 + 0x1070),&LAB_0041b94a);
  FUN_0041c220((void *)(iVar1 + 8),param_1);
  return;
}



bool __thiscall FUN_004196d3(void *this,LPCSTR param_1)

{
  int iVar1;
  HACCEL pHVar2;
  
  iVar1 = FUN_0041bf1f();
  pHVar2 = LoadAcceleratorsA(*(HINSTANCE *)(iVar1 + 0xc),param_1);
  *(HACCEL *)((int)this + 0x48) = pHVar2;
  return pHVar2 != (HACCEL)0x0;
}



void __thiscall FUN_004197a0(void *this,uint32_t param_1)

{
  FUN_00414040(this);
  if (*(int **)((int)this + 0x68) != (int *)0x0) {
    (**(code **)(**(int **)((int)this + 0x68) + 0x74))(param_1);
  }
  return;
}



uint32_t __fastcall FUN_004197bc(int *param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  if ((int *)param_1[0x1a] != (int *)0x0) {
    iVar1 = (**(code **)(*(int *)param_1[0x1a] + 0x78))();
    if (iVar1 != 0) {
      return 1;
    }
  }
  uVar2 = FUN_00414040(param_1);
  return uVar2;
}



uint32_t __fastcall FUN_00419848(CWnd *param_1)

{
  CWnd *pCVar1;
  uint32_t uVar2;
  
  pCVar1 = FUN_0041579c(param_1);
  if (*(int *)(pCVar1 + 0x50) == 0) {
    uVar2 = FUN_00414040((int *)param_1);
  }
  else {
    SetCursor(DAT_0042abdc);
    uVar2 = 1;
  }
  return uVar2;
}



uint32_t __thiscall FUN_00419872(void *this,uint32_t param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    iVar1 = FUN_004169c7((int)this);
    if (iVar1 == 0) {
      param_2 = *(int *)((int)this + 0x8c) + 0x20000;
    }
    else {
      param_2 = *(int *)((int)this + 0x90) + 0x10000;
    }
    if (param_2 == 0) {
      return 0;
    }
  }
  iVar1 = FUN_0041bf1f();
  (**(code **)(**(int **)(iVar1 + 4) + 0xa0))(param_2,1);
  return 1;
}



uint32_t FUN_00419953(HWND__ *param_1,HWND__ *param_2)

{
  do {
    if (param_1 == param_2) {
      return 1;
    }
    param_2 = AfxGetParentOwner(param_2);
  } while (param_2 != (HWND__ *)0x0);
  return 0;
}



void __fastcall FUN_00419aa0(int param_1)

{
  int *piVar1;
  BOOL BVar2;
  int iVar3;
  
  if (((*(int *)(param_1 + 0xa0) != 0) &&
      (iVar3 = *(int *)(param_1 + 0xa0) + -1, *(int *)(param_1 + 0xa0) = iVar3, iVar3 == 0)) &&
     (piVar1 = *(int **)(param_1 + 0xa4), piVar1 != (int *)0x0)) {
    if (*piVar1 != 0) {
      iVar3 = 0;
      do {
        BVar2 = IsWindow(*(HWND *)(iVar3 + (int)piVar1));
        if (BVar2 != 0) {
          EnableWindow(*(HWND *)(*(int *)(param_1 + 0xa4) + iVar3),1);
        }
        piVar1 = *(int **)(param_1 + 0xa4);
        iVar3 = iVar3 + 4;
      } while (*(int *)(iVar3 + (int)piVar1) != 0);
    }
    FUN_0041250b(*(uint **)(param_1 + 0xa4));
    *(uint32_t *)(param_1 + 0xa4) = 0;
  }
  return;
}



void __thiscall FUN_00419b0f(void *this,int param_1)

{
  HWND hWnd;
  HWND__ *hWnd_00;
  int iVar1;
  int iVar2;
  uint uVar3;
  UINT uCmd;
  
  uCmd = 5;
  hWnd = GetDesktopWindow();
  for (hWnd_00 = GetWindow(hWnd,uCmd); hWnd_00 != (HWND__ *)0x0; hWnd_00 = GetWindow(hWnd_00,2)) {
    iVar1 = FUN_00414113((uint)hWnd_00);
    if (((iVar1 != 0) && (*(HWND__ **)((int)this + 0x1c) != hWnd_00)) &&
       (iVar2 = FUN_00419953(*(HWND__ **)((int)this + 0x1c),hWnd_00), iVar2 != 0)) {
      uVar3 = GetWindowLongA(hWnd_00,-0x10);
      if (param_1 == 0) {
        if ((uVar3 & 0x18000000) == 0x10000000) {
          ShowWindow(hWnd_00,0);
          *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) | 2;
        }
      }
      else if (((uVar3 & 0x18000000) == 0) && ((*(byte *)(iVar1 + 0x24) & 2) != 0)) {
        ShowWindow(hWnd_00,4);
        *(uint *)(iVar1 + 0x24) = *(uint *)(iVar1 + 0x24) & 0xfffffffd;
      }
    }
  }
  return;
}



void __thiscall FUN_00419bb1(void *this,int param_1)

{
  HWND hWnd;
  CWnd *pCVar1;
  HWND pHVar2;
  
  if ((param_1 == 0) || ((*(byte *)((int)this + 0x24) & 4) == 0)) {
    GetParent(*(HWND *)((int)this + 0x1c));
    pCVar1 = FUN_004140eb();
    if (pCVar1 == (CWnd *)0x0) {
      if ((param_1 == 0) && (*(int *)((int)this + 0xa0) == 0)) {
        *(byte *)((int)this + 0x24) = *(byte *)((int)this + 0x24) | 0x80;
        (**(code **)(*(int *)this + 0x90))();
      }
      else if ((param_1 != 0) && ((*(uint *)((int)this + 0x24) & 0x80) != 0)) {
        *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xffffff7f;
        (**(code **)(*(int *)this + 0x94))();
        hWnd = *(HWND *)((int)this + 0x1c);
        pHVar2 = GetActiveWindow();
        if (pHVar2 == hWnd) {
          SendMessageA(hWnd,6,1,0);
        }
      }
      if ((param_1 != 0) && ((*(byte *)((int)this + 0x24) & 0x20) != 0)) {
        SendMessageA(*(HWND *)((int)this + 0x1c),0x86,1,0);
      }
      FUN_00419c6f(this,(-(uint)(param_1 != 0) & 0xfffffff0) + 0x20);
    }
  }
  else {
    FUN_00416bbd(this,0);
    SetFocus((HWND)0x0);
  }
  return;
}



void __thiscall FUN_00419c6f(void *this,uint param_1)

{
  uint uVar1;
  CWnd *pCVar2;
  int iVar3;
  HWND hWnd;
  UINT uCmd;
  
  uVar1 = FUN_00416a9d((int)this);
  pCVar2 = this;
  if ((uVar1 & 0x40000000) == 0) {
    pCVar2 = FUN_0041579c(this);
  }
  if ((param_1 & 0xc) != 0) {
    iVar3 = FUN_00416ba2((int)pCVar2);
    if ((((~param_1 & 8) == 0) || (iVar3 == 0)) || (pCVar2 == this)) {
      SendMessageA(*(HWND *)(pCVar2 + 0x1c),0x86,0,0);
    }
    else {
      *(byte *)((int)this + 0x25) = *(byte *)((int)this + 0x25) | 2;
      SendMessageA(*(HWND *)(pCVar2 + 0x1c),0x86,1,0);
      *(byte *)((int)this + 0x25) = *(byte *)((int)this + 0x25) & 0xfd;
    }
  }
  uCmd = 5;
  hWnd = GetDesktopWindow();
  while (hWnd = GetWindow(hWnd,uCmd), hWnd != (HWND)0x0) {
    iVar3 = FUN_00419953(*(HWND__ **)(pCVar2 + 0x1c),hWnd);
    if (iVar3 != 0) {
      SendMessageA(hWnd,0x36d,param_1,0);
    }
    uCmd = 2;
  }
  return;
}



uint32_t FUN_00419d19(int param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 0x28) == 0) {
    iVar1 = FUN_0041bf1f();
    if ((*(byte *)(iVar1 + 0x18) & 8) == 0) {
      iVar1 = FUN_0041684c(8);
    }
    else {
      iVar1 = 1;
    }
    if (iVar1 == 0) {
      return 0;
    }
    *(char **)(param_1 + 0x28) = "AfxFrameOrView42s";
  }
  if ((*(uint *)(param_1 + 0x20) & 0x8000) != 0) {
    if (DAT_0042abf4 == 0) {
      return 1;
    }
    *(uint *)(param_1 + 0x20) = *(uint *)(param_1 + 0x20) | 0x4000;
  }
  if (DAT_0042abf4 != 0) {
    *(byte *)(param_1 + 0x2d) = *(byte *)(param_1 + 0x2d) | 2;
  }
  return 1;
}



uint32_t __thiscall
FUN_00419d71(void *this,LPCSTR param_1,LPCSTR param_2,DWORD param_3,int *param_4,int param_5,
            LPCSTR param_6,DWORD param_7,LPVOID param_8)

{
  bool bVar1;
  int iVar2;
  undefined3 extraout_var;
  HMENU hMenu;
  HWND pHVar3;
  
  pHVar3 = (HWND)0x0;
  hMenu = (HMENU)0x0;
  if (param_6 != (LPCSTR)0x0) {
    iVar2 = FUN_0041bf1f();
    hMenu = LoadMenuA(*(HINSTANCE *)(iVar2 + 0xc),param_6);
    if (hMenu == (HMENU)0x0) {
      (**(code **)(*(int *)this + 0xac))();
      return 0;
    }
  }
  FUN_004127af((void *)((int)this + 0xac),param_2);
  if (param_5 != 0) {
    pHVar3 = *(HWND *)(param_5 + 0x1c);
  }
  bVar1 = FUN_004146de(this,param_7,param_1,param_2,param_3,*param_4,param_4[1],
                       param_4[2] - *param_4,param_4[3] - param_4[1],pHVar3,hMenu,param_8);
  if (CONCAT31(extraout_var,bVar1) == 0) {
    if (hMenu != (HMENU)0x0) {
      DestroyMenu(hMenu);
    }
    return 0;
  }
  return 1;
}



int * FUN_00419e09(uint32_t param_1,uint32_t param_2)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  uint32_t local_18;
  uint32_t local_14;
  uint32_t local_10;
  uint32_t local_c;
  void *local_8;
  
  piVar1 = (int *)FUN_00416ece();
  if (piVar1 != (int *)0x0) {
    local_18 = 0;
    local_14 = 0;
    local_10 = 0;
    local_c = 0;
    iVar2 = (**(code **)(*piVar1 + 0x5c))(0,0,0x50800000,&local_18,local_8,param_2,param_1);
    if (iVar2 != 0) {
      if (DAT_0042abf4 == 0) {
        return piVar1;
      }
      uVar3 = FUN_00416ab7((int)piVar1);
      if ((uVar3 & 0x200) == 0) {
        return piVar1;
      }
      FUN_00416ad1(local_8,0x200,0,0x20);
      return piVar1;
    }
  }
  return (int *)0x0;
}



uint32_t __thiscall FUN_00419eb2(void *this,uint32_t param_1,uint32_t param_2)

{
  int iVar1;
  
  iVar1 = FUN_00414040(this);
  if ((iVar1 != -1) && (iVar1 = (**(code **)(*(int *)this + 0xe4))(param_1,param_2), iVar1 != 0)) {
    PostMessageA(*(HWND *)((int)this + 0x1c),0x362,0xe001,0);
    (**(code **)(*(int *)this + 0xd0))(1);
    return 0;
  }
  return 0xffffffff;
}



uint32_t FUN_00419f84(void)

{
  uint uVar1;
  bool bVar2;
  undefined3 extraout_var;
  int iVar3;
  LPSTR pCVar4;
  uint32_t uVar5;
  HMENU pHVar6;
  void *this;
  int unaff_EBP;
  
  FUN_004037f0();
  uVar1 = *(uint *)(unaff_EBP + 8);
  *(uint *)((int)this + 0x8c) = uVar1;
  FUN_0041251c((uint32_t *)(unaff_EBP + 8));
  *(uint32_t *)(unaff_EBP + -4) = 0;
  bVar2 = FUN_00416c7a(uVar1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    FUN_00416d25((int *)((int)this + 0xac),*(byte **)(unaff_EBP + 8),0,'\n');
  }
  iVar3 = FUN_0041bf1f();
  if ((*(byte *)(iVar3 + 0x18) & 8) == 0) {
    iVar3 = FUN_0041684c(8);
  }
  else {
    iVar3 = 1;
  }
  if (iVar3 != 0) {
    pCVar4 = GetIconWndClass(this,*(uint32_t *)(unaff_EBP + 0xc),(ushort)uVar1);
    iVar3 = FUN_00419d71(this,pCVar4,*(LPCSTR *)((int)this + 0xac),*(DWORD *)(unaff_EBP + 0xc),
                         (int *)&DAT_0042ac38,*(int *)(unaff_EBP + 0x10),(LPCSTR)(uVar1 & 0xffff),0,
                         *(LPVOID *)(unaff_EBP + 0x14));
    if (iVar3 != 0) {
      pHVar6 = GetMenu(*(HWND *)((int)this + 0x1c));
      *(HMENU *)((int)this + 0x44) = pHVar6;
      FUN_004196d3(this,(LPCSTR)(uVar1 & 0xffff));
      if (*(int *)(unaff_EBP + 0x14) == 0) {
        FUN_004158f9(*(HWND *)((int)this + 0x1c),0x364,0,0,1,1);
      }
      *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
      FUN_00412667((int *)(unaff_EBP + 8));
      uVar5 = 1;
      goto LAB_0041a05e;
    }
  }
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  FUN_00412667((int *)(unaff_EBP + 8));
  uVar5 = 0;
LAB_0041a05e:
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar5;
}



void __fastcall FUN_0041a0a9(CWnd *param_1)

{
  int *this;
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined3 extraout_var;
  CWnd *pCVar4;
  CWnd *local_8;
  
  local_8 = param_1;
  if ((*(code **)(param_1 + 0x9c) != (code *)0x0) &&
     (iVar2 = (**(code **)(param_1 + 0x9c))(param_1), iVar2 == 0)) {
    return;
  }
  piVar3 = (int *)(**(code **)(*(int *)param_1 + 0xc4))();
  if ((piVar3 != (int *)0x0) && (iVar2 = (**(code **)(*piVar3 + 0x94))(param_1), iVar2 == 0)) {
    return;
  }
  iVar2 = FUN_0041bf1f();
  this = *(int **)(iVar2 + 4);
  if ((CWnd *)this[7] == param_1) {
    if ((piVar3 == (int *)0x0) && (iVar2 = (**(code **)(*this + 0x90))(), iVar2 == 0)) {
      return;
    }
    FUN_00418e96((int)this);
    FUN_0041912f(this,0);
    bVar1 = FUN_00419497();
    if (CONCAT31(extraout_var,bVar1) == 0) {
      FUN_004194a7(0);
      return;
    }
    iVar2 = FUN_0041bf1f();
    if ((*(char *)(iVar2 + 0x14) == '\0') && (this[7] == 0)) {
      AfxPostQuitMessage(0);
      return;
    }
  }
  bVar1 = false;
  if ((piVar3 != (int *)0x0) && (piVar3[0x12] != 0)) {
    local_8 = (CWnd *)(**(code **)(*piVar3 + 0x68))();
    do {
      if (local_8 == (CWnd *)0x0) goto LAB_0041a182;
      iVar2 = (**(code **)(*piVar3 + 0x6c))(&local_8);
      pCVar4 = FUN_004156e7(iVar2);
    } while (pCVar4 == param_1);
    bVar1 = true;
LAB_0041a182:
    if (!bVar1) {
      (**(code **)(*piVar3 + 0x84))();
      return;
    }
    (**(code **)(*piVar3 + 0x9c))(param_1);
  }
  (**(code **)(*(int *)param_1 + 0x60))();
  return;
}



void __fastcall FUN_0041a1a7(int *param_1)

{
  HMENU hMenu;
  HMENU pHVar1;
  int iVar2;
  
  FUN_0041ac70();
  if (param_1[0x11] != 0) {
    hMenu = (HMENU)param_1[0x11];
    pHVar1 = GetMenu((HWND)param_1[7]);
    if (pHVar1 != hMenu) {
      SetMenu((HWND)param_1[7],hMenu);
    }
  }
  iVar2 = FUN_0041bf1f();
  if (*(int **)(*(int *)(iVar2 + 4) + 0x1c) == param_1) {
    WinHelpA((HWND)param_1[7],(LPCSTR)0x0,2,0);
  }
  FUN_0041489e(param_1);
  return;
}



uint32_t __thiscall
FUN_0041a1f6(void *this,uint32_t *param_1,uint param_2,uint32_t *param_3,uint32_t *param_4)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  
  piVar1 = (int *)FUN_0041a70d((int)this);
  if (((piVar1 == (int *)0x0) ||
      (iVar2 = (**(code **)(*piVar1 + 0x14))(param_1,param_2,param_3,param_4), iVar2 == 0)) &&
     (uVar3 = FUN_00411fab(this,param_1,param_2,param_3,param_4), uVar3 == 0)) {
    iVar2 = FUN_0041bf1f();
    if ((*(int **)(iVar2 + 4) == (int *)0x0) ||
       (iVar2 = (**(code **)(**(int **)(iVar2 + 4) + 0x14))(param_1,param_2,param_3,param_4),
       iVar2 == 0)) {
      return 0;
    }
  }
  return 1;
}



void __thiscall FUN_0041a330(void *this,int param_1,CWnd *param_2,int param_3)

{
  bool bVar1;
  uint uVar2;
  CWnd *pCVar3;
  CWnd *pCVar4;
  LRESULT LVar5;
  int *piVar6;
  int iVar7;
  
  FUN_00414040(this);
  uVar2 = FUN_00416a9d((int)this);
  pCVar3 = this;
  if ((uVar2 & 0x40000000) == 0) {
    pCVar3 = FUN_0041579c(this);
  }
  if (param_1 != 0) {
    param_2 = this;
  }
  if ((pCVar3 == param_2) ||
     ((pCVar4 = FUN_0041579c(param_2), pCVar3 == pCVar4 &&
      (LVar5 = SendMessageA(*(HWND *)(param_2 + 0x1c),0x36d,0x40,0), LVar5 != 0)))) {
    bVar1 = true;
  }
  else {
    bVar1 = false;
  }
  *(uint *)(pCVar3 + 0x24) = *(uint *)(pCVar3 + 0x24) & 0xffffffdf;
  if (bVar1) {
    *(uint *)(pCVar3 + 0x24) = *(uint *)(pCVar3 + 0x24) | 0x20;
  }
  FUN_00419c6f(this,(-(uint)bVar1 & 0xfffffffc) + 8);
  piVar6 = (int *)FUN_0041a70d((int)this);
  if (piVar6 == (int *)0x0) {
    iVar7 = (**(code **)(*(int *)this + 200))();
    piVar6 = (int *)FUN_0041a70d(iVar7);
    if (piVar6 == (int *)0x0) {
      return;
    }
  }
  if ((param_1 != 0) && (param_3 == 0)) {
    (**(code **)(*piVar6 + 0xec))(1,piVar6,piVar6);
  }
  (**(code **)(*piVar6 + 0xf0))(param_1,this);
  return;
}



void __thiscall FUN_0041a404(void *this,uint32_t param_1)

{
  int iVar1;
  
  if ((*(byte *)((int)this + 0x24) & 0x20) != 0) {
    param_1 = 1;
  }
  iVar1 = FUN_00416ba2((int)this);
  if (iVar1 == 0) {
    param_1 = 0;
  }
  (**(code **)(*(int *)this + 0xa8))(0x86,param_1,0);
  return;
}



void __thiscall FUN_0041a43b(void *this,uint param_1)

{
  CWnd *pCVar1;
  LRESULT LVar2;
  uint uVar3;
  
  pCVar1 = FUN_0041579c(this);
  uVar3 = param_1 & 0xfff0;
  if (*(int *)(pCVar1 + 0x50) == 0) {
LAB_0041a467:
    FUN_00414040(this);
  }
  else {
    if (uVar3 < 0xf011) {
      if ((uVar3 != 0xf010) && (uVar3 != 0xf000)) goto LAB_0041a467;
    }
    else if (uVar3 != 0xf020) {
      if (((((uVar3 != 0xf030) && (uVar3 != 0xf040)) && (uVar3 != 0xf050)) &&
          ((uVar3 != 0xf060 && (uVar3 != 0xf120)))) && (uVar3 != 0xf130)) goto LAB_0041a467;
    }
    LVar2 = SendMessageA(*(HWND *)((int)this + 0x1c),0x365,0,(uVar3 - 0xf000 >> 4) + 0x1ef00);
    if (LVar2 == 0) {
      SendMessageA(*(HWND *)((int)this + 0x1c),0x111,0xe147,0);
    }
  }
  return;
}



void __thiscall FUN_0041a4d2(void *this,HDROP param_1)

{
  int *piVar1;
  int iVar2;
  UINT iFile;
  CHAR local_10c [260];
  UINT local_8;
  
  SetActiveWindow(*(HWND *)((int)this + 0x1c));
  FUN_004140eb();
  iFile = 0;
  local_8 = DragQueryFileA(param_1,0xffffffff,(LPSTR)0x0,0);
  iVar2 = FUN_0041bf1f();
  piVar1 = *(int **)(iVar2 + 4);
  if (local_8 != 0) {
    do {
      DragQueryFileA(param_1,iFile,local_10c,0x104);
      (**(code **)(*piVar1 + 0x84))(local_10c);
      iFile = iFile + 1;
    } while (iFile < local_8);
  }
  DragFinish(param_1);
  return;
}



uint32_t __fastcall FUN_0041a547(int param_1)

{
  int iVar1;
  uint32_t uVar2;
  
  iVar1 = FUN_0041bf1f();
  if ((*(int **)(iVar1 + 4))[7] == param_1) {
    uVar2 = (**(code **)(**(int **)(iVar1 + 4) + 0x90))();
    return uVar2;
  }
  return 1;
}



void __thiscall FUN_0041a568(void *this,int param_1)

{
  int *this_00;
  int iVar1;
  
  iVar1 = FUN_0041bf1f();
  this_00 = *(int **)(iVar1 + 4);
  if ((param_1 != 0) && ((void *)this_00[7] == this)) {
    FUN_004194a7(1);
    FUN_0041912f(this_00,1);
    (**(code **)(*this_00 + 0x70))();
  }
  return;
}



uint32_t FUN_0041a59c(HWND param_1,uint32_t param_2)

{
  int iVar1;
  short sVar2;
  CHAR local_10c [260];
  int local_8;
  
  iVar1 = FUN_0041bf1f();
  iVar1 = *(int *)(iVar1 + 4);
  if (((((ATOM)param_2 != 0) && (sVar2 = (short)((uint)param_2 >> 0x10), sVar2 != 0)) &&
      ((ATOM)param_2 == *(ATOM *)(iVar1 + 0xb0))) && (sVar2 == *(short *)(iVar1 + 0xb2))) {
    GlobalGetAtomNameA(*(ATOM *)(iVar1 + 0xb0),local_10c,0x103);
    GlobalAddAtomA(local_10c);
    GlobalGetAtomNameA(*(ATOM *)(iVar1 + 0xb2),local_10c,0x103);
    GlobalAddAtomA(local_10c);
    SendMessageA(param_1,0x3e4,*(WPARAM *)(local_8 + 0x1c),*(LPARAM *)(iVar1 + 0xb0));
  }
  return 0;
}



uint32_t __thiscall FUN_0041a657(void *this,HWND param_1,LPARAM param_2)

{
  LPCSTR lpString2;
  LPARAM lParam;
  int iVar1;
  CHAR local_214 [520];
  uint local_c;
  HGLOBAL local_8;
  
  UnpackDDElParam(1000,param_2,&local_c,(PUINT_PTR)&local_8);
  lpString2 = GlobalLock(local_8);
  lstrcpynA(local_214,lpString2,0x208);
  GlobalUnlock(local_8);
  lParam = ReuseDDElParam(param_2,1000,0x3e4,0x8000,(UINT_PTR)local_8);
  PostMessageA(param_1,0x3e4,*(WPARAM *)((int)this + 0x1c),lParam);
  iVar1 = FUN_00416ba2((int)this);
  if (iVar1 != 0) {
    iVar1 = FUN_0041bf1f();
    (**(code **)(**(int **)(iVar1 + 4) + 0x9c))(local_214);
  }
  return 0;
}



uint32_t __fastcall FUN_0041a70d(int param_1)

{
  return *(uint32_t *)(param_1 + 0x98);
}


void FUN_0041a799(int *param_1,int param_2,int param_3)

{
  CWnd *this;
  int iVar1;
  uint uVar2;
  
  this = FUN_0041b5b1((int)param_1);
  if (param_3 == 0) {
    FUN_00416b2c(param_1,0,0,0,0,0,(-(uint)(param_2 != 0) & 0xffffffc0) + 0x80 | 0x17);
    (**(code **)(*param_1 + 0xcc))(param_2);
    if ((param_2 != 0) || (iVar1 = FUN_0041b5c2(param_1), iVar1 == 0)) {
      (**(code **)(*(int *)this + 0xd0))(0);
    }
  }
  else {
    (**(code **)(*param_1 + 0xcc))(param_2);
    *(uint *)(this + 0xb8) = *(uint *)(this + 0xb8) | 0xc;
  }
  iVar1 = FUN_0041b5c2(param_1);
  if (iVar1 == 0) {
    return;
  }
  if ((int *)param_1[0x1c] == (int *)0x0) {
    uVar2 = (uint)(param_2 != 0);
  }
  else {
    uVar2 = (**(code **)(*(int *)param_1[0x1c] + 0xe8))();
  }
  if ((uVar2 == 1) && (param_2 != 0)) {
    *(uint32_t *)(this + 0x88) = 0xffffffff;
    if (param_3 == 0) {
      iVar1 = 8;
LAB_0041a874:
      FUN_00416b7b(this,iVar1);
      return;
    }
    *(uint32_t *)(this + 0x88) = 8;
  }
  else {
    if (uVar2 == 0) {
      *(uint32_t *)(this + 0x88) = 0xffffffff;
      if (param_3 != 0) {
        *(uint32_t *)(this + 0x88) = 0;
        return;
      }
      iVar1 = 0;
      goto LAB_0041a874;
    }
    if (param_3 != 0) {
      return;
    }
  }
  (**(code **)(*(int *)this + 0xd0))(0);
  return;
}



void __thiscall FUN_0041a894(void *this,int param_1,uint32_t param_2,int param_3)

{
  int iVar1;
  HMENU pHVar2;
  HMENU pHVar3;
  uint uVar4;
  UINT UVar5;
  int nPos;
  CCmdUI local_30 [4];
  UINT local_2c;
  uint local_28;
  int local_24;
  int local_20;
  uint local_10;
  int local_c;
  int *local_8;
  
  local_8 = this;
  FUN_004182fa(*(HWND *)((int)this + 0x1c));
  if (param_3 == 0) {
    CCmdUI::CCmdUI(local_30);
    local_24 = param_1;
    iVar1 = FUN_0041bc33();
    if (*(int *)(iVar1 + 0x54) == *(int *)(param_1 + 4)) {
      local_c = param_1;
    }
    else {
      pHVar2 = GetMenu(*(HWND *)((int)this + 0x1c));
      if (((pHVar2 != (HMENU)0x0) && (iVar1 = FUN_00415770((int)this), iVar1 != 0)) &&
         (pHVar2 = GetMenu(*(HWND *)(iVar1 + 0x1c)), pHVar2 != (HMENU)0x0)) {
        iVar1 = GetMenuItemCount(pHVar2);
        nPos = 0;
        if (0 < iVar1) {
          do {
            pHVar3 = GetSubMenu(pHVar2,nPos);
            if (pHVar3 == *(HMENU *)(param_1 + 4)) {
              local_c = FUN_00416e21();
              break;
            }
            nPos = nPos + 1;
          } while (nPos < iVar1);
        }
      }
    }
    local_10 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
    local_28 = 0;
    if (local_10 != 0) {
      do {
        local_2c = GetMenuItemID(*(HMENU *)(param_1 + 4),local_28);
        uVar4 = local_10;
        if (local_2c != 0) {
          if (local_2c == 0xffffffff) {
            GetSubMenu(*(HMENU *)(param_1 + 4),local_28);
            local_20 = FUN_00416e21();
            uVar4 = local_10;
            if (((local_20 == 0) ||
                (local_2c = GetMenuItemID(*(HMENU *)(local_20 + 4),0), uVar4 = local_10,
                local_2c == 0)) || (local_2c == 0xffffffff)) goto LAB_0041a9e3;
            iVar1 = 0;
          }
          else {
            local_20 = 0;
            if ((local_8[0xf] == 0) || (0xefff < local_2c)) {
              iVar1 = 0;
            }
            else {
              iVar1 = 1;
            }
          }
          FUN_00412450(local_30,local_8,iVar1);
          uVar4 = GetMenuItemCount(*(HMENU *)(param_1 + 4));
          if (uVar4 < local_10) {
            local_28 = local_28 + (uVar4 - local_10);
            while ((local_28 < uVar4 &&
                   (UVar5 = GetMenuItemID(*(HMENU *)(param_1 + 4),local_28), UVar5 == local_2c))) {
              local_28 = local_28 + 1;
            }
          }
        }
LAB_0041a9e3:
        local_10 = uVar4;
        local_28 = local_28 + 1;
      } while (local_28 < local_10);
    }
  }
  return;
}



void __thiscall FUN_0041a9f9(void *this,uint param_1,uint param_2)

{
  CWnd *pCVar1;
  int iVar2;
  
  pCVar1 = FUN_0041579c(this);
  if (param_2 == 0xffff) {
    *(uint *)((int)this + 0x24) = *(uint *)((int)this + 0x24) & 0xffffffbf;
    if (*(int *)(pCVar1 + 0x50) == 0) {
      *(uint32_t *)((int)this + 0x90) = 0xe001;
    }
    else {
      *(uint32_t *)((int)this + 0x90) = 0xe002;
    }
    SendMessageA(*(HWND *)((int)this + 0x1c),0x362,*(WPARAM *)((int)this + 0x90),0);
    iVar2 = (**(code **)(*(int *)this + 0xdc))();
    if (iVar2 != 0) {
      UpdateWindow(*(HWND *)(iVar2 + 0x1c));
    }
    goto LAB_0041aab1;
  }
  if ((param_1 == 0) || ((param_2 & 0x810) != 0)) {
    *(uint32_t *)((int)this + 0x90) = 0;
  }
  else {
    if ((param_1 < 0xf000) || (0xf1ef < param_1)) {
      if (0xfeff < param_1) {
        *(uint32_t *)((int)this + 0x90) = 0xef1f;
        goto LAB_0041aaad;
      }
    }
    else {
      param_1 = (param_1 - 0xf000 >> 4) + 0xef00;
    }
    *(uint *)((int)this + 0x90) = param_1;
  }
LAB_0041aaad:
  *(uint *)(pCVar1 + 0x24) = *(uint *)(pCVar1 + 0x24) | 0x40;
LAB_0041aab1:
  if (*(int *)((int)this + 0x90) != *(int *)((int)this + 0x94)) {
    GetParent(*(HWND *)((int)this + 0x1c));
    pCVar1 = FUN_004140eb();
    if (pCVar1 != (CWnd *)0x0) {
      PostMessageA(*(HWND *)((int)this + 0x1c),0x36a,0,0);
    }
  }
  return;
}



uint32_t FUN_0041ab4f(void)

{
  uint32_t uVar1;
  int iVar2;
  CWnd *pCVar3;
  int *extraout_ECX;
  LPCSTR pCVar4;
  int unaff_EBP;
  
  FUN_004037f0();
  extraout_ECX[9] = extraout_ECX[9] & 0xffffffbf;
  *(int *)(unaff_EBP + -0x18) = extraout_ECX[0x25];
  iVar2 = (**(code **)(*extraout_ECX + 0xdc))();
  pCVar4 = (LPCSTR)0x0;
  *(int *)(unaff_EBP + -0x14) = iVar2;
  if (iVar2 == 0) {
    iVar2 = *(int *)(unaff_EBP + 8);
  }
  else {
    FUN_0041251c((uint32_t *)(unaff_EBP + -0x10));
    *(uint32_t *)(unaff_EBP + -4) = 0;
    if (*(int *)(unaff_EBP + 0xc) == 0) {
      iVar2 = *(int *)(unaff_EBP + 8);
      if (iVar2 != 0) {
        if ((iVar2 == 0xef06) && (extraout_ECX[0x27] != 0)) {
          iVar2 = 0xf005;
        }
        (**(code **)(*extraout_ECX + 0xcc))(iVar2,unaff_EBP + -0x10);
        pCVar4 = *(LPCSTR *)(unaff_EBP + -0x10);
      }
    }
    else {
      pCVar4 = *(LPCSTR *)(unaff_EBP + 0xc);
      iVar2 = *(int *)(unaff_EBP + 8);
    }
    FUN_00416b05(*(void **)(unaff_EBP + -0x14),pCVar4);
    pCVar3 = FUN_004156e7(*(int *)(unaff_EBP + -0x14));
    if (pCVar3 != (CWnd *)0x0) {
      *(int *)(pCVar3 + 0x94) = iVar2;
      *(int *)(pCVar3 + 0x90) = iVar2;
    }
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00412667((int *)(unaff_EBP + -0x10));
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  uVar1 = *(uint32_t *)(unaff_EBP + -0x18);
  extraout_ECX[0x25] = iVar2;
  extraout_ECX[0x24] = iVar2;
  return uVar1;
}



void __thiscall FUN_0041ac28(void *this,int param_1)

{
  FUN_00416234(this);
  if ((param_1 == 2) && (*(WPARAM *)((int)this + 0x90) != *(WPARAM *)((int)this + 0x94))) {
    FUN_0041ac59(this,*(WPARAM *)((int)this + 0x90));
  }
  return;
}



void __thiscall FUN_0041ac59(void *this,WPARAM param_1)

{
  SendMessageA(*(HWND *)((int)this + 0x1c),0x362,param_1,0);
  return;
}



void FUN_0041ac70(void)

{
  uint32_t *puVar1;
  int *piVar2;
  int iVar3;
  CWnd *pCVar4;
  int extraout_ECX;
  int unaff_EBP;
  uint32_t *puVar5;
  
  FUN_004037f0();
  FUN_0041117b((void *)(unaff_EBP + -0x28),10);
  *(uint32_t *)(unaff_EBP + -4) = 0;
  puVar5 = *(uint32_t **)(extraout_ECX + 0x70);
  while (puVar5 != (uint32_t *)0x0) {
    puVar1 = (uint32_t *)*puVar5;
    piVar2 = (int *)puVar5[2];
    iVar3 = (**(code **)(*piVar2 + 0xd8))();
    puVar5 = puVar1;
    if (iVar3 != 0) {
      CPtrList::AddTail((CPtrList *)(unaff_EBP + -0x28),piVar2);
    }
  }
  puVar5 = *(uint32_t **)(unaff_EBP + -0x24);
  while (puVar5 != (uint32_t *)0x0) {
    puVar1 = (uint32_t *)*puVar5;
    piVar2 = (int *)puVar5[2];
    puVar5 = puVar1;
    if (piVar2[0x1e] == 0) {
      (**(code **)(*piVar2 + 0x60))();
    }
    else {
      pCVar4 = FUN_004156e7((int)piVar2);
      (**(code **)(*(int *)pCVar4 + 0x60))();
    }
  }
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  FUN_004111da();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



uint32_t FUN_0041ad9b(void)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t uVar3;
  uint uVar4;
  HWND hWnd;
  int unaff_EBP;
  
  FUN_004037f0();
  iVar2 = FUN_00412284();
  if (iVar2 == 0) {
    FUN_0041251c((uint32_t *)(unaff_EBP + -0x10));
    puVar1 = *(uint32_t **)(unaff_EBP + 0xc);
    iVar2 = puVar1[2];
    hWnd = (HWND)puVar1[1];
    *(uint32_t *)(unaff_EBP + -4) = 0;
    if (((iVar2 == -0x208) && ((*(byte *)(puVar1 + 0x19) & 1) != 0)) ||
       ((iVar2 == -0x212 && ((*(byte *)(puVar1 + 0x2d) & 1) != 0)))) {
      uVar4 = GetDlgCtrlID(hWnd);
      hWnd = (HWND)(uVar4 & 0xffff);
    }
    if (hWnd != (HWND)0x0) {
      FUN_00416cfe((UINT)hWnd,(LPSTR)(unaff_EBP + -0x110),0x100);
      FUN_00416d25((int *)(unaff_EBP + -0x10),(byte *)(unaff_EBP + -0x110),1,'\n');
    }
    if (puVar1[2] == -0x208) {
      lstrcpynA((LPSTR)(puVar1 + 4),*(LPCSTR *)(unaff_EBP + -0x10),0x50);
    }
    else {
      FUN_00412a71((LPWSTR)(puVar1 + 4),*(LPCSTR *)(unaff_EBP + -0x10),0x50);
    }
    **(uint32_t **)(unaff_EBP + 0x10) = 0;
    SetWindowPos((HWND)*puVar1,(HWND)0x0,0,0,0,0,0x213);
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    FUN_00412667((int *)(unaff_EBP + -0x10));
    uVar3 = 1;
  }
  else {
    uVar3 = 0;
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return uVar3;
}



void __thiscall FUN_0041aedd(void *this,int *param_1)

{
  void *pvVar1;
  
  pvVar1 = (void *)FUN_00402a20();
  if (pvVar1 == this) {
    (**(code **)(*param_1 + 4))(*(int *)((int)this + 0x50) != 0);
  }
  else {
    param_1[7] = 1;
  }
  return;
}



void __thiscall FUN_0041af50(void *this,LPCSTR param_1)

{
  uint uVar1;
  int iVar2;
  LPCSTR pCVar3;
  int iVar4;
  CHAR local_208 [516];
  
  uVar1 = FUN_00416a9d((int)this);
  if ((uVar1 & 0x4000) == 0) {
    lstrcpyA(local_208,*(LPCSTR *)((int)this + 0xac));
    if (param_1 != (LPCSTR)0x0) {
      lstrcatA(local_208," - ");
      lstrcatA(local_208,param_1);
      iVar4 = *(int *)((int)this + 0x40);
      if (0 < iVar4) {
        pCVar3 = ":%d";
        iVar2 = lstrlenA(local_208);
        wsprintfA(local_208 + iVar2,pCVar3,iVar4);
      }
    }
  }
  else {
    local_208[0] = '\0';
    if (param_1 != (LPCSTR)0x0) {
      lstrcpyA(local_208,param_1);
      iVar4 = *(int *)((int)this + 0x40);
      if (0 < iVar4) {
        pCVar3 = ":%d";
        iVar2 = lstrlenA(local_208);
        wsprintfA(local_208 + iVar2,pCVar3,iVar4);
      }
      lstrcatA(local_208," - ");
    }
    lstrcatA(local_208,*(LPCSTR *)((int)this + 0xac));
  }
  FUN_00418289(*(HWND *)((int)this + 0x1c),local_208);
  return;
}



void __thiscall FUN_0041b04d(void *this,int param_1,int *param_2)

{
  uint32_t *puVar1;
  int *piVar2;
  uint32_t *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  HWND pHVar8;
  HMENU pHVar9;
  HWND hWnd;
  HWND unaff_retaddr;
  uint uStack_c;
  
  iVar4 = (**(code **)(*(int *)this + 200))();
  if ((param_1 != 0) && (*(int **)(iVar4 + 0x68) != (int *)0x0)) {
    (**(code **)(**(int **)(iVar4 + 0x68) + 100))(0);
  }
  uStack_c = 0;
  puVar3 = *(uint32_t **)((int)this + 0x70);
  while (puVar3 != (uint32_t *)0x0) {
    puVar1 = (uint32_t *)*puVar3;
    piVar2 = (int *)puVar3[2];
    uVar5 = GetDlgCtrlID((HWND)piVar2[7]);
    uVar5 = uVar5 & 0xffff;
    puVar3 = puVar1;
    if ((0xe7ff < uVar5) && (uVar5 < 0xe820)) {
      uVar6 = 1 << ((byte)uVar5 & 0x1f);
      iVar7 = (**(code **)(*piVar2 + 0xd0))();
      if (iVar7 != 0) {
        uStack_c = uStack_c | uVar6;
      }
      iVar7 = (**(code **)(*piVar2 + 0xd8))();
      if ((iVar7 == 0) || (uVar5 != 0xe81f)) {
        FUN_0041a799(piVar2,param_2[2] & uVar6,1);
      }
    }
  }
  param_2[2] = uStack_c;
  if (param_1 == 0) {
    *(uint32_t *)((int)this + 0x9c) = 0;
    pHVar8 = GetDlgItem(*(HWND *)((int)this + 0x1c),0xea21);
    if (pHVar8 != (HWND)0x0) {
      hWnd = GetDlgItem(*(HWND *)((int)this + 0x1c),0xe900);
      if (hWnd != (HWND)0x0) {
        SetWindowLongA(hWnd,-0xc,0xea21);
      }
      SetWindowLongA(pHVar8,-0xc,0xe900);
    }
    if (param_2[1] != 0) {
      InvalidateRect(*(HWND *)((int)this + 0x1c),(RECT *)0x0,1);
      SetMenu(*(HWND *)((int)this + 0x1c),(HMENU)param_2[1]);
    }
    if (*(int **)(iVar4 + 0x68) != (int *)0x0) {
      (**(code **)(**(int **)(iVar4 + 0x68) + 100))(1);
    }
    (**(code **)(*(int *)this + 0xd0))(1);
    if (*param_2 != 0xe900) {
      unaff_retaddr = GetDlgItem(*(HWND *)((int)this + 0x1c),*param_2);
    }
    ShowWindow(unaff_retaddr,5);
    *(int *)((int)this + 0x48) = param_2[5];
    FUN_00419b0f(this,1);
  }
  else {
    *(int *)((int)this + 0x9c) = param_2[4];
    FUN_00419b0f(this,0);
    pHVar8 = GetDlgItem(*(HWND *)((int)this + 0x1c),*param_2);
    ShowWindow(pHVar8,0);
    pHVar9 = GetMenu(*(HWND *)((int)this + 0x1c));
    param_2[1] = (int)pHVar9;
    if (pHVar9 != (HMENU)0x0) {
      InvalidateRect(*(HWND *)((int)this + 0x1c),(RECT *)0x0,1);
      SetMenu(*(HWND *)((int)this + 0x1c),(HMENU)0x0);
      *(uint *)((int)this + 0xb8) = *(uint *)((int)this + 0xb8) & 0xfffffffe;
    }
    param_2[5] = *(int *)((int)this + 0x48);
    *(uint32_t *)((int)this + 0x48) = 0;
    FUN_004196d3(this,(LPCSTR)0x7915);
    if (*param_2 != 0xe900) {
      pHVar8 = GetDlgItem(*(HWND *)((int)this + 0x1c),0xe900);
    }
    if (pHVar8 != (HWND)0x0) {
      SetWindowLongA(pHVar8,-0xc,0xea21);
    }
  }
  return;
}



void __fastcall FUN_0041b27c(int *param_1)

{
  if ((*(byte *)(param_1 + 0x2e) & 1) != 0) {
    (**(code **)(*param_1 + 0xec))(param_1[0x2a]);
  }
  if ((*(byte *)(param_1 + 0x2e) & 2) != 0) {
    (**(code **)(*param_1 + 0xe8))(1);
  }
  if ((param_1[0x2e] & 8U) != 0) {
    (**(code **)(*param_1 + 0xd0))(param_1[0x2e] & 4);
    UpdateWindow((HWND)param_1[7]);
  }
  if (param_1[0x24] != param_1[0x25]) {
    FUN_0041ac59(param_1,param_1[0x24]);
  }
  param_1[0x2e] = 0;
  return;
}



void __thiscall FUN_0041b2ee(void *this,int param_1)

{
  uint uVar1;
  tagRECT local_14;
  
  if (*(int *)((int)this + 0xb0) == 0) {
    *(uint32_t *)((int)this + 0xb0) = 1;
    if ((*(uint *)((int)this + 0xb8) & 4) != 0) {
      param_1 = 1;
    }
    *(uint *)((int)this + 0xb8) = *(uint *)((int)this + 0xb8) & 0xfffffff3;
    if ((param_1 != 0) && (*(int **)((int)this + 0x68) != (int *)0x0)) {
      (**(code **)(**(int **)((int)this + 0x68) + 0x58))();
    }
    uVar1 = FUN_00416a9d((int)this);
    if ((uVar1 & 0x2000) == 0) {
      FUN_00415b53(this,0,0xffff,0xe900,2,(LPRECT)((int)this + 0x58),(int *)0x0,1);
    }
    else {
      local_14.right = 0x7fff;
      local_14.bottom = 0x7fff;
      local_14.left = 0;
      local_14.top = 0;
      FUN_00415b53(this,0,0xffff,0xe900,1,&local_14,&local_14.left,0);
      FUN_00415b53(this,0,0xffff,0xe900,2,(LPRECT)((int)this + 0x58),&local_14.left,1);
      (**(code **)(*(int *)this + 0x68))(&local_14,0);
      FUN_00416b2c(this,0,0,0,local_14.right - local_14.left,local_14.bottom - local_14.top,0x16);
    }
    *(uint32_t *)((int)this + 0xb0) = 0;
  }
  return;
}



uint32_t __thiscall FUN_0041b3db(void *this,int param_1,RECT *param_2)

{
  BOOL BVar1;
  
  if (param_1 == 1) {
    FUN_00415b53(this,0,0xffff,0xe900,1,param_2,(int *)0x0,1);
  }
  else if ((param_1 != 2) && (param_1 == 3)) {
    if (param_2 == (RECT *)0x0) {
      if ((((*(int *)((int)this + 0x58) == 0) && (*(int *)((int)this + 0x60) == 0)) &&
          (*(int *)((int)this + 0x5c) == 0)) && (*(int *)((int)this + 100) == 0)) {
        return 0;
      }
      SetRectEmpty((LPRECT)((int)this + 0x58));
    }
    else {
      BVar1 = EqualRect((RECT *)((int)this + 0x58),param_2);
      if (BVar1 != 0) {
        return 0;
      }
      CopyRect((RECT *)((int)this + 0x58),param_2);
    }
  }
  return 1;
}



void __thiscall FUN_0041b455(void *this,int param_1)

{
  FUN_00414040(this);
  if (param_1 != 1) {
    (**(code **)(*(int *)this + 0xd0))(1);
  }
  return;
}



LRESULT __thiscall FUN_0041b48a(void *this,int param_1,LRESULT param_2)

{
  SHORT SVar1;
  uint uVar2;
  HWND hWnd;
  HWND pHVar3;
  LRESULT LVar4;
  uint uVar5;
  
  SVar1 = GetKeyState(0x11);
  if (SVar1 < 0) {
    uVar5 = 8;
  }
  else {
    uVar5 = 0;
  }
  SVar1 = GetKeyState(0x10);
  if (SVar1 < 0) {
    uVar2 = 4;
  }
  else {
    uVar2 = 0;
  }
  hWnd = GetFocus();
  pHVar3 = GetDesktopWindow();
  if (hWnd == (HWND)0x0) {
    param_2 = SendMessageA(*(HWND *)((int)this + 0x1c),0x20a,param_1 << 0x10 | uVar5 | uVar2,param_2
                          );
  }
  else {
    LVar4 = param_2;
    do {
      param_2 = LVar4;
      LVar4 = SendMessageA(hWnd,0x20a,param_1 << 0x10 | uVar5 | uVar2,param_2);
      hWnd = GetParent(hWnd);
      if (LVar4 != 0) {
        return LVar4;
      }
      if (hWnd == (HWND)0x0) {
        return 0;
      }
      param_2 = 0;
      LVar4 = 0;
    } while (hWnd != pHVar3);
  }
  return param_2;
}


CWnd * __fastcall FUN_0041b5b1(int param_1)

{
  CWnd *pCVar1;
  
  pCVar1 = FUN_004156e7(param_1);
  if (pCVar1 == (CWnd *)0x0) {
    pCVar1 = *(CWnd **)(param_1 + 0x6c);
  }
  return pCVar1;
}



int __fastcall FUN_0041b5c2(int *param_1)

{
  int iVar1;
  
  iVar1 = (**(code **)(*param_1 + 0xd8))();
  if (iVar1 != 0) {
    return param_1[0x1e];
  }
  if ((param_1[0x1c] != 0) && (*(int *)(param_1[0x1c] + 0x78) != 0)) {
    return 1;
  }
  return 0;
}



void FUN_0041b5f6(void)

{
  return;
}



void FUN_0041b5f7(void)

{
  FUN_004030e0(0x41b603);
  return;
}



void __fastcall FUN_0041b60e(uint32_t *param_1)

{
  *param_1 = &PTR_FUN_0041e91c;
  return;
}



HLOCAL __thiscall FUN_0041b617(void *this,byte param_1)

{
  FUN_0041cdee();
  if ((param_1 & 1) != 0) {
    FUN_0041c289(this);
  }
  return this;
}



uint32_t * FUN_0041b632(void)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  HANDLE pvVar4;
  DWORD DVar5;
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_0041b99a();
  *extraout_ECX = &PTR_LAB_0041e92c;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (*(int *)(unaff_EBP + 8) == 0) {
    extraout_ECX[0x1e] = 0;
  }
  else {
    pcVar1 = FUN_00403810(*(char **)(unaff_EBP + 8));
    extraout_ECX[0x1e] = pcVar1;
  }
  iVar2 = FUN_0041bf1f();
  iVar3 = FUN_0041c645((void *)(iVar2 + 0x1070),&LAB_0041b94a);
  *(uint32_t **)(iVar3 + 4) = extraout_ECX;
  pvVar4 = GetCurrentThread();
  extraout_ECX[10] = pvVar4;
  DVar5 = GetCurrentThreadId();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  extraout_ECX[0xb] = DVar5;
  *(uint32_t **)(iVar2 + 4) = extraout_ECX;
  extraout_ECX[0x1a] = 0;
  extraout_ECX[0x23] = 0;
  extraout_ECX[0x24] = 0;
  extraout_ECX[0x1f] = 0;
  extraout_ECX[0x22] = 0;
  extraout_ECX[0x2a] = 0;
  extraout_ECX[0x20] = 0;
  *(undefined2 *)((int)extraout_ECX + 0xb2) = 0;
  *(undefined2 *)(extraout_ECX + 0x2c) = 0;
  extraout_ECX[0x1c] = 0;
  extraout_ECX[0x2b] = 0;
  extraout_ECX[0x28] = 0;
  extraout_ECX[0x29] = 0;
  extraout_ECX[0x25] = 0;
  extraout_ECX[0x26] = 0;
  extraout_ECX[0x2d] = 0;
  extraout_ECX[0x2f] = 0;
  extraout_ECX[0x21] = 0;
  extraout_ECX[0x2e] = 0x200;
  return extraout_ECX;
}



uint * __thiscall FUN_0041b71c(void *this,byte param_1)

{
  FUN_0041b77c();
  if ((param_1 & 1) != 0) {
    FUN_0041250b(this);
  }
  return this;
}



void FUN_0041b77c(void)

{
  int *piVar1;
  int iVar2;
  CWinThread *this;
  int unaff_EBP;
  
  FUN_004037f0();
  *(CWinThread **)(unaff_EBP + -0x10) = this;
  *(uint ***)this = &PTR_LAB_0041e92c;
  piVar1 = *(int **)(this + 0x80);
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(1);
  }
  if (*(int **)(this + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xa8) + 0x14))(1);
  }
  iVar2 = FUN_0041bf1f();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    if (DAT_00428dd4 != (int *)0x0) {
      (**(code **)(*DAT_00428dd4 + 4))(1);
      DAT_00428dd4 = (int *)0x0;
    }
    if (DAT_00428dd0 != (int *)0x0) {
      (**(code **)(*DAT_00428dd0 + 4))(1);
      DAT_00428dd0 = (int *)0x0;
    }
  }
  if (*(HGLOBAL *)(this + 0x94) != (HGLOBAL)0x0) {
    FUN_00418371(*(HGLOBAL *)(this + 0x94));
  }
  if (*(HGLOBAL *)(this + 0x98) != (HGLOBAL)0x0) {
    FUN_00418371(*(HGLOBAL *)(this + 0x98));
  }
  if (*(ATOM *)(this + 0xb0) != 0) {
    GlobalDeleteAtom(*(ATOM *)(this + 0xb0));
  }
  if (*(ATOM *)(this + 0xb2) != 0) {
    GlobalDeleteAtom(*(ATOM *)(this + 0xb2));
  }
  if (*(int **)(this + 0xac) != (int *)0x0) {
    (**(code **)(**(int **)(this + 0xac) + 4))(1);
  }
  iVar2 = FUN_0041bf1f();
  if (*(int *)(iVar2 + 0x10) == *(int *)(this + 0x78)) {
    *(uint32_t *)(iVar2 + 0x10) = 0;
  }
  if (*(CWinThread **)(iVar2 + 4) == this) {
    *(uint32_t *)(iVar2 + 4) = 0;
  }
  FUN_004039d0(*(uint **)(this + 0x78));
  FUN_004039d0(*(uint **)(this + 0x7c));
  FUN_004039d0(*(uint **)(this + 0x88));
  FUN_004039d0(*(uint **)(this + 0x8c));
  FUN_004039d0(*(uint **)(this + 0x90));
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  CWinThread::~CWinThread(this);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}



void __fastcall FUN_0041b8b1(void *param_1)

{
  int iVar1;
  
  if (*(int **)((int)param_1 + 0xa8) != (int *)0x0) {
    (**(code **)(**(int **)((int)param_1 + 0xa8) + 0x10))();
  }
  if (*(int *)((int)param_1 + 0xb4) != 0) {
    iVar1 = FUN_0041bf1f();
    FUN_0041928f(param_1,"Settings","PreviewPages",*(uint32_t *)(*(int *)(iVar1 + 4) + 0xb4));
  }
  return;
}



uint32_t __fastcall FUN_0041b8ed(void *param_1)

{
  int iVar1;
  
  if ((*(int *)((int)param_1 + 0xac) == 0) || (*(int *)(*(int *)((int)param_1 + 0xac) + 0x10) != 5))
  {
    iVar1 = FUN_0041bf1f();
    if (*(char *)(iVar1 + 0x14) == '\0') {
      FUN_0041b8b1(param_1);
    }
  }
  if (*(code **)((int)param_1 + 0xbc) != (code *)0x0) {
    (**(code **)((int)param_1 + 0xbc))();
  }
  return *(uint32_t *)((int)param_1 + 0x38);
}


void FUN_0041b934(void)

{
  FUN_004030e0(0x41b940);
  return;
}

uint32_t * FUN_0041b99a(void)

{
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  FUN_00411f34(extraout_ECX);
  *(uint32_t *)(unaff_EBP + -4) = 0;
  *extraout_ECX = &PTR_LAB_0041ea14;
  extraout_ECX[0x13] = 0;
  extraout_ECX[0x14] = 0;
  FUN_0041b9d7((int)extraout_ECX);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return extraout_ECX;
}



void __fastcall FUN_0041b9d7(int param_1)

{
  *(uint32_t *)(param_1 + 0x1c) = 0;
  *(uint32_t *)(param_1 + 0x20) = 0;
  *(uint32_t *)(param_1 + 0x28) = 0;
  *(uint32_t *)(param_1 + 0x2c) = 0;
  *(uint32_t *)(param_1 + 0x34) = 0;
  *(uint32_t *)(param_1 + 100) = 0;
  GetCursorPos((LPPOINT)(param_1 + 0x5c));
  *(uint32_t *)(param_1 + 0x58) = 0;
  *(uint32_t *)(param_1 + 0x54) = 0;
  *(uint32_t *)(param_1 + 0x24) = 1;
  return;
}



HLOCAL __thiscall FUN_0041ba6d(void *this,byte param_1)

{
  FUN_0041caca();
  if ((param_1 & 1) != 0) {
    FUN_0041c289(this);
  }
  return this;
}



HLOCAL __thiscall FUN_0041ba88(void *this,byte param_1)

{
  FUN_0041cb11();
  if ((param_1 & 1) != 0) {
    FUN_0041c289(this);
  }
  return this;
}



void FUN_0041baa3(void)

{
  byte bVar1;
  LONG LVar2;
  uint uVar3;
  uint8_t *puVar4;
  int nWidth;
  int iVar5;
  int iVar6;
  uint8_t local_94 [132];
  int local_10;
  int local_c;
  byte *local_8;
  
  LVar2 = GetMenuCheckMarkDimensions();
  nWidth = (int)(short)LVar2;
  local_10 = (int)(short)((uint)LVar2 >> 0x10);
  if (0x20 < nWidth) {
    nWidth = 0x20;
  }
  iVar5 = nWidth + 0xf >> 4;
  iVar6 = (iVar5 * 0x10 + (nWidth + -4) / 2) - nWidth;
  if (0xc < iVar6) {
    iVar6 = 0xc;
  }
  if (0x20 < local_10) {
    local_10 = 0x20;
  }
  _memset(local_94,0xff,0x80);
  local_8 = &DAT_0041eb80;
  local_c = 5;
  puVar4 = local_94 + (local_10 + -6 >> 1) * iVar5 * 2;
  do {
    bVar1 = *local_8;
    uVar3 = (uint)local_8 >> 0x10;
    local_8 = local_8 + 1;
    uVar3 = ~(CONCAT22((short)uVar3,(ushort)bVar1) << ((byte)iVar6 & 0x1f));
    puVar4[1] = (char)uVar3;
    *puVar4 = (char)(uVar3 >> 8);
    puVar4 = puVar4 + iVar5 * 2;
    local_c = local_c + -1;
  } while (local_c != 0);
  DAT_0042abe8 = CreateBitmap(nWidth,local_10,1,1,local_94);
  if (DAT_0042abe8 == (HBITMAP)0x0) {
    DAT_0042abe8 = LoadBitmapA((HINSTANCE)0x0,(LPCSTR)0x7fe3);
  }
  return;
}



void __fastcall FUN_0041bb87(uint32_t *param_1)

{
  param_1[0x35] = 0xffffffff;
  param_1[0x41] = 0xffffffff;
  *param_1 = &PTR_FUN_0041ec2c;
  return;
}



HLOCAL __thiscall FUN_0041bb9e(void *this,byte param_1)

{
  FUN_0041bbb9();
  if ((param_1 & 1) != 0) {
    FUN_0041c289(this);
  }
  return this;
}



void FUN_0041bbb9(void)

{
  int *piVar1;
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0041ec2c;
  piVar1 = (int *)extraout_ECX[0x33];
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x60))();
    if ((int *)extraout_ECX[0x33] != (int *)0x0) {
      (**(code **)(*(int *)extraout_ECX[0x33] + 4))(1);
    }
  }
  if ((HHOOK)extraout_ECX[0xc] != (HHOOK)0x0) {
    UnhookWindowsHookEx((HHOOK)extraout_ECX[0xc]);
  }
  if ((HHOOK)extraout_ECX[0xb] != (HHOOK)0x0) {
    UnhookWindowsHookEx((HHOOK)extraout_ECX[0xb]);
  }
  if ((uint *)extraout_ECX[3] != (uint *)0x0) {
    FUN_004039d0((uint *)extraout_ECX[3]);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e924;
  return;
}



void FUN_0041bc33(void)

{
  FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
  return;
}



void FUN_0041bc4d(void)

{
  return;
}



void FUN_0041bc4e(void)

{
  FUN_004030e0(0x41bc5a);
  return;
}



void __thiscall FUN_0041bc64(void *this,uint8_t param_1)

{
  *(uint32_t *)((int)this + 0x1c) = 0;
  *(uint32_t *)((int)this + 0x20) = 0;
  *(uint32_t *)((int)this + 0x24) = 0;
  *(uint32_t *)((int)this + 0x28) = 0;
  *(uint32_t *)((int)this + 0x103c) = 0;
  *(uint32_t *)((int)this + 0x1040) = 0;
  *(uint32_t *)((int)this + 0x104c) = 0xffffffff;
  *(uint32_t *)((int)this + 0x1050) = 0;
  *(uint32_t *)((int)this + 0x1064) = 0;
  *(uint32_t *)((int)this + 0x1068) = 0;
  *(uint ***)this = &PTR_FUN_0041ec34;
  *(uint32_t *)((int)this + 0x28) = 0x1c;
  *(uint32_t *)((int)this + 0x20) = 0x14;
  *(undefined2 *)((int)this + 0x18) = 0;
  *(uint8_t *)((int)this + 0x14) = param_1;
  *(uint32_t *)((int)this + 0x30) = 1;
  *(uint32_t *)((int)this + 0x1040) = 0x18;
  return;
}



HLOCAL __thiscall FUN_0041bcc8(void *this,byte param_1)

{
  FUN_0041bce3();
  if ((param_1 & 1) != 0) {
    FUN_0041c289(this);
  }
  return this;
}



void FUN_0041bce3(void)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x18) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0041ec34;
  puVar1 = (uint32_t *)extraout_ECX[0x411];
  *(uint32_t *)(unaff_EBP + -4) = 1;
  if (puVar1 != (uint32_t *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if (extraout_ECX[0x41b] != 0) {
    iVar2 = -(uint)(*(int *)(extraout_ECX[0x41b] + 0xc) != 0);
    *(int *)(unaff_EBP + -0x14) = iVar2;
    if (iVar2 != 0) {
      do {
        FUN_004114f9((void *)extraout_ECX[0x41b],(int *)(unaff_EBP + -0x14),
                     (int *)(unaff_EBP + -0x1c),(int *)(unaff_EBP + -0x10));
        if (*(uint32_t **)(unaff_EBP + -0x10) != extraout_ECX + 0x412) {
          FUN_0041250b(*(uint **)(unaff_EBP + -0x10));
        }
      } while (*(int *)(unaff_EBP + -0x14) != 0);
    }
    if ((int *)extraout_ECX[0x41b] != (int *)0x0) {
      (**(code **)(*(int *)extraout_ECX[0x41b] + 4))(1);
    }
  }
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_0041c6bc(extraout_ECX + 0x41c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e924;
  return;
}



void __fastcall thunk_FUN_0041c6bc(int *param_1)

{
  if ((*param_1 != 0) && (DAT_0042a820 != (void *)0x0)) {
    FUN_0041c3f1(DAT_0042a820,*param_1);
  }
  *param_1 = 0;
  return;
}



uint32_t * FUN_0041bd96(void)

{
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_LAB_0041e924;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  extraout_ECX[2] = 0;
  extraout_ECX[3] = 0;
  CMap<>(extraout_ECX + 0xc,10);
  *(uint8_t *)(unaff_EBP + -4) = 1;
  CMap<>(extraout_ECX + 0x13,10);
  *(uint8_t *)(unaff_EBP + -4) = 2;
  FUN_0041117b(extraout_ECX + 0x1a,10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_FUN_0041ec3c;
  extraout_ECX[3] = 0x54;
  extraout_ECX[10] = &LAB_004124b3;
  return extraout_ECX;
}



HLOCAL __thiscall FUN_0041be01(void *this,byte param_1)

{
  FUN_0041be1c();
  if ((param_1 & 1) != 0) {
    FUN_0041c289(this);
  }
  return this;
}



void FUN_0041be1c(void)

{
  uint *puVar1;
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0041ec3c;
  puVar1 = (uint *)extraout_ECX[5];
  *(uint32_t *)(unaff_EBP + -4) = 3;
  if (puVar1 != (uint *)0x0) {
    FUN_00402a8d();
    FUN_0041250b(puVar1);
  }
  puVar1 = (uint *)extraout_ECX[6];
  if (puVar1 != (uint *)0x0) {
    FUN_00402a8d();
    FUN_0041250b(puVar1);
  }
  puVar1 = (uint *)extraout_ECX[7];
  if (puVar1 != (uint *)0x0) {
    FUN_00402a8d();
    FUN_0041250b(puVar1);
  }
  puVar1 = (uint *)extraout_ECX[8];
  if (puVar1 != (uint *)0x0) {
    FUN_00402a8d();
    FUN_0041250b(puVar1);
  }
  puVar1 = (uint *)extraout_ECX[9];
  if (puVar1 != (uint *)0x0) {
    FUN_00402a8d();
    FUN_0041250b(puVar1);
  }
  if (extraout_ECX[0x1d] != 0) {
    do {
      puVar1 = (uint *)FUN_004112a4(extraout_ECX + 0x1a);
      FUN_0041250b(puVar1);
    } while (extraout_ECX[0x1d] != 0);
  }
  *(uint8_t *)(unaff_EBP + -4) = 2;
  FUN_004111da();
  *(uint8_t *)(unaff_EBP + -4) = 1;
  FUN_0041136c();
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_0041136c();
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e924;
  return;
}



void FUN_0041bf03(void)

{
  return;
}



void FUN_0041bf04(void)

{
  FUN_004030e0(0x41bf10);
  return;
}



void FUN_0041bf1f(void)

{
  int iVar1;
  
  iVar1 = FUN_0041c645(&DAT_00428ddc,&LAB_0041ba0f);
  if (*(int *)(iVar1 + 4) == 0) {
    FUN_0041c6da();
  }
  return;
}


HLOCAL __thiscall FUN_0041bfd3(void *this,byte param_1)

{
  thunk_FUN_0041bce3();
  if ((param_1 & 1) != 0) {
    FUN_0041c289(this);
  }
  return this;
}



void thunk_FUN_0041bce3(void)

{
  uint32_t *puVar1;
  int iVar2;
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x18) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0041ec34;
  puVar1 = (uint32_t *)extraout_ECX[0x411];
  *(uint32_t *)(unaff_EBP + -4) = 1;
  if (puVar1 != (uint32_t *)0x0) {
    (**(code **)*puVar1)(1);
  }
  if (extraout_ECX[0x41b] != 0) {
    iVar2 = -(uint)(*(int *)(extraout_ECX[0x41b] + 0xc) != 0);
    *(int *)(unaff_EBP + -0x14) = iVar2;
    if (iVar2 != 0) {
      do {
        FUN_004114f9((void *)extraout_ECX[0x41b],(int *)(unaff_EBP + -0x14),
                     (int *)(unaff_EBP + -0x1c),(int *)(unaff_EBP + -0x10));
        if (*(uint32_t **)(unaff_EBP + -0x10) != extraout_ECX + 0x412) {
          FUN_0041250b(*(uint **)(unaff_EBP + -0x10));
        }
      } while (*(int *)(unaff_EBP + -0x14) != 0);
    }
    if ((int *)extraout_ECX[0x41b] != (int *)0x0) {
      (**(code **)(*(int *)extraout_ECX[0x41b] + 4))(1);
    }
  }
  *(uint8_t *)(unaff_EBP + -4) = 0;
  FUN_0041c6bc(extraout_ECX + 0x41c);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e924;
  return;
}



uint32_t FUN_0041bfff(void)

{
  int iVar1;
  int iVar2;
  uint32_t uVar3;
  uint8_t *puVar4;
  
  if (DAT_0042abf4 == 0) {
    puVar4 = &LAB_0041ba43;
    iVar1 = FUN_0041c6da();
    if (*(int *)(iVar1 + 4) == 0) {
      *(code **)(iVar1 + 0xc) = FUN_0040d260;
      *(code **)(iVar1 + 0x10) = FUN_0040d2d0;
      *(code **)(iVar1 + 0x14) = FUN_0040d390;
      *(code **)(iVar1 + 0x18) = FUN_0040d510;
      *(uint8_t **)(iVar1 + 0x1c) = &LAB_0040d9b0;
      *(uint8_t **)(iVar1 + 0x20) = &LAB_0040d8b0;
      *(code **)(iVar1 + 0x24) = FUN_0040dc90;
      *(uint8_t **)(iVar1 + 0x28) = &LAB_0040d5b0;
      *(uint8_t **)(iVar1 + 0x2c) = &LAB_0040d6f0;
      iVar2 = FUN_0041bf1f();
      iVar2 = (**(code **)(iVar1 + 0xc))(*(uint32_t *)(iVar2 + 8),puVar4);
      if (iVar2 == 0) {
        *(uint32_t *)(iVar1 + 0xc) = 0;
        *(uint32_t *)(iVar1 + 0x10) = 0;
        *(uint32_t *)(iVar1 + 0x14) = 0;
        *(uint32_t *)(iVar1 + 0x18) = 0;
        *(uint32_t *)(iVar1 + 0x1c) = 0;
        *(uint32_t *)(iVar1 + 0x20) = 0;
        *(uint32_t *)(iVar1 + 0x24) = 0;
        *(uint32_t *)(iVar1 + 0x28) = 0;
        *(uint32_t *)(iVar1 + 0x2c) = 0;
      }
      *(uint32_t *)(iVar1 + 4) = 1;
    }
    if (*(int *)(iVar1 + 0x14) == 0) {
      uVar3 = 0;
    }
    else {
      iVar2 = FUN_0041bf1f();
      uVar3 = (**(code **)(iVar1 + 0x14))(*(uint32_t *)(iVar2 + 8));
    }
  }
  else {
    uVar3 = 1;
  }
  return uVar3;
}



void FUN_0041c149(void)

{
  FUN_00402bb3(&DAT_0042a788,0,0xf022);
  return;
}



void FUN_0041c15b(void)

{
  FUN_004030e0(0x41c167);
  return;
}



void FUN_0041c181(void)

{
  FUN_00402bdd(&DAT_0042a6f0,0,0xf024);
  return;
}



void FUN_0041c193(void)

{
  FUN_004030e0(0x41c19f);
  return;
}



void __thiscall FUN_0041c20d(void *this,int param_1)

{
  *(uint32_t *)(*(int *)((int)this + 4) + param_1) = *(uint32_t *)this;
  *(int *)this = param_1;
  return;
}



uint32_t __thiscall FUN_0041c220(void *this,int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)this;
  if (iVar2 == 0) {
    return 0;
  }
  if (iVar2 == param_1) {
    *(uint32_t *)this = *(uint32_t *)(*(int *)((int)this + 4) + param_1);
  }
  else {
    if (iVar2 == 0) {
      return 0;
    }
    do {
      iVar1 = *(int *)(iVar2 + *(int *)((int)this + 4));
      if (iVar1 == param_1) break;
      iVar2 = iVar1;
    } while (iVar1 != 0);
    if (iVar2 == 0) {
      return 0;
    }
    *(uint32_t *)(iVar2 + *(int *)((int)this + 4)) =
         *(uint32_t *)(param_1 + *(int *)((int)this + 4));
  }
  return 1;
}



HLOCAL FUN_0041c26b(SIZE_T param_1)

{
  HLOCAL pvVar1;
  
  pvVar1 = LocalAlloc(0x40,param_1);
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_00410e99();
  }
  return pvVar1;
}



void FUN_0041c289(HLOCAL param_1)

{
  if (param_1 != (HLOCAL)0x0) {
    LocalFree(param_1);
  }
  return;
}



DWORD * __fastcall FUN_0041c29d(DWORD *param_1)

{
  DWORD DVar1;
  
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[6] = 4;
  param_1[1] = 0;
  param_1[2] = 1;
  param_1[3] = 0;
  param_1[4] = 0;
  DVar1 = TlsAlloc();
  *param_1 = DVar1;
  if (DVar1 == 0xffffffff) {
    FUN_00410e99();
  }
  InitializeCriticalSection((LPCRITICAL_SECTION)(param_1 + 7));
  return param_1;
}



int __fastcall FUN_0041c2df(int param_1)

{
  LPCRITICAL_SECTION lpCriticalSection;
  uint *puVar1;
  byte *pbVar2;
  HGLOBAL pvVar3;
  HGLOBAL hMem;
  LPVOID pvVar4;
  int iVar5;
  int iVar6;
  
  lpCriticalSection = (LPCRITICAL_SECTION)(param_1 + 0x1c);
  EnterCriticalSection(lpCriticalSection);
  iVar5 = *(int *)(param_1 + 4);
  iVar6 = *(int *)(param_1 + 8);
  if ((iVar5 <= iVar6) || ((*(byte *)(*(int *)(param_1 + 0x10) + iVar6 * 8) & 1) != 0)) {
    iVar6 = 1;
    if (1 < iVar5) {
      pbVar2 = *(byte **)(param_1 + 0x10);
      do {
        pbVar2 = pbVar2 + 8;
        if ((*pbVar2 & 1) == 0) break;
        iVar6 = iVar6 + 1;
      } while (iVar6 < iVar5);
      if (iVar6 < iVar5) goto LAB_0041c3c3;
    }
    iVar5 = iVar5 + 0x20;
    if (*(LPCVOID *)(param_1 + 0x10) == (LPCVOID)0x0) {
      pvVar3 = GlobalAlloc(0x2002,iVar5 * 8);
    }
    else {
      pvVar3 = GlobalHandle(*(LPCVOID *)(param_1 + 0x10));
      GlobalUnlock(pvVar3);
      pvVar3 = GlobalReAlloc(pvVar3,iVar5 * 8,0x2002);
    }
    if (pvVar3 == (HGLOBAL)0x0) {
      hMem = GlobalHandle(*(LPCVOID *)(param_1 + 0x10));
      GlobalLock(hMem);
      LeaveCriticalSection(lpCriticalSection);
      FUN_00410e99();
    }
    pvVar4 = GlobalLock(pvVar3);
    _memset((void *)((int)pvVar4 + *(int *)(param_1 + 4) * 8),0,
            (*(int *)(param_1 + 4) * 0x1fffffff + iVar5) * 8);
    *(int *)(param_1 + 4) = iVar5;
    *(LPVOID *)(param_1 + 0x10) = pvVar4;
  }
LAB_0041c3c3:
  if (*(int *)(param_1 + 0xc) <= iVar6) {
    *(int *)(param_1 + 0xc) = iVar6 + 1;
  }
  puVar1 = (uint *)(*(int *)(param_1 + 0x10) + iVar6 * 8);
  *puVar1 = *puVar1 | 1;
  *(int *)(param_1 + 8) = iVar6 + 1;
  LeaveCriticalSection(lpCriticalSection);
  return iVar6;
}


void __thiscall FUN_0041c3f1(void *this,int param_1)

{
  uint *puVar1;
  int iVar2;
  uint32_t *puVar3;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  for (iVar2 = *(int *)((int)this + 0x14); iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
    if (param_1 < *(int *)(iVar2 + 8)) {
      puVar3 = *(uint32_t **)(*(int *)(iVar2 + 0xc) + param_1 * 4);
      if (puVar3 != (uint32_t *)0x0) {
        (**(code **)*puVar3)(1);
      }
      *(uint32_t *)(*(int *)(iVar2 + 0xc) + param_1 * 4) = 0;
    }
  }
  puVar1 = (uint *)(*(int *)((int)this + 0x10) + param_1 * 8);
  *puVar1 = *puVar1 & 0xfffffffe;
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}



void __thiscall FUN_0041c44e(void *this,int param_1,int param_2)

{
  uint32_t *lpTlsValue;
  HLOCAL pvVar1;
  
  lpTlsValue = TlsGetValue(*(DWORD *)this);
  if (lpTlsValue == (uint32_t *)0x0) {
LAB_0041c47c:
    lpTlsValue = FUN_0041c26b(0x10);
    if (lpTlsValue == (uint32_t *)0x0) {
      lpTlsValue = (uint32_t *)0x0;
    }
    else {
      *lpTlsValue = &PTR_FUN_0041f9b4;
    }
    lpTlsValue[2] = 0;
    lpTlsValue[3] = 0;
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
    FUN_0041c20d((void *)((int)this + 0x14),(int)lpTlsValue);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  }
  else {
    if ((param_1 < (int)lpTlsValue[2]) || (param_2 == 0)) goto LAB_0041c51e;
    if (lpTlsValue == (uint32_t *)0x0) goto LAB_0041c47c;
  }
  if ((HLOCAL)lpTlsValue[3] == (HLOCAL)0x0) {
    pvVar1 = LocalAlloc(0,*(int *)((int)this + 0xc) << 2);
  }
  else {
    pvVar1 = LocalReAlloc((HLOCAL)lpTlsValue[3],*(int *)((int)this + 0xc) << 2,2);
  }
  lpTlsValue[3] = pvVar1;
  if (pvVar1 == (HLOCAL)0x0) {
    FUN_00410e99();
  }
  _memset((void *)(lpTlsValue[3] + lpTlsValue[2] * 4),0,
          (lpTlsValue[2] * 0x3fffffff + *(int *)((int)this + 0xc)) * 4);
  lpTlsValue[2] = *(uint32_t *)((int)this + 0xc);
  TlsSetValue(*(DWORD *)this,lpTlsValue);
LAB_0041c51e:
  *(int *)(lpTlsValue[3] + param_1 * 4) = param_2;
  return;
}



uint32_t * __thiscall FUN_0041c531(void *this,byte param_1)

{
  FUN_0041c54c(this);
  if ((param_1 & 1) != 0) {
    FUN_0041c289(this);
  }
  return this;
}



void __fastcall FUN_0041c54c(uint32_t *param_1)

{
  *param_1 = &PTR_LAB_0041e924;
  return;
}



void __thiscall FUN_0041c553(void *this,uint32_t *param_1,int param_2)

{
  uint32_t *puVar1;
  bool bVar2;
  int iVar3;
  
  iVar3 = 1;
  bVar2 = true;
  if (1 < (int)param_1[2]) {
    do {
      if ((param_2 == 0) || (*(int *)(*(int *)((int)this + 0x10) + 4 + iVar3 * 8) == param_2)) {
        puVar1 = *(uint32_t **)(param_1[3] + iVar3 * 4);
        if (puVar1 != (uint32_t *)0x0) {
          (**(code **)*puVar1)(1);
        }
        *(uint32_t *)(param_1[3] + iVar3 * 4) = 0;
      }
      else if (*(int *)(param_1[3] + iVar3 * 4) != 0) {
        bVar2 = false;
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < (int)param_1[2]);
  }
  if (bVar2) {
    EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
    FUN_0041c220((void *)((int)this + 0x14),(int)param_1);
    LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
    LocalFree((HLOCAL)param_1[3]);
    if (param_1 != (uint32_t *)0x0) {
      (**(code **)*param_1)(1);
    }
    TlsSetValue(*(DWORD *)this,(LPVOID)0x0);
  }
  return;
}



void __thiscall FUN_0041c5ec(void *this,int param_1,int param_2)

{
  uint32_t *puVar1;
  uint32_t *puVar2;
  
  EnterCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  if (param_2 == 0) {
    puVar2 = TlsGetValue(*(DWORD *)this);
    if (puVar2 != (uint32_t *)0x0) {
      FUN_0041c553(this,puVar2,param_1);
    }
  }
  else {
    puVar2 = *(uint32_t **)((int)this + 0x14);
    while (puVar2 != (uint32_t *)0x0) {
      puVar1 = (uint32_t *)puVar2[1];
      FUN_0041c553(this,puVar2,param_1);
      puVar2 = puVar1;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)((int)this + 0x1c));
  return;
}



// WARNING: Removing unreachable block (ram,0x0041c66c)

int __thiscall FUN_0041c645(void *this,uint *param_1)

{
  int iVar1;
  LPVOID pvVar2;
  
  if (*(int *)this == 0) {
    if (DAT_0042a820 == (DWORD *)0x0) {
      DAT_0042a820 = FUN_0041c29d((DWORD *)&DAT_0042a828);
    }
    iVar1 = FUN_0041c2df((int)DAT_0042a820);
    *(int *)this = iVar1;
  }
  iVar1 = *(int *)this;
  pvVar2 = TlsGetValue(*DAT_0042a820);
  if ((pvVar2 == (LPVOID)0x0) || (*(int *)((int)pvVar2 + 8) <= iVar1)) {
    iVar1 = 0;
  }
  else {
    iVar1 = *(int *)(*(int *)((int)pvVar2 + 0xc) + iVar1 * 4);
  }
  if (iVar1 == 0) {
    iVar1 = (*(code *)param_1)();
    FUN_0041c44e(DAT_0042a820,*(int *)this,iVar1);
  }
  return iVar1;
}



void __fastcall FUN_0041c6bc(int *param_1)

{
  if ((*param_1 != 0) && (DAT_0042a820 != (void *)0x0)) {
    FUN_0041c3f1(DAT_0042a820,*param_1);
  }
  *param_1 = 0;
  return;
}



int FUN_0041c6da(void)

{
  int iVar1;
  int *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint8_t **)(unaff_EBP + -0x10) = &stack0xffffffe8;
  *(int **)(unaff_EBP + -0x14) = extraout_ECX;
  if (*extraout_ECX == 0) {
    FUN_0041c922(0x10);
    *(uint32_t *)(unaff_EBP + -4) = 0;
    if (*extraout_ECX == 0) {
      iVar1 = (**(code **)(unaff_EBP + 8))();
      *extraout_ECX = iVar1;
      iVar1 = FUN_0041c727();
      return iVar1;
    }
    *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
    FUN_0041c992(0x10);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *extraout_ECX;
}



uint * Catch_0041c70e(void)

{
  FUN_0041c992(0x10);
  FUN_004041a0(0,0);
  return &DAT_0041c724;
}



uint32_t FUN_0041c727(void)

{
  int unaff_EBP;
  uint32_t *unaff_ESI;
  
  *(uint32_t *)(unaff_EBP + -4) = 0xffffffff;
  FUN_0041c992(0x10);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return *unaff_ESI;
}


void FUN_0041c76a(int param_1,int param_2)

{
  if (DAT_0042a820 != (void *)0x0) {
    FUN_0041c5ec(DAT_0042a820,param_1,param_2);
  }
  return;
}



HKEY __fastcall FUN_0041c784(int param_1)

{
  LSTATUS LVar1;
  DWORD local_14;
  HKEY local_10;
  HKEY local_c;
  HKEY local_8;
  
  local_10 = (HKEY)0x0;
  local_8 = (HKEY)0x0;
  local_c = (HKEY)0x0;
  LVar1 = RegOpenKeyExA((HKEY)0x80000001,"Software",0,0x2001f,&local_8);
  if (LVar1 == 0) {
    LVar1 = RegCreateKeyExA(local_8,*(LPCSTR *)(param_1 + 0x7c),0,(LPSTR)0x0,0,0x2001f,
                            (LPSECURITY_ATTRIBUTES)0x0,&local_c,&local_14);
    if (LVar1 == 0) {
      RegCreateKeyExA(local_c,*(LPCSTR *)(param_1 + 0x90),0,(LPSTR)0x0,0,0x2001f,
                      (LPSECURITY_ATTRIBUTES)0x0,&local_10,&local_14);
    }
  }
  if (local_8 != (HKEY)0x0) {
    RegCloseKey(local_8);
  }
  if (local_c != (HKEY)0x0) {
    RegCloseKey(local_c);
  }
  return local_10;
}




void FUN_0041c874(void)

{
  FUN_00402d77(&DAT_0042a860,0,0xf023);
  return;
}



void FUN_0041c886(void)

{
  FUN_004030e0(0x41c892);
  return;
}



void FUN_0041c8ac(void)

{
  FUN_00402da1(&DAT_0042a8f8,0,0xf021);
  return;
}



void FUN_0041c8be(void)

{
  FUN_004030e0(0x41c8ca);
  return;
}



int FUN_0041c8d4(void)

{
  DWORD DVar1;
  
  if (DAT_0042a990 == 0) {
    DAT_0042a990 = 1;
    DVar1 = GetVersion();
    if (((byte)DVar1 < 4) && ((DVar1 & 0x80000000) != 0)) {
      DAT_0042ab30 = 1;
    }
    else {
      DAT_0042ab30 = 0;
    }
    if (DAT_0042ab30 == 0) {
      InitializeCriticalSection((LPCRITICAL_SECTION)&DAT_0042ab38);
    }
  }
  return DAT_0042a990;
}



void FUN_0041c922(int param_1)

{
  int *piVar1;
  
  if (DAT_0042a990 == 0) {
    FUN_0041c8d4();
  }
  if (DAT_0042ab30 == 0) {
    piVar1 = (int *)(&DAT_0042ab50 + param_1 * 4);
    if (*(int *)(&DAT_0042ab50 + param_1 * 4) == 0) {
      EnterCriticalSection((LPCRITICAL_SECTION)&DAT_0042ab38);
      if (*piVar1 == 0) {
        InitializeCriticalSection((LPCRITICAL_SECTION)(&DAT_0042a998 + param_1 * 0x18));
        *piVar1 = *piVar1 + 1;
      }
      LeaveCriticalSection((LPCRITICAL_SECTION)&DAT_0042ab38);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)(&DAT_0042a998 + param_1 * 0x18));
  }
  return;
}



void FUN_0041c992(int param_1)

{
  if (DAT_0042ab30 == 0) {
    LeaveCriticalSection((LPCRITICAL_SECTION)(&DAT_0042a998 + param_1 * 0x18));
  }
  return;
}



void FUN_0041c9bd(void)

{
  FUN_0041ca2f(0x42ab98);
  return;
}



void FUN_0041c9c7(void)

{
  FUN_004030e0(0x41c9d3);
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041c9dd(void)

{
  int iVar1;
  
  if (DAT_0042abf4 != 0) {
    iVar1 = GetSystemMetrics(2);
    DAT_0042ab98 = iVar1 + 1;
    iVar1 = GetSystemMetrics(3);
    DAT_0042ab9c = iVar1 + 1;
    _DAT_0042ac00 = 1;
  }
  return;
}



// WARNING: Globals starting with '_' overlap smaller symbols at the same address

void FUN_0041ca0d(void)

{
  DAT_0042ab98 = GetSystemMetrics(2);
  DAT_0042ab9c = GetSystemMetrics(3);
  _DAT_0042ac00 = 0;
  return;
}



int __fastcall FUN_0041ca2f(int param_1)

{
  uint uVar1;
  DWORD DVar2;
  HCURSOR pHVar3;
  int iVar4;
  
  DVar2 = GetVersion();
  *(DWORD *)(param_1 + 0x54) = (DVar2 >> 8 & 0xff) + (DVar2 & 0xff) * 0x100;
  *(DWORD *)(param_1 + 0x58) = DVar2 >> 0x1f;
  uVar1 = (uint)(3 < (byte)DVar2);
  *(uint *)(param_1 + 0x5c) = uVar1;
  *(uint *)(param_1 + 0x60) = 1 - uVar1;
  *(uint *)(param_1 + 100) = uVar1;
  *(uint32_t *)(param_1 + 0x68) = 0;
  if (uVar1 != 0) {
    DVar2 = GetProcessVersion(0);
    *(uint *)(param_1 + 0x68) = (uint)(0x3ffff < DVar2);
  }
  FUN_0041701b(param_1);
  *(uint32_t *)(param_1 + 0x24) = 0;
  FUN_00416fd7(param_1);
  pHVar3 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f02);
  *(HCURSOR *)(param_1 + 0x3c) = pHVar3;
  pHVar3 = LoadCursorA((HINSTANCE)0x0,(LPCSTR)0x7f00);
  *(HCURSOR *)(param_1 + 0x40) = pHVar3;
  *(uint32_t *)(param_1 + 0x50) = 0;
  *(uint32_t *)(param_1 + 0x44) = 0;
  iVar4 = (*(int *)(param_1 + 0x5c) != 0) + 1;
  *(int *)(param_1 + 0x10) = iVar4;
  *(int *)(param_1 + 0x14) = iVar4;
  return param_1;
}



void FUN_0041caca(void)

{
  code *pcVar1;
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0041ea9c;
  pcVar1 = (code *)extraout_ECX[4];
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (pcVar1 != (code *)0x0) {
    (*pcVar1)(0);
  }
  if ((HMODULE)extraout_ECX[2] != (HMODULE)0x0) {
    FreeLibrary((HMODULE)extraout_ECX[2]);
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e924;
  return;
}



void FUN_0041cb11(void)

{
  code *pcVar1;
  int iVar2;
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0041eaa4;
  iVar2 = DAT_0042ac04;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if ((iVar2 != 0) && (pcVar1 = *(code **)(iVar2 + 0x18), pcVar1 != (code *)0x0)) {
    (*pcVar1)();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e924;
  return;
}


void FUN_0041cb5c(void)

{
  FUN_004030e0(0x41cb68);
  return;
}


void FUN_0041cb7d(void)

{
  FUN_004030e0(0x41cb89);
  return;
}


uint32_t FUN_0041cba5(uint32_t param_1,uint32_t param_2,uint32_t param_3,uint32_t param_4)

{
  UINT UVar1;
  int iVar2;
  
  UVar1 = SetErrorMode(0);
  SetErrorMode(UVar1 | 0x8001);
  iVar2 = FUN_0041bf1f();
  *(uint32_t *)(iVar2 + 8) = param_1;
  *(uint32_t *)(iVar2 + 0xc) = param_1;
  iVar2 = FUN_0041bf1f();
  iVar2 = *(int *)(iVar2 + 4);
  if (iVar2 != 0) {
    *(uint32_t *)(iVar2 + 0x68) = param_1;
    *(uint32_t *)(iVar2 + 0x6c) = param_2;
    *(uint32_t *)(iVar2 + 0x70) = param_3;
    *(uint32_t *)(iVar2 + 0x74) = param_4;
    FUN_0041cc08(iVar2);
  }
  iVar2 = FUN_0041bf1f();
  if (*(char *)(iVar2 + 0x14) == '\0') {
    FUN_0041190f();
  }
  return 1;
}



void __fastcall FUN_0041cc08(int param_1)

{
  byte *pbVar1;
  int iVar2;
  char *pcVar3;
  int iVar4;
  CHAR *pCVar5;
  CHAR local_310 [256];
  byte local_210 [260];
  CHAR local_10c [260];
  byte *local_8;
  
  iVar2 = FUN_0041bf1f();
  *(uint32_t *)(iVar2 + 8) = *(uint32_t *)(param_1 + 0x68);
  *(uint32_t *)(iVar2 + 0xc) = *(uint32_t *)(param_1 + 0x68);
  GetModuleFileNameA(*(HMODULE *)(param_1 + 0x68),(LPSTR)local_210,0x104);
  local_8 = FUN_004041f0(local_210,0x2e);
  *local_8 = 0;
  FUN_0041cd25(local_210,local_10c,0x104);
  if (*(int *)(param_1 + 0x88) == 0) {
    pcVar3 = FUN_00403810(local_10c);
    *(char **)(param_1 + 0x88) = pcVar3;
  }
  if (*(int *)(param_1 + 0x78) == 0) {
    iVar4 = FUN_00416cfe(0xe000,local_310,0x100);
    if (iVar4 == 0) {
      pCVar5 = *(CHAR **)(param_1 + 0x88);
    }
    else {
      pCVar5 = local_310;
    }
    pcVar3 = FUN_00403810(pCVar5);
    *(char **)(param_1 + 0x78) = pcVar3;
  }
  pbVar1 = local_8;
  *(uint32_t *)(iVar2 + 0x10) = *(uint32_t *)(param_1 + 0x78);
  if (*(int *)(param_1 + 0x8c) == 0) {
    lstrcpyA((LPSTR)local_8,".HLP");
    pcVar3 = FUN_00403810((char *)local_210);
    *(char **)(param_1 + 0x8c) = pcVar3;
    *pbVar1 = 0;
  }
  if (*(int *)(param_1 + 0x90) == 0) {
    lstrcatA(local_10c,".INI");
    pcVar3 = FUN_00403810(local_10c);
    *(char **)(param_1 + 0x90) = pcVar3;
  }
  return;
}



int FUN_0041cd25(byte *param_1,LPSTR param_2,int param_3)

{
  byte bVar1;
  byte *lpString2;
  int iVar2;
  
  lpString2 = param_1;
  for (; *param_1 != 0; param_1 = FUN_00404080(param_1)) {
    bVar1 = *param_1;
    if (((bVar1 == 0x5c) || (bVar1 == 0x2f)) || (bVar1 == 0x3a)) {
      lpString2 = FUN_00404080(param_1);
    }
  }
  if (param_2 == (LPSTR)0x0) {
    iVar2 = lstrlenA((LPCSTR)lpString2);
    iVar2 = iVar2 + 1;
  }
  else {
    lstrcpynA(param_2,(LPCSTR)lpString2,param_3);
    iVar2 = 0;
  }
  return iVar2;
}



void FUN_0041cd7b(void)

{
  int iVar1;
  int unaff_EBP;
  
  FUN_004037f0();
  iVar1 = FUN_004124cf(0xbc);
  *(int *)(unaff_EBP + -0x10) = iVar1;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  if (iVar1 != 0) {
    FUN_00419542();
  }
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  return;
}


void FUN_0041cdee(void)

{
  uint32_t *extraout_ECX;
  int unaff_EBP;
  
  FUN_004037f0();
  *(uint32_t **)(unaff_EBP + -0x10) = extraout_ECX;
  *extraout_ECX = &PTR_FUN_0041e91c;
  *(uint32_t *)(unaff_EBP + -4) = 0;
  FUN_004182e1(extraout_ECX + 1);
  ExceptionList = *(void **)(unaff_EBP + -0xc);
  *extraout_ECX = &PTR_LAB_0041e924;
  return;
}



void FUN_0041cea1(void)

{
  code *pcVar1;
  int iVar2;
  byte *pbVar3;
  int iVar4;
  byte *lpClassName;
  
  iVar2 = FUN_0041bf1f();
  FUN_0041c922(1);
  lpClassName = (byte *)(iVar2 + 0x34);
  while (*lpClassName != 0) {
    pbVar3 = FUN_00403f80(lpClassName,10);
    *pbVar3 = 0;
    iVar4 = FUN_0041bf1f();
    UnregisterClassA((LPCSTR)lpClassName,*(HINSTANCE *)(iVar4 + 8));
    lpClassName = pbVar3 + 1;
  }
  *(byte *)(iVar2 + 0x34) = 0;
  FUN_0041c992(1);
  iVar2 = FUN_0041bf1f();
  if ((*(int *)(iVar2 + 4) != 0) &&
     (pcVar1 = *(code **)(*(int *)(iVar2 + 4) + 0x54), pcVar1 != (code *)0x0)) {
    (*pcVar1)(1,0);
  }
  iVar2 = FUN_0041bc33();
  if (*(int **)(iVar2 + 0xcc) != (int *)0x0) {
    iVar4 = FUN_00410444(*(int **)(iVar2 + 0xcc));
    if (iVar4 != 0) {
      *(uint32_t *)(iVar2 + 0xcc) = 0;
    }
  }
  iVar4 = FUN_0041bf1f();
  if (*(char *)(iVar4 + 0x14) == '\0') {
    if (*(HHOOK *)(iVar2 + 0x30) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(iVar2 + 0x30));
      *(uint32_t *)(iVar2 + 0x30) = 0;
    }
    if (*(HHOOK *)(iVar2 + 0x2c) != (HHOOK)0x0) {
      UnhookWindowsHookEx(*(HHOOK *)(iVar2 + 0x2c));
      *(uint32_t *)(iVar2 + 0x2c) = 0;
    }
  }
  return;
}



void Unwind_0041cf60(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x1bc));
  return;
}



void Unwind_0041cf6b(void)

{
  FUN_00412b46();
  return;
}



void Unwind_0041cf76(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x1b8));
  return;
}



void Unwind_0041cf81(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x1b4));
  return;
}



void Unwind_0041cf8c(void)

{
  int unaff_EBP;
  
  FUN_004012c0((CDialog *)(unaff_EBP + -0x1a0));
  return;
}



void Unwind_0041cf97(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x1a0));
  return;
}



void Unwind_0041cfa2(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x144));
  return;
}



void Unwind_0041cfad(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x130));
  return;
}



void Unwind_0041cfd0(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041cfd8(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(*(int *)(unaff_EBP + -0x10) + 0x5c));
  return;
}



void Unwind_0041cfe3(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(*(int *)(unaff_EBP + -0x10) + 0x70));
  return;
}



void Unwind_0041d000(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d008(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(*(int *)(unaff_EBP + -0x10) + 0x5c));
  return;
}



void Unwind_0041d013(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(*(int *)(unaff_EBP + -0x10) + 0x70));
  return;
}



void Unwind_0041d01e(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(*(int *)(unaff_EBP + -0x10) + 0x74));
  return;
}



void Unwind_0041d040(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x144));
  return;
}



void Unwind_0041d04b(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x148));
  return;
}



void Unwind_0041d056(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x14c));
  return;
}



void Unwind_0041d061(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x14c));
  return;
}



void Unwind_0041d06c(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x140));
  return;
}



void Unwind_0041d077(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x14c));
  return;
}



void Unwind_0041d082(void)

{
  FUN_00412b46();
  return;
}



void Unwind_0041d08d(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x13c));
  return;
}



void Unwind_0041d098(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x138));
  return;
}



void Unwind_0041d0b0(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d0b8(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x14));
  return;
}



void Unwind_0041d0d0(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + 4));
  return;
}



void Unwind_0041d0d8(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x28));
  return;
}



void Unwind_0041d0e0(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x2c));
  return;
}



void Unwind_0041d0e8(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x20));
  return;
}



void Unwind_0041d0f0(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x24));
  return;
}



void Unwind_0041d0f8(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + 4));
  return;
}



void Unwind_0041d100(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x18));
  return;
}



void Unwind_0041d108(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_0041d110(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d118(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x14));
  return;
}



void Unwind_0041d130(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + 4));
  return;
}



void Unwind_0041d138(void)

{
  FUN_00412b46();
  return;
}



void Unwind_0041d150(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d170(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x68));
  return;
}



void Unwind_0041d190(void)

{
  int unaff_EBP;
  
  CPaintDC::~CPaintDC((CPaintDC *)(unaff_EBP + -0x60));
  return;
}



void Unwind_0041d1b0(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x13c));
  return;
}



void Unwind_0041d1bb(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x140));
  return;
}



void Unwind_0041d1c6(void)

{
  FUN_00412b46();
  return;
}



void Unwind_0041d1e0(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x218));
  return;
}



void Unwind_0041d1eb(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x214));
  return;
}



void Unwind_0041d1f6(void)

{
  int unaff_EBP;
  
  FUN_004028f0((CDialog *)(unaff_EBP + -0x204));
  return;
}



void Unwind_0041d201(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x220));
  return;
}



void Unwind_0041d20c(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x208));
  return;
}



void Unwind_0041d217(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x20c));
  return;
}



void Unwind_0041d222(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x210));
  return;
}



void Unwind_0041d22d(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog((CDialog *)(unaff_EBP + -0x204));
  return;
}



void Unwind_0041d250(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d264(void)

{
  int unaff_EBP;
  
  FUN_00402a39(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d278(void)

{
  int unaff_EBP;
  
  CWinThread::~CWinThread(*(CWinThread **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d28c(void)

{
  int unaff_EBP;
  
  CWinThread::~CWinThread(*(CWinThread **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d2a0(void)

{
  int unaff_EBP;
  
  FUN_0041c289(*(HLOCAL *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d2b4(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d2c8(void)

{
  FUN_00411f70();
  return;
}



void Unwind_0041d2dc(void)

{
  FUN_00411f70();
  return;
}



void Unwind_0041d2f0(void)

{
  int unaff_EBP;
  
  FUN_0041c289(*(HLOCAL *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d304(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d318(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d320(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_00412667(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



void Unwind_0041d340(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d348(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_00412667(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



void Unwind_0041d368(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d370(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_00412667(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



void Unwind_0041d390(void)

{
  int unaff_EBP;
  
  FUN_00402a39(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d3a4(void)

{
  int unaff_EBP;
  
  FUN_00402a39(*(uint32_t **)(unaff_EBP + -0x18));
  return;
}



void Unwind_0041d3ac(void)

{
  int unaff_EBP;
  
  thunk_FUN_0041c6bc((int *)(*(int *)(unaff_EBP + -0x18) + 0x1070));
  return;
}



void Unwind_0041d3c4(void)

{
  int unaff_EBP;
  
  FUN_00402a39(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d3cc(void)

{
  FUN_0041136c();
  return;
}



void Unwind_0041d3d7(void)

{
  FUN_0041136c();
  return;
}



void Unwind_0041d3ec(void)

{
  int unaff_EBP;
  
  FUN_00402a39(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d3f4(void)

{
  FUN_0041136c();
  return;
}



void Unwind_0041d3ff(void)

{
  FUN_0041136c();
  return;
}



void Unwind_0041d40a(void)

{
  FUN_004111da();
  return;
}



void Unwind_0041d420(void)

{
  int unaff_EBP;
  
  FUN_0041c289(*(HLOCAL *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d434(void)

{
  FUN_0041136c();
  return;
}



void Unwind_0041d43c(void)

{
  FUN_0041136c();
  return;
}



void Unwind_0041d454(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d468(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d47c(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d484(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(*(int *)(unaff_EBP + -0x10) + 0xc));
  return;
}



void Unwind_0041d49c(void)

{
  int unaff_EBP;
  
  FUN_00402a80(*(uint **)(unaff_EBP + -0x14));
  return;
}



void Unwind_0041d4b0(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + 8));
  return;
}



void Unwind_0041d4c4(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d4d8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd(*(CWnd **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d4ec(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x1c));
  return;
}



void Unwind_0041d4f4(void)

{
  int unaff_EBP;
  
  FUN_00417708((uint32_t *)(unaff_EBP + -0x40));
  return;
}



void Unwind_0041d514(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d51c(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_00412667(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



void Unwind_0041d53c(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d544(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_00412667(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



void Unwind_0041d570(void)

{
  int unaff_EBP;
  
  FUN_0041250b(*(uint **)(unaff_EBP + 8));
  return;
}



void Unwind_0041d590(void)

{
  FUN_00411f70();
  return;
}



void Unwind_0041d5b0(void)

{
  FUN_00402b57();
  return;
}



void Unwind_0041d5c4(void)

{
  FUN_00417bee();
  return;
}



void Unwind_0041d5cc(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(unaff_EBP + -0x60));
  return;
}



void Unwind_0041d5d4(void)

{
  FUN_00417bee();
  return;
}



void Unwind_0041d5e8(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd((CWnd *)(unaff_EBP + -0x48));
  return;
}



void Unwind_0041d608(void)

{
  int unaff_EBP;
  
  FUN_00402a80(*(uint **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d61c(void)

{
  int unaff_EBP;
  
  FUN_0041c289(*(HLOCAL *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d630(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d638(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x14) & 1) != 0) {
    FUN_00412667(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



void Unwind_0041d658(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + 0xc));
  return;
}



void Unwind_0041d660(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x10) & 1) != 0) {
    FUN_00412667(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



void Unwind_0041d680(void)

{
  int unaff_EBP;
  
  FUN_0041250b(*(uint **)(unaff_EBP + 8));
  return;
}



void Unwind_0041d694(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d6a8(void)

{
  int unaff_EBP;
  
  FUN_0041250b(*(uint **)(unaff_EBP + 8));
  return;
}



void Unwind_0041d6bc(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d6d0(void)

{
  FUN_00417bee();
  return;
}



void Unwind_0041d6e4(void)

{
  FUN_00417bee();
  return;
}



void Unwind_0041d6f8(void)

{
  int unaff_EBP;
  
  FUN_0041250b(*(uint **)(unaff_EBP + 8));
  return;
}



void Unwind_0041d70c(void)

{
  int unaff_EBP;
  
  FUN_00402a80(*(uint **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d720(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d734(void)

{
  int unaff_EBP;
  
  CDialog::~CDialog(*(CDialog **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d73c(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(*(int *)(unaff_EBP + -0x10) + 0xac));
  return;
}



void Unwind_0041d754(void)

{
  int unaff_EBP;
  
  if ((*(uint *)(unaff_EBP + -0x1c) & 1) != 0) {
    FUN_00412667(*(int **)(unaff_EBP + 8));
    return;
  }
  return;
}



void Unwind_0041d76b(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d773(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x20));
  return;
}



void Unwind_0041d77b(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x14));
  return;
}



void Unwind_0041d783(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x20));
  return;
}



void Unwind_0041d78b(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + 0xc));
  return;
}



void Unwind_0041d7b8(void)

{
  int unaff_EBP;
  
  FUN_00402a39(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d7cc(void)

{
  int unaff_EBP;
  
  FUN_00402a39(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d7e0(void)

{
  FUN_0041136c();
  return;
}



void Unwind_0041d7e8(void)

{
  FUN_0041136c();
  return;
}



void Unwind_0041d80c(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d820(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d834(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d83c(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + 0x10));
  return;
}



void Unwind_0041d850(void)

{
  int unaff_EBP;
  
  FUN_00402a80(*(uint **)(unaff_EBP + -0x14));
  return;
}



void Unwind_0041d859(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x14));
  return;
}



void Unwind_0041d861(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(*(int *)(unaff_EBP + -0x14) + 0x10));
  return;
}



void Unwind_0041d878(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd(*(CWnd **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d880(void)

{
  FUN_004111da();
  return;
}



void Unwind_0041d88b(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(*(int *)(unaff_EBP + -0x10) + 0xac));
  return;
}



void Unwind_0041d8a4(void)

{
  int unaff_EBP;
  
  CWnd::~CWnd(*(CWnd **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d8ac(void)

{
  FUN_004111da();
  return;
}



void Unwind_0041d8b7(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(*(int *)(unaff_EBP + -0x10) + 0xac));
  return;
}



void Unwind_0041d8d0(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + 8));
  return;
}



void Unwind_0041d8e4(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d8f8(void)

{
  FUN_004111da();
  return;
}



void Unwind_0041d90c(void)

{
  int unaff_EBP;
  
  FUN_00412667((int *)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d920(void)

{
  int unaff_EBP;
  
  FUN_00402a80(*(uint **)(unaff_EBP + -0x10));
  return;
}



void Unwind_0041d934(void)

{
  int unaff_EBP;
  
  FUN_00402a79(*(uint32_t **)(unaff_EBP + -0x10));
  return;
}

void Unwind_0041d948(void)

{
  int unaff_EBP;
  
  FUN_0041250b(*(uint **)(unaff_EBP + 8));
  return;
}

void Unwind_0041d95c(void) {
  int unaff_EBP;
  
  FUN_00402a80(*(uint **)(unaff_EBP + -0x10));
  return;
}

void Unwind_0041d970(void) {
  int unaff_EBP;
  
  CPaintDC::~CPaintDC((CPaintDC *)(unaff_EBP + -0x60));
  return;
}
