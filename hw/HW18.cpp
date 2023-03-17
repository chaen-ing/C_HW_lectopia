#pragma warning(disable : 4996)
#include <stdio.h>
int inputAge();
int inputNum();
void output(int age, int num);
int main(){
    for(int i = 0; i < 2; i++){
    int age,num;
    age = inputAge();
    num = inputNum();
    output(age,num);
    printf("\n");
    } 
}
int inputAge(){
    int age;
    printf("입장객의 나이를 입력하시오 : ");
    scanf("%d",&age);
    return age;
}
int inputNum(){
    int num;
    printf("입장객의 수를 입력하시오 : ");
    scanf("%d",&num);
    return num;
}
void output(int age, int num){
    int fee;
    if(age <= 7)
        fee = 500;
    else if(age <=13)
        fee = 700;
    else if(age <= 19)
        fee = 1000;
    else if(age <= 55)
        fee = 1500;
    else if(age >= 65)
        fee = 500;
    else
        ;
    int enterfees = fee * num;
    printf("입장료 => %d원\n",enterfees);
    int discount = 0;
    if(num >= 5){
        discount = enterfees * 0.1;
        enterfees *= 0.9;
    }
    else{
        ;
    }
    printf("할인금액 => %d원\n",discount);
    printf("결제금액 => %d원\n",enterfees);
    return;
}