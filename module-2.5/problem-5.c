#include<stdio.h>

int main(){


    int value;
    scanf("%d",&value);
    if(value >= 10000){
        printf("Gucci Bag\n");
        
        if(value >= 20000){
            printf("Gucci Belt!\n");
        }
    }else if(value>=5000){
        printf("Levis Bag\n");
    }else{
        printf("Something from Patal Market!\n");
    }
    return 0;
}