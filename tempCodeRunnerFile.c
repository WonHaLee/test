#include <stdio.h>

int main(void){
    int a =100, b =100;
    printf("%d == %d는 %d이다\n", a, b, a==b);
    printf("%d != %d는 %d이다\n", a, b, a!=b);
    printf("%d > %d는 %d이다\n", a, b, a>b);
    printf("%d < %d는 %d이다\n", a, b, a<b);
    printf("%d <= %d는 %d이다\n", a, b, a<=b);
    return 0;
}