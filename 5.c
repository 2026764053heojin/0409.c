#include <stdio.h>
#include <windows.h>

double a, b, c;

int main() {
	 SetConsoleOutputCP(65001);
	scanf("%lf %lf %lf", &a, &b, &c);
	printf("%.1lf\n", (a + b + c)/3.0);
    return 0;
}
