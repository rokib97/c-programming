#include<stdio.h>

int main(){

   double a,b,c,traingle,circle,trapezium,square,rectangle;
   scanf("%lf %lf %lf",&a,&b,&c);
   traingle = (a * c) / 2;
   circle = c * c * 3.14159;
   trapezium =  ((a + b) / 2) * c;
   square = b * b;
   rectangle= a * b;
   printf("TRIANGULO: %.3lf\n",traingle);
   printf("CIRCULO: %.3lf\n",circle);
   printf("TRAPEZIO: %.3lf\n",trapezium);
   printf("QUADRADO: %.3lf\n",square);
   printf("RETANGULO: %.3lf\n",rectangle);
   return 0;
}