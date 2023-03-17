#pragma warning(disable : 4996)
#include <stdio.h>
int main(){
    int n;
    printf("피보나치 수열의 항수를 입력하시오 : ");
    scanf("%d",&n);
    int t1 = 1, t2 = 1, nextTerm;
    int sum = 0, cnt = 0;

    while(cnt < n){
        if(cnt == n-1)
            printf("%d ",t1);
        else
            printf("%d + ",t1);
        nextTerm = t1 + t2;
        sum += t1;
        cnt++;
        t1 = t2;
        t2 = nextTerm;
    }
    printf("= %d\n",sum);
}