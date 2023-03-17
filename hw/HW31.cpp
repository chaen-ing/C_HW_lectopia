#pragma warning(disable : 4996)
#include <stdio.h>
char menu();
void deposit(int *balance);
void withdraw(int *balance);
void myFlush();
int main()
{
    printf("* 현재 잔액은 0원 입니다.\n\n");
    int balance = 0;
    while(1){
    char a = menu();
    if(a == 'i'){
        deposit(&balance);
    }
    else if(a == 'o'){
        withdraw(&balance);
    }
    else if(a == 'q')
        break;
    else{
        printf("* 잘못 입력하셨습니다.\n");
    }
    myFlush();
    }
}
char menu(){
    char a;
    while(1){
    printf("# 메뉴를 선택하시오.(i-입금, o-출금, q-종료) : ");
    scanf("%c",&a);
    if(a == 'i'|| a == 'o'|| a == 'q')
        return a;
    else{
        printf("* 잘못 입력하셨습니다.\n\n");
        myFlush();
        continue;
    }
    }   
}
void deposit(int *balance){
    int money;
    printf("# 입금액을 입력하세요 : ");
    while(1){
    scanf("%d",&money);
    if(money < 0){
        printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
        myFlush();
        continue;
    }
    else if(getchar()!='\n'){
        printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
        myFlush();
        continue;
    }
    else{
        *balance += money;
        printf("* 현재 잔액은 %d원 입니다.\n",*balance);
        break;
    }
    }
    return;
}
void withdraw(int *balance){
    int money;
    printf("# 출금액을 입력하세요 : ");
    while(1){
    scanf("%d",&money);
    if(money < 0){
        printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
        myFlush();
        continue;
    }
    else if(getchar()!='\n'){
        printf("* 잘못 입력하셨습니다. 다시 입력하십시오 : ");
        myFlush();
        continue;
    }
    else if(*balance < money){
        printf("* 잔액이 부족합니다.\n");
        printf("* 현재 잔액은 %d원 입니다.\n\n",*balance);
        break;
    }
    else{
        *balance -= money;
        printf("* 현재 잔액은 %d원 입니다.\n\n",*balance);
        break;
    }
    }
    return;
}
void myFlush(){
    while(getchar()!='\n'){
        ;
    }
}