#pragma warning(disable : 4996)
#include <stdio.h>
int input();
void output(double fee);
int main(){
    int kw = input();
    double fee;
    fee = 660.0 + ((double)kw * 88.5);
    fee += fee * 0.09;
    output(fee);
}

int input(){
    int kw;
    printf("전기 사용량을 입력하세요(kw) : ");
    scanf("%d",&kw);
    return kw;
}

void output(double fee){
    printf("전기 사용요금은 %lf 원 입니다.\n",fee);
    return;
}
