#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
int main(){
    for(int i = 0; i < 2; i++){
        char name[20];
        double height;
        char sex;
        printf("# 성명 입력 : ");
        fgets(name,sizeof(name),stdin);
        name[strlen(name)-1]='\0';
        printf("# 키 입력(cm단위) : ");
        scanf("%lf",&height);
        while(getchar() != '\n'){
            ;
        }
        printf("# 성별 입력(M/F) : ");
        scanf("%c",&sex);
        if (sex == 'M')
            printf("%s씨의 키는 %.2lfcm이고 남성입니다.\n",name,height);
        else
            printf("%s씨의 키는 %.2lfcm이고 여성입니다.\n",name,height);
        printf("\n");
        while(getchar() != '\n'){
            ;
        }
    } 
}