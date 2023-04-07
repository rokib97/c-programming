#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int i,n,left_money;
    scanf("%d",&n);
    if(n <=1000){
        printf("Bad luck!\n");
    }
    else if(n > 1000){
        printf("I will buy Punjabi\n");
        left_money = n - 1000;
        if(left_money >= 500){
            printf("I will buy new shoes\nAlisa will buy new shoes\n");
        }
    }
    return 0;
}