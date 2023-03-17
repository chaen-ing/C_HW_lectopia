#include <stdio.h>
int main(){

    int total = 54321;
    int temp = total;
    int hour, min, sec;
    hour = temp / 3600;
    temp -= hour * 3600;
    min = temp / 60;
    temp -= min * 60;
    sec = temp;

    printf("%d초는 %d시간 %d분 %d초 입니다.\n",total,hour,min,sec);

}