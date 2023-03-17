#include <stdio.h>
#pragma warning(disable : 4996)
int main(){
    char str1[20], chr[20];
    printf("input string(1) : ");
    scanf("%s",str1);
    printf("input string(2) : ");
    scanf("%s",chr);
    printf("str : %s\n",str1);
    printf("chr : %s\n",chr);
    return 0;
}