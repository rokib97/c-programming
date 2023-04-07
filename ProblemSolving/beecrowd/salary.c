#include<stdio.h>

int main(){

    int employee_number,worked_hours;
    float ammount_per_hour,salary;
    scanf("%d %d %f",&employee_number,&worked_hours,&ammount_per_hour);
    salary = worked_hours*ammount_per_hour;
    printf("NUMBER = %d\nSALARY = U$ %0.2f\n",employee_number,salary);
    return 0;
}