#pragma warning(disable : 4996)
#include <stdio.h>
void myFlush();
int inputCode();
int inputUsage();
void output(int num,int usage);
int main(){
    int num = inputCode();
    int usage = inputUsage();
    output(num,usage);
}
int inputCode(){
    int num;
    printf("* 사용자 코드를 입력하시오(1:가정용/2:상업용/3:공업용) : ");
    while(1){
        scanf("%d",&num);
        if(getchar()!='\n'){
            printf("다시 입력하시오 : ");
            myFlush();
            continue;
        }
        else if(num<1 || num>3){
            printf("다시 입력하시오 : ");
            continue;
        }
        else{
            return num;
        }
    }
}
int inputUsage(){
    int usage;
    printf("* 사용량을 입력하시오(ton단위) : ");
    while(1){
        scanf("%d",&usage);
        if(getchar()!='\n'){
            printf("다시 입력하시오 : ");
            myFlush();
            continue;
        }
        else if(usage<0){
            printf("다시 입력하시오 : ");
            continue;
        }
        else{
            return usage;
        }
    }
}
void output(int num,int usage){
    int price;
    printf("\n# 사용자코드 : %d",num);
    switch(num){
        case 1 : printf("(가정용)\n"); price = 50; break;
        case 2 : printf("(상업용)\n"); price = 45; break;
        case 3 : printf("(공업용)\n"); price = 30; break;
    }  
    printf("# 사용량 : %d ton\n",usage);
    printf("# 총수도요금 : %d원\n",int((usage * price)*1.05));
    return;
}
void myFlush(){
    while(getchar()!='\n'){
        ;
    }
}