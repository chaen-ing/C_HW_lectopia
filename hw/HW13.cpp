#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
int main(){
    unsigned int len1, len2;
    char first[10],last[10];
    printf("#성을 입력하시오 : ");
    scanf("%s",first);
    printf("#이름을 입력하시오 : ");
    scanf("%s",last);
    len1 = strlen(first);
    len2 = strlen(last);
    printf("%s\t%s\n",first,last);
    for(int i=0;i<len1-1;i++)
        printf(" ");
    printf("%d\t",len1);
    for(int i=0;i<len2-1;i++)
        printf(" ");
    printf("%d\n",len2);
}