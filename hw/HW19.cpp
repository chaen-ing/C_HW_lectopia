#pragma warning(disable : 4996)
#include <stdio.h>
int inputYear();
int yearCheck(int year);
void output(int year,int check);
int main(){
    int year = inputYear();
    int check = yearCheck(year);
    output(year,check);
}
int inputYear(){
    int year;
    printf("년도를 입력하시오 : ");
    scanf("%d",&year);
    return year;
}
int yearCheck(int year){
    if(year % 4)
        return 0;
    else{
        if(year % 100)
            return 1;
        else{
            if(year % 400)
                return 0;
            else
                return 1;
        }
    }
}
void output(int year,int check){
    if(check == 0)
        printf("%d년은 평년(Common year)입니다.\n",year);
    else
        printf("%d년은 윤년(Leap year)입니다.\n",year);
}