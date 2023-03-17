#pragma warning(disable : 4996)
#include <stdio.h>
//데이터 역순으로 저장하기
void swap(int num[],int size);
int main(){
    int num[] = {1,2,3,4,5};
    int size = sizeof(num) / sizeof(num[0]);
    printf("처음 배열에 저장된 값 : ");
    for(int i = 0; i < size; i++)
        printf(" %d",num[i]);
    swap(num,size);
    printf("\n바뀐 배열에 저장된 값 : ");
    for(int j = 0; j < size; j++)
        printf(" %d",num[j]);
    printf("\n");
}
void swap(int *ip,int size){
    int temp;
    for(int i = 0; i < size/2; i++){
        temp = ip[i];
        ip[i] = ip[size-1-i];
        ip[size-1-i] = temp;
    }
}