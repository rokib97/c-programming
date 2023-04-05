#include<stdio.h>

int main(){


    int i;
    int num;
    printf("Please Enter a Number:\n");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        if(i % 2 == 0){
            printf("%d is even\n",i);
        }else{
            printf("%d is odd\n",i);
        }
    }

    return 0;
}