#include<stdio.h>

int main(){

    int product1,unit1,product2,unit2;
    float price1,price2,total;
    scanf("%d %d %f\n%d %d %f",&product1,&unit1,&price1,&product2,&unit2,&price2);
    total = (unit1*price1) + (unit2*price2);
    printf("VALOR A PAGAR: R$ %0.2f\n",total);
    return 0;
}