// Write a C program to print all alphabets from z to a. – using while loop

#include<stdio.h>

int main(){

    char ch = 122;
    while(ch >= 97){
        printf("%c\n",ch);
        ch--;
    }

    // for(int i=122; i>=97; i--){
    //     printf("%c\n",i);
    // }
    return 0;
}