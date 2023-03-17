#pragma warning(disable : 4996)
#include <stdio.h>
int inputWeight();
double inputHeight();
double BMI(int weight,double height);
void output(double bmi);
int main(){
    int weight = inputWeight();
    double height = inputHeight();
    double bmi = BMI(weight,height);
    output(bmi);
}
int inputWeight(){
    int weight;
    printf("몸무게를 입력하세요(kg) : ");
    scanf("%d",&weight);
    return weight;
}
double inputHeight(){
    double height;
    printf("키를 입력하세요(m) : ");
    scanf("%lf",&height);
    return height;
}
double BMI(int weight,double height){
    double bmi = (double)weight / (height * height);
    return bmi;
}
void output(double bmi){
    if(bmi < 18.5)
        printf("당신의 BMI는 %.1lf으로 저체중입니다.\n",bmi);
    else if((18.5 <= bmi) && (bmi < 25.0))
        printf("당신의 BMI는 %.1lf으로 정상체중입니다.\n",bmi);
    else if((25.0 <= bmi) && (bmi < 30.0))
        printf("당신의 BMI는 %.1lf으로 과체중입니다.\n",bmi);
    else if((30.0 <= bmi) && (bmi < 40.0))
        printf("당신의 BMI는 %.1lf으로 비만입니다.\n",bmi);
    else if(40.0 <= bmi)
        printf("당신의 BMI는 %.1lf으로 고도비만입니다.\n",bmi);
    
}