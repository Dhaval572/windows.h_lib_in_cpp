// Alert box in windows.h
#include <windows.h>

int main()
{
	MessageBoxA(nullptr, "Don't waste your time!", "Alert", MB_ICONSTOP);
	return 0;
}
