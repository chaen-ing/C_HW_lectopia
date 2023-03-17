#pragma warning(disable : 4996)
#include <stdio.h>
int main(){
    double sum=0;
    for(int i = 1; i < 6; i++){
        double height;
        printf("- %d 번 학생의 키는? ",i);
        scanf("%lf",&height);
        sum += height;
    }
    printf("다섯 명의 평균 키는 %.1lf cm 입니다.\n",(sum/5.0));
}