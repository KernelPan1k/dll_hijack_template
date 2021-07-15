Windows DLL Template
====================



- Compile
*********

        // For x64 compile with:
        x86_64-w64-mingw32-gcc windows_dll.c -shared -o output.dll
        // For x86 compile with:
        i686-w64-mingw32-gcc windows_dll.c -shared -o output.dll


- Execute

1. Place hijackme.dll in ‘C:\Temp’.
2. Open command prompt and type:
   
        
    sc stop dllsvc & sc start dllsvc

