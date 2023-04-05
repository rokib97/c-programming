#include<stdio.h>

int main(){
    int i =1,num;
    printf("Please Enter A Number: ");
    scanf("%d",&num);
    while(i<=num){
        printf("%d X %d = %d\n", num, i, num*i);
        i=i+1;
    }
    return 0;
}