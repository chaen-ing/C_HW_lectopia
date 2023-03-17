#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
int main(){
    int str[5];
    int num;
    for(int i=0; i<5; i++){
        printf("0보다 큰수를 입력하시오(%d번째) : ",i+1);
        scanf("%d",&num);
        if(num<=0){
            i--;
            continue;
        }
        else{
            str[i] = num;
        }
    }
    int sum=0;
    for(int j = 0; j<5; j++){
        sum += str[j];
    }
    printf("입력된 값의 총 합 : %d\n",sum);
}