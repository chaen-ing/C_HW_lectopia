#pragma warnig (disable : 4996)
#include <stdio.h>
void myFlush();
int main()
{
    int score;
    char myClass;
    printf("점수 입력 : ");
    scanf("%d",&score);

    myFlush();

    printf("반명입력(ABC) : ");
    myClass = getchar();
    printf("점수 : %d / 반명 : %c\n",score,myClass);
    return 0;
}
void myFlush(){
    char ch;
    ch = getchar();
    while(ch != '\n')
    {
        ch = getchar();
    }
    return;
}