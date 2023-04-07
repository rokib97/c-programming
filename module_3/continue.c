#include<stdio.h>

int main(){

    int i, num;
    printf("Enter The Numbr: ");
    scanf("%d",&num);
    for(i=1; i<=num; i++){
        
        if(i ==5){
            continue;
        }
        printf("%d\n",i);
    }

    return 0;
}