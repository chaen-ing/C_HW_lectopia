#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
void inputString(char *cp);
void inputChar(char *ch);
int strcheck(char *cp,char ch);
void myFlush();
//문자 검색 프로그램 
int main(){
    char str[100];
    char ch;
    while(1){
        inputString(str);
        if(strcmp(str,"end")==0)
            break;
        myFlush();
        inputChar(&ch);
        myFlush();
        if(strcheck(str,ch)==-2)
            break;
        else if(strcheck(str,ch)==-1)
            printf("\"%s\"문자열 안에 \'%c\'문자는 존재하지 않습니다.\n\n",str,ch);
        else
            printf("\"%s\"문자열 안에 \'%c\'문자는 %d번 위치에 존재합니다.\n\n",str,ch,strcheck(str,ch));
        myFlush();
    }
    
}
void inputString(char *cp){
    printf("# 문자열을 입력하시오 : ");
    scanf("%s",cp);
    return;
}
void inputChar(char *ch){
    printf("# 문자를 입력하시오 : ");
    scanf("%c",ch);
    return;
}
void myFlush(){
    while(getchar()!='\n')
        ;
}
int strcheck(char *cp,char ch){
    int size = sizeof(cp)/sizeof(cp[0]);
    for(int i = 0; i < size; i++){
        if(cp[i]==ch)
            return i;
    }
    return -1;

}