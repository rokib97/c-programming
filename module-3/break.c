#include<stdio.h>

int main(){

    int i, num;
    printf("Enter The Numbr: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        printf("%d\n",i);
        if(i ==5){
            break;
        }
    }

    return 0;
}