#include<stdio.h>

int main(){
    int radius;
    const double PI = 3.14159;
    double volume;
    scanf("%d",&radius);
    volume = (4/3.0*PI*radius*radius*radius);
    printf("VOLUME = %0.3lf\n",volume);
    return 0;
}