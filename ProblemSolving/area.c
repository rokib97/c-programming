#include<stdio.h>

int main(){

    double r,area;
    double PI = 3.14159;
    scanf("%lf",&r);
    area = PI * (r * r);
    printf("A=%0.4lf\n",area);

    return 0;
}