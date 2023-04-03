#include<stdio.h>

int main(){


    int value;
    scanf("%d",&value);
    if(value > 0){
        printf("%d is positive\n",value);
    }else if(value < 0){
        printf("%d is negative\n",value);
    }else{
        printf("%d is zero\n",value);
    }
  
    return 0;
}