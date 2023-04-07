#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main(){
    int a,b;
    long long int mult;
    scanf("%d %d",&a,&b);
    mult = (long long)a*b;
    printf("%lld\n",mult);
    return 0;
}