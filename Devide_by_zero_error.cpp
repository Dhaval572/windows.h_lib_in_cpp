// Display error when divide by zero
#include <iostream>
#include <windows.h>
using namespace std;

int division(int a, int b)
{
    if (b == 0)
    {
        MessageBoxA(nullptr, "Devide by zero", "Alert", MB_ICONERROR);
        return -1;
    }
    else
        return a / b;
}

int main()
{
    int a = 48, b = 0;
    cout << division(a, b);

    return 0;
}
