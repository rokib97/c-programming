#include<stdio.h>

int main(){

    int ar[5];
    // for(int i=0; i<5; i++){
    //     scanf("%c",&ar[i]);
    // }
    // for(int i=0; i<5; i++){
    //     printf("%c",ar[i]);
    // }
    int size = sizeof(ar) / sizeof(int);
    printf("%d\n",size);
    return 0;
}