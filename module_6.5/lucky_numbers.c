#include<stdio.h>

int main(){

    int number,first,last;
    scanf("%d",&number);
    // printf("cheking----%d\n------%d\n",number/10,number%10);
    if(((number % 10) % (number/10) == 0) ||(number /10) % (number%10) == 0){
        printf("YES\n");
    }else{
        printf("NO\n");
    }
    return 0;
}