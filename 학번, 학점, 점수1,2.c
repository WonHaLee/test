#include <stdio.h>
#define _CRT_SECURE_NO_WORNINGS

int main(){

    int a;
    char b;
    float c,d;

    printf("학번을 입력하세요: ");
    scanf("%d", &a);
    printf("학점을 입력하세요: ");
    scanf(" %c", &b);
    printf("점수1를 입력하세요: ");
    scanf("%f", &c);
    printf("점수2를 입력하세요: ");
    scanf("%f", &d);


    printf(" \n%d 학생의 등급 %c\n 점수1 %.2f점, 점수2 %.2f점\n", a, b, c, d);
    





}