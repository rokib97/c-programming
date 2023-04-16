#include<stdio.h>

int main(){

    char ar[5];
    // for(int i=0; i<5; i++){
    //     scanf("%c",&ar[i]);
    // }
    // for(int i=0; i<5; i++){
    //     printf("%c",ar[i]);
    // }
    int size = sizeof(ar) / sizeof(char);
    printf("%d",size);
    return 0;
}