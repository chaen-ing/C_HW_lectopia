#pragma warning(disable : 4996)
#include <stdio.h>
int input();
int calcDate(int depth);
void output(int depth, int date);
int main(){
    int depth = input();
    int date = calcDate(depth);
    output(depth,date);
}
int input(){
    int depth;
    printf("* 우물의 깊이를 입력하시오(cm단위) : ");
    scanf("%d",&depth);
    return depth;
}
int calcDate(int depth){
    int date=0;
    while(true){
        date += 1;
        depth -= 50;
        if(depth <= 0)
            break;
        depth += 20;
    }
    return date;
}
void output(int depth, int date){
    double depthM = (double)depth / 100.0;
    printf("  %.2lf미터 깊이의 우물을 탈출하기 위해서는 %d일이 걸립니다.\n",depthM,date);
}