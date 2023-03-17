#pragma warning(disable : 4996)
#include <stdio.h>
void sort(int *ip,int size);
void output(char s[30],int *ip,int size);
//정수값 소트 프로그램 
int main(){
    int num[] = {8,2,4,11,1,6};
    int size = sizeof(num)/sizeof(num[0]);
    output("# 소트 전 데이터 : ",num,size);
    sort(num,size);
    output("\n# 소트 후 데이터 : ",num,size);
}
void sort(int *ip,int size){
    for(int i = 0; i < size; i++){
        for(int j = i+1; j < size; j++)
            if(ip[i] > ip[j]){
                int temp = ip[j];
                ip[j] = ip[i];
                ip[i] = temp;
            }
    }
    return;
}
void output(char s[30],int *ip,int size){
    printf("%s",s);
    for(int i = 0; i < size; i++)
        printf("%d ",ip[i]);
    return;
}