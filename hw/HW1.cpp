#include <stdio.h>
void printAge(int age);
void printHeight(double height);

int main(){
    char name[20] = "김채은";
    int age = 21;
    double height = 165.55;

    printf("성명 : %s\n",name);
    printAge(age);
    printHeight(height);
}

void printAge(int age){
    printf("나이 : %d\n",age);
    return;
}

void printHeight(double height){
    printf("신장 : %.2lf\n",height);
    return;
}