#pragma warning(disable : 4996)
#include <stdio.h>
int main(){
    int num;
    printf("ASCII code값을 입력하시오 : ");
    scanf("%d",&num);
    printf("%d은 '%c'의 ASCII code 입니다.\n",num,num);
}