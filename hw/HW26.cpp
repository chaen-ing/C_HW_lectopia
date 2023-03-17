#pragma warning(disable : 4996)
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int inputInt();
int random(int n);
int output(int num,int res,int *a,int *b);
int main(){
    int num;
    srand((unsigned int)time(NULL));
    int res = random(3)+1;
    int a=0,b=0;
    while(1){
    num = inputInt();
    int i = output(num,res,&a,&b);
    if(i==1)
        break;
    }
    printf("당신이 졌습니다.\n");
    printf("게임결과 : %d 승 %d 무\n",a,b);

}
int inputInt(){
    int num;
    while(1){
    printf("# 바위는 1, 가위는 2, 보는 3 중에서 선택하세요 : ");
    scanf("%d",&num);
    if(num<1 || num>3)
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
int output(int num,int res,int *a,int *b){
    switch(num){
        case 1 : printf("  당신은 바위 선택, "); break;
        case 2 : printf("  당신은 가위 선택, "); break;
        case 3 : printf("  당신은 보 선택, "); break;
    }
    switch(res){
        case 1 : printf("컴퓨터는 바위 선택 : "); break;
        case 2 : printf("컴퓨터는 가위 선택 : "); break;
        case 3 : printf("컴퓨터는 보 선택 : "); break;
    }
    if(num==res){
        *b += 1;
        printf("비겼습니다.\n");
        return 0;
    }
    else if((num==1&&res==2)||(num==2&&res==3)||(num==3&&res==1)){            
        *a += 1;
        printf("이겼습니다.\n");
        return 0;
    }
    else
        return 1;
    
}