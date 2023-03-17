#include <stdio.h>
int main(){
    float x;
    int count = 1;
    for(x=100000001.0f; x<=1000000010.0f;x+=1.0f){
        printf("%d.x = %.30f\n",count++,x);
    }
}