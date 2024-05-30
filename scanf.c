#include <stdio.h>
#define _CRT_SECURE_NO_WORNINGS

int main(){

    //서식 : %d(정수), %f(실수), %c(문자)
    //scanf("서식", &변수)
    //scanf_s()는 보안을 위한 scanf이다
    //#define_CRT_SECURE_NO_WORNINGS  ----> 보안때문에 생기는 경고 문자를 아예안뜨게 만드는 함수이다

    int a, b, result;
    printf("첫 번째 계산할 값을 입력하세요 ==> ");
    scanf("%d", &a);
    printf(" 두 번째 입력값 ==> ");
    scanf("%d", &b);
    result = a + b;
    printf("%d + %d = %d\n",a, b, result);

}
