#include <stdio.h>

int main(void){
    int score;
    printf("점수 입력 : ");
    scanf("%d", &score);
    printf("학점 : %d\n", 65 * (score >= 90) + 66 * (score >= 80 && score <= 89));
    return 0;
}