#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
int input();
int main(){
    int num = input();
    for(int i = 1; i <= num; i++){
        printf("*");
        if(i % 5 == 0)
            printf("\n");
    }
}
int input(){
    int num;
    printf("# 정수값을 입력하세요 : ");
    scanf("%d",&num);
    return num;
}