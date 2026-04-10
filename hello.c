#include <stdio.h>
#include <windows.h>

int age = 20;
double height = 123.4;
char blood = 'A';

int main() {
	 SetConsoleOutputCP(65001);
    printf("나이: %d\n", age);
    printf("키: %.1lfcm\n", height);
    printf("혈액형: %c\n", blood);
    return 0;
}
