// dllmain.cpp : 定义 DLL 应用程序的入口点。
#include "pch.h"

// 右键属性添加公关语言运行时支持
// .NET版本填写 4.7.2
// 语言中符合模式改成否
using namespace aHook;

void Test(){
    Class1 ^class1 = gcnew Class1();
    class1->ShowMessage();
}
// 引用 添加 CSHOOK

BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
                     )
{
    switch (ul_reason_for_call)
    {
    case DLL_PROCESS_ATTACH:
        Test();
        break;
    case DLL_THREAD_ATTACH:
    case DLL_THREAD_DETACH:
    case DLL_PROCESS_DETACH:
        break;
    }
    return TRUE;
}

