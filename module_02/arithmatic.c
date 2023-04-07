#include<stdio.h>

int main(){
    int a,b,sum,sub,mod;
    float div,mult;
    a=20;
    b=6;
    sum = a + b;
    sub = a - b;
    mult = (float)a * b;
    div = (float)a / b;
    mod = a % b;

    // printf("%0.2f\n",div);
    printf("%0.2f",mult);
    return 0;
}