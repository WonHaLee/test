#include <stdio.h>

int main(void)
{
    int a = 11;
    printf("%d를 왼쪽 쉬프트 1회 : %d\n", a, a << 1);
    printf("%d를 왼쪽 쉬프트 2회 : %d\n", a, a << 2);

    int b = 44;
    printf("%d를 오른쪽 쉬프트 1회 : %d\n", b, b >> 1);
    printf("%d를 오른쪽 쉬프트 1회 : %d\n", b, b >> 2);

    int c = -44;
    printf("%d를 왼쪽 쉬프트 1회 : %d\n", c, c << 1);
    printf("%d를 왼쪽 쉬프트 1회 : %d\n", c, c << 2);
}