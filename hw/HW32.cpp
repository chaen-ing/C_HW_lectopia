#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include <math.h>
int inputUInt(char s[30]);
double inputDouble(char s[30]);
int ipow(int num,int N);
double fpow(double fnum,int N);
int main(){
    int a = inputUInt("* 양의 정수 밑을 입력 하시오 : ");
    int b = inputUInt("* 양의 정수 승을 입력 하시오 : ");
    printf("%d의 %d승은 %d입니다.\n\n",a,b,ipow(a,b));
    double c = inputDouble("* 양의 실수 밑을 입력 하시오 : ");
    int d = inputUInt("* 양의 실수 승을 입력 하시오 : ");
    printf("%.2lf의 %d승은 %.3lf입니다.\n",c,d,fpow(c,d));
}
int inputUInt(char s[30]){
    printf("%s",s);
    int a;
    scanf("%d",&a);
    return a;
}
double inputDouble(char s[30]){
    printf("%s",s);
    double a;
    scanf("%lf",&a);
    return a;
}
int ipow(int num,int N){
    return (int)pow((double)num,(double)N);
}
double fpow(double fnum,int N){
    return pow(fnum,(double)N);
}

