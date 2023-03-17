#include <stdio.h>
int main(){
    float x;
    int count = 1;
    for(x=0.1f ; x<=1.0f; x+=0.1f)
    {
        printf("%d.x = $.10f\n",count++,x);
    }
}