#pragma warning(disable : 4996)
#include <stdio.h>
//구구단 출력하기
int main(){
    printf("<2중 for문을 이용한 출력 >\n");
    for(int i = 1; i<10; i++){
        for(int j = 2; j<6; j++){
            printf("%d*%d=%d\t\t",j,i,j*i);
        }
        printf("\n");
    }
    printf("\n");
    for(int i = 1; i<10; i++){
        for(int j = 6; j<10; j++){
            printf("%d*%d=%d\t\t",j,i,j*i);
        }
        printf("\n");
    }
    printf("-------------------------------------------------------\n\n");
    printf("<3중 for문을 이용한 출력>\n");
    for(int k = 1; k < 3; k++){
        for(int l = 1; l <10; l++){
            for(int m = 4 * k - 2 ; m < 4 * k + 2; m++){
                printf("%d*%d=%d\t\t",m,l,m*l);
            }
            printf("\n");
        }
        printf("\n");
    }
}