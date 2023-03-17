#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int inputInt();
int random(int n);
int ouput(int num,int res,int *max,int *min);
int main(){
    int num;
    srand((unsigned int)time(NULL));
    int res = random(100)+1;
    int min = 0, max = 100;
    int cnt = 0;
    while(1){
    cnt++;
    num = inputInt();
    int i = ouput(num,res,&max,&min);
    if(i==1)
        break;
    } 
    printf("우와~ 맞았당~~~ 추카추카~~ %d 번째 만에 맞추셨습니다.\n",cnt);
}
int inputInt(){
    int num;
    while(1){
    printf("# 숫자를 입력하시오: ");
    scanf("%d",&num);
    if(num<1 || num>100)
        continue;
    if(getchar()=='\n') 
        break;
    else{
        while(getchar()!='\n')
        {;}
    }
    }
    return num;
}
int random(int n){
    int res;
    res = rand()%n;
    return res;
}
int ouput(int num,int res,int *max,int *min){
    if(num > res){
        *max = num;
        printf("%d 보다는 크고 %d 보다는 작습니다.\n",*min,*max);
        return 0;
    }
    else if(num < res){
        *min = num;
        printf("%d 보다는 크고 %d 보다는 작습니다.\n",*min,*max);
        return 0;
    }
    else
        return 1;
}