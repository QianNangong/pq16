#include <windows.h>

#include "commctrl.h"

HINSTANCE g_hInstance = NULL;

int PASCAL WinMain(
    HINSTANCE hInstance,
    HINSTANCE hPrevInstance,
    LPSTR lpCmdLine,
    int nCmdShow
)
{
    g_hInstance = hInstance;
    return 0;
}
