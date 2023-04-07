#include<stdio.h>

int main(){

    double a,b,c,avg;
    float d=2,e=3,f=5;
    scanf("%lf %lf %lf",&a,&b,&c);
    avg = ((a*d) + (b*e) + (c*f)) / (d+e+f);
    printf("MEDIA = %0.1lf\n",avg);
    return 0;
}