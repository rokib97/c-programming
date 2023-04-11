#include<stdio.h>

int main(){

    int myArr[5];
    for(int i=0; i<=4;i++){
        scanf("%d",&myArr[i]);
    }
    printf("\n");
    for(int i=0; i<=4;i++){
        printf("%d\n",myArr[i]);
    }
    return 0;
}