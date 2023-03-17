#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
int main(){
    int a,b;
    while(true){
        printf("# 두개의 정수를 입력하세요 : ");
        scanf("%d %d",&a,&b);
        if(getchar()=='\n'){
            int max,min;
            a>b ? (max = a,min=b): (max=b,min=a);
            printf("%d - %d = %d\n",max,min,(max-min));
        }
        else
            break;
    }
}