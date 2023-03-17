#pragma warning(disable : 4996)
#include <stdio.h>
double inputDistance();
double inputSpeed();
void output(double distance, double speed);
int main()
{
    double distance = inputDistance();
    double speed = inputSpeed();
    output(distance,speed);
}
double inputDistance(){
    double distance;
    printf("거리를 입력하시오(km단위) : ");
    scanf("%lf",&distance);
    return distance;
}
double inputSpeed(){
    double speed;
    printf("시속을 입력하시오(km/h단위) : ");
    scanf("%lf",&speed);
    return speed;
}
void output(double distance, double speed){
    int hour, min;
    double sec;
    double temp;

    hour = (int)(distance / speed);
    temp = distance / speed - (double)hour;
    min = (int)(temp * 60.0);
    temp = temp * 60 - (double)min;
    sec = temp * 60.0;
    printf("%.2lf km = > %d시간 %d분 %.3lf 초 소요됨\n",distance,hour,min,sec);
}