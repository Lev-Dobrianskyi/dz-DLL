// dllmain.cpp : Defines the entry point for the DLL application.
#include "pch.h"
#include <string>
#include <fstream>
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

#define LoginMethods_Export
#include "Header.h"

void saveToFile(std::string name, std::string secondName, std::string age) {
    std::ofstream file(name + ".txt");
    if (file.is_open()) {
        file << name + ", " + secondName + ", " + age;
    }
}
