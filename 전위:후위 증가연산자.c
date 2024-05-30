#include<stdio.h>

int main(void){

    int a =10, b;

    b = a++; //후위증가연산 : 나중에 +1증가

    printf("a : %d, b : %d\n", a,b);

    b = ++a; //전위증가연산 : 먼저 +1 증가

    printf("a : %d, b : %d\n", a,b);

}