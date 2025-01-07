// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"

// 选中之后按F1能看说明

BOOL APIENTRY DllMain( HMODULE hModule,                     //这个是动态链接库的入口 注入之后会调用这个函数
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:    //这个是ddl第一次被附加上的时候调用的
        MessageBox(NULL, L"Hooked!", L"Title!", MB_OK);
		break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

