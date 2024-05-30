// 새로운 변수 tmp를 이용하여 중간 에 넣을 수 있는 변수를 만든다 밑에서는 'c'이다
#include<stdio.h>

int main()
{
    int a = 10, b = 20, c;
    printf("치환 전 a : %d, b : %d\n", a, b);
    c=a;//새 변수 c를 만들어서 a 값 보관
    a=b;// a에 b의 값을 대입
    b=a;//b에 기존a의 값인 c의 값을 대입

    printf("치환 후 a : %d, b : %d\n", a, b);

}