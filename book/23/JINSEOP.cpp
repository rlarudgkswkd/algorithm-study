#include <stdio.h>

 int main(void)
{
    printf("Hellow world \n");
    printf("10진수 정수 출력: %d \n", 12);
    printf("8진수  출력 : %o \n", 12);
    printf("16진수 츨략 : %x \n", 14);
    printf("%d \n : ", 12);
    printf("%7d \n : ", 12);
    printf("%07d \n : ", 12);
    printf("%-7d \n : ", 12);

    return 0;
}