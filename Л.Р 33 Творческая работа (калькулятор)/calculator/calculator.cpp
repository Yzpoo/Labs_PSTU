#include "calculator.h"

#include <Windows.h>
using namespace calculatorvanya; 
int WINAPI WinMain(HINSTANCE, HINSTANCE, LPSTR, int) {
    Application::EnableVisualStyles();
    Application::SetCompatibleTextRenderingDefault(false);
    Application::Run(gcnew calculator);
    return 0;
}

