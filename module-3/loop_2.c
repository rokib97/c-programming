#include<stdio.h>

int main(){


    int i;
    int num;
    int sum = 0;
    printf("Please Enter The Number: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        sum += i;
    }
    printf("%d\n",sum);
    return 0;
}