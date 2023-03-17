#pragma warning(disable : 4996)
#include <stdio.h>
//최솟값, 최대값 찾기
void input(double num[5]);
double getMax(double num[5]);
double getMin(double num[5]);
void output(double max, double min);
void myFlush();
int main(){
    double num[5];
    input(num);
    double max = getMax(num);
    double min = getMin(num);
    output(max,min);
}
void input(double num[5]){
    for(int i = 0; i < 5; i++){
        printf("%d 번 방 값 : ",i);
        scanf("%lf",&num[i]);
        if(getchar()!='\n'){
            myFlush();
            i--;
            continue;
        }
    }

}
double getMax(double num[5]){
    double max = num[0];
    for(int i = 1; i < 5; i++){
        if(num[i] > max)
            max = num[i];
    }
    return max;
}
double getMin(double num[5]){
    double min = num[0];
    for(int i = 1; i < 5; i++){
        if(num[i] < min)
            min = num[i];
    }
    return min;
}
void output(double max, double min){
    printf("\n가장 큰 값 : %.2lf\n",max);
    printf("가장 작은 값 : %.2lf\n",min);
    return;
}
void myFlush(){
    while(getchar()!='\n'){
        ;
    }
}