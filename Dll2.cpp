#pragma hdrstop
#pragma argsused
#include "Dll2.h"
#include <wchar.h>

__declspec(dllexport) int getgroup()
{
	return int(581220);
}

__declspec(dllexport) void getname(wchar_t* ptr)
{
    const wchar_t* str = L"Малиновский Александр Алексеевич";
    wcscpy(ptr, str);
}

__declspec(dllexport) void getnameEn(wchar_t* ptr)
{
	const wchar_t* str = L"Malinovskiy Alexander Alexeevich";
    wcscpy(ptr, str);
}

extern "C" int _libmain(unsigned long reason)
{
	return 1;
}

