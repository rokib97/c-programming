#include<stdio.h>
int main(){


    int i;
    long long int b;
    float c;
    char ch;
    scanf("%d %lld %f %c",&i,&b,&c,&ch);
    printf("%d\n%lld\n%0.2f\n%c",i,b,c,ch);
    return 0;
}