#pragma warning(disable : 4996)
#include <stdio.h>
int input();
int calcCoin(int day);
int main(){
    int day = input();
    int coin = calcCoin(day);
    printf("  근무일 : %d 일 / 총 금화 수 : %d 개\n",day,coin);
}
int input(){
    int day;
    printf("* 기사의 근무일수를 입력하시오 : ");
    scanf("%d",&day);
    return day;
}
int calcCoin(int day){
    int coin = 1, sum = 0;
    int date = 1;
    for(int i = 1; i < day; i++){
        for(int j = 0; j < i; j++){
            if(date > day)
                break;
            sum += coin;
            date++;
        }
        coin++;
    }
    return sum;
}