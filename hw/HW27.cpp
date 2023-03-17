#pragma warning(disable : 4996)
#include <stdio.h>
void inputInt(int *cnt);
int main(){
    int weight;
    int cnt = 0;
    while(cnt<10){
        inputInt(&cnt);
        printf("* 현재 달걀의 수 : %d\n",cnt);
    }
    printf("\n*** 달걀 포장이 끝났습니다.\n");
}
void inputInt(int *cnt){
    int weight;
    while(1){
    printf("# 계란의 무게를 입력하세요(단위 : g) : ");
    scanf("%d",&weight);
    if(weight<150){
        printf("* 메추리알 가지고 장난하지 마시오~ ^^\n");
        continue;
    }
    if(weight>500){
        printf("* 타조알 가지고 장난하지 마시오~ ^^\n");
        continue;
    }   
    if(getchar()=='\n'){
        *cnt += 1;
        break;
    } 
    else{
        while(getchar()!='\n')
        {;}
    }
    }
}