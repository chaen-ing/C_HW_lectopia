#include <stdio.h>
int main(){
    double day = 365.2422;
    double temp = day;
    int iday, ihour, imin;
    double isec;

    iday = (int)day;
    temp -= (double)iday;
    ihour = (int)(temp * 24);
    temp -= (double)ihour / 24.0;
    imin = (int)(temp * 1440);
    temp -= (double)imin / 1440.0;
    isec = temp * 86400.0;
    printf("%.4lf일은 %d일 %d시간 %d분 %.2lf초입니다.\n",day,iday,ihour,imin,isec);

}