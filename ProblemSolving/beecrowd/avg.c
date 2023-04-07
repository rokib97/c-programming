#include<stdio.h>

int main(){

    double a,b,avg;
    float c= 3.5,d=7.5;
    scanf("%lf %lf",&a,&b);
    avg = ((a*c) + (b *d)) / (c+d);
    printf("MEDIA = %0.5lf\n",avg);
    return 0;
}