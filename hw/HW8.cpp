#pragma warning(disable : 4996)
#include <stdio.h>
int main(){
    int history, literature, art;
    printf("역사, 문학, 예능 점수를 입력하세요 : ");
    scanf("%d %d %d",&history,&literature,&art);
    int sum = history + literature + art;
    double average = (double)sum / 3.0;
    printf("총점은 %d 이고 평균은 %.2lf 입니다.\n",sum,average);
}