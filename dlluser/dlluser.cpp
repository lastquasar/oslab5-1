#include <windows.h>
#include <stdio.h>

extern "C" {
	__declspec(dllimport) void __cdecl Hello(void);
}

int main(void) {
	Hello();
	return 0;
}
