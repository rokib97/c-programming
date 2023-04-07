#include<stdio.h>

int main(){

    // declare a vabiable int char float
    // int num;
    // num = 10;
    int num = 10;
    float number = 10.5;
    char name = "Z";
    // showing output with format Specifier 
    printf("%d\n%f\n%c\n",num,number,name);
    printf("Showing upto two digit float: %0.2f",number);
    return 0;
}

// Summary: 
// => for declare variable need to specify the data type like int float char bool

// =>data type then variable name then assignment operator then value used to declare variable and assign value 

// => for showing variable value we need specifier  like %d %f %c 
// => for showing upto fixed to two deciaml after point we can use %0.2f 