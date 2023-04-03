#include<stdio.h>

int main(){


    int first, second,sum,sub,mult;
    float div;
    char ch;
    scanf("%d %d %c",&first,&second);
    sum = first + second;
    sub = first - second;
    mult = first * second;
    div = (float)first / second;
    ch= '+';
    printf("%d %c %d = %d\n",first,ch,second,sum);
    ch= '-';
    printf("%d %c %d = %d\n",first,ch,second,sub);
    ch= '*';
    printf("%d %c %d = %d\n",first,ch,second,mult);
    ch= '/';
    printf("%d %c %d = %0.2f\n",first,ch,second,div);
    return 0;
}