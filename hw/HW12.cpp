#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
int main(){
    char name[20];
    printf("이름을 입력하시오 : ");
    fgets(name,sizeof(name),stdin);
    name[strlen(name)-1]='\0';
    printf("\"%s\"\n",name);
    printf("\"%20s\"\n",name);
    printf("\"%-20s\"\n",name);
}