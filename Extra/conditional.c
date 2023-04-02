#include<stdio.h>

int main(){


    // int devident,devisor,rem,quotient;
    // scanf("%d %d",&devident,&devisor);
    // quotient = devident / devisor;
    // rem = devident - (devisor * quotient);
    // if(rem == 0){
    //     printf("Even\n");
    // }else{
    //     printf("Odd\n");
    // }


    // if(n > 0){
    //     printf("The number is positive!\n");
    // }else if(n < 0){
    //     printf("The number is negative\n");
    // }
    // else{
    //     printf("The number is zero\n");
    // }

    // only if without eny else or if else 
    // if(n < 30){
    //     printf("n is less than 30\n");
    // }
    // if(n<50){
    //     printf("n is less than 50\n");
    // }


    // even or odd 

    // if(n % 2 == 0){
    //     printf("%d is even\n",n);
    // }else{
    //     printf("%d is odd\n",n);
    // }


    char ch;
    scanf("%c",&ch);
    // if(ch >='a' && ch <= "z"){
    //     printf("%c is lower case\n",ch);
    // }else if(ch >= 'A' && ch <= 'Z'){
    //     printf("%c is upper case\n",ch);
    // }

    // vowel or consonant 
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' ||ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("%c is vowel", ch);
    }else{
        printf("%c is consonant", ch);
    }
    return 0;
}