#pragma warning(disable : 4996)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
void initialization(int (*p)[4],int row);
void outputSum(int (*p)[4],int row);
int random(int n);
int main(){
    int num[3][4];
    int row = sizeof(num)/sizeof(num[0]);
    srand((unsigned int)time(NULL));
    initialization(num,row);
    outputSum(num,row);
}
void initialization(int (*p)[4],int row){
    for(int i = 0; i < row; i++){
        for(int j = 0; j < 4; j++){
            p[i][j]=random(9)+1;
        }
    }
}
void outputSum(int (*p)[4],int row){
    int sum = 0;
    for(int i = 0; i < row; i++){
        printf("%d행\t: ",i);
        for(int j = 0; j < 4; j++){
            sum += p[i][j];
            printf("%2d ",p[i][j]);
        } 
        printf("\t\t%d행의 합 : %d\n",i,sum);
        sum = 0;
    }
    printf("열의 합 : ");
    for(int k = 0; k < 4; k++){
        for(int l = 0; l < row; l++){
            sum+= p[l][k];
        }
        printf("%2d ",sum);
        sum = 0;
    }
}
int random(int n){
    int res;
    res = rand()%n;
    return res;
}