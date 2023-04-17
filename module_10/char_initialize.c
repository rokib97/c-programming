#include<stdio.h>

int main(){

    // char ar[5] = {'R','o','k','i','b'};
    // alternative way to initialize
    char ar[6] ="rokib";
    // for(int i=0; i<5; i++){
    //     printf("%c\n",ar[i]);
    // }
    // string array super power
    // size 6 beacuse of null char automatically initilize "\0"
    int size = sizeof(ar); 
    printf("%d\n",size);
    printf("%s\n",ar);
    return 0;
}