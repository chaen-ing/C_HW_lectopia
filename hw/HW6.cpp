#pragma warning(disable : 4996)
#include <stdio.h>
int input();
void output(double celsius);
int main(){
    
    int fahrenheit = input();
    double celsius;
    celsius = 0.5 / 0.9 * (double)(fahrenheit - 32);
    output(celsius);
}

int input(){
    int fahrenheit;
    printf("화씨 온도를 입력하세요 : ");
    scanf("%d",&fahrenheit);
    return fahrenheit;
}

void output(double celsius){
    printf("섭씨 온도는 %.1lf 도입니다.\n",celsius);
    return;
}
