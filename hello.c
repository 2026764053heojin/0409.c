#include <stdio.h>
#include <windows.h>

int a, b;

int main() {
	 SetConsoleOutputCP(65001);
	scanf("%d %d", &a, &b);
	printf("%d %d\n", b, a);
    return 0;
}
