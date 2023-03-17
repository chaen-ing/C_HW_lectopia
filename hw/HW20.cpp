#pragma warning(disable : 4996)
#include <stdio.h>
int inputHour();
int calcIncome(int hour);
int calcTax(int grossIncome);
void output(int grossIncome,int tax);
int main(){
    int hour = inputHour();
    int grossIncome = calcIncome(hour);
    int tax = calcTax(grossIncome);
    output(grossIncome,tax);
}
int inputHour(){
    int hour;
    printf("* 1주일간의 근무시간을 입력하시오 : ");
    scanf("%d",&hour);
    return hour;
}
int calcIncome(int hour){
    int grossIncome;
    if(hour > 40)
        grossIncome = (40 * 3000) + ((hour-40) * 3000 * 1.5);
    else
        grossIncome = hour * 3000;
    return grossIncome;
}
int calcTax(int grossIncome){
    int tax;
    if(grossIncome <= 100000)
        tax = grossIncome * 0.15;
    else
        tax = (100000 * 0.15) + ((tax - 100000) * 0.25);
    return tax;
}
void output(int grossIncome,int tax){
    printf("# 총수입 : %6d원\n# 세 금 : %7d원\n# 실수입 : %6d원\n",grossIncome,tax,(grossIncome-tax));
   
}