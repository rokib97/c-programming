#include<stdio.h>

int main(){

    char name[20];
    double salary,total_sell,final_salary;
    scanf("%s %lf %lf",&name,&salary,&total_sell);
    final_salary = salary + ((total_sell * 15 / 100));
    printf("TOTAL = R$ %0.2lf\n",final_salary);
    return 0;
}