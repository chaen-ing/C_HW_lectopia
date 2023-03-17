#pragma warning(disable : 4996)
#include <stdio.h>
int main(){
    int a=0,b=0,c=0,result,total;
    printf("정수 입력: ");
    result = scanf("%d %d %d",&a,&b,&c);
    if(result == 3)
    {
        total = a+b+c;
        printf("세값의 합은 %d.\n",total);
    }
    else{
        printf("입력데이터올퓨\n");
    }
    printf("scanf함수의 리턴값 : %d\n",result);
    return 0;
}