#pragma warning(disable : 4996)
#include <stdio.h>
int main(){
    for(int i = 1; i<101; i++){
        if(i % 15 == 0)
            printf("%3d",i);
        else if(i % 3 == 0)
            printf("  *");
        else if(i % 5 == 0)
            printf("  #");
        else
            printf("%3d",i);
        
        if(i % 10 == 0)
            printf("\n");
    }
}