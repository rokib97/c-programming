#include<stdio.h>

int main(){


    // int rahim;
    // char name;
    // float number;
    // scanf("%d %c %f", &rahim, &name, &number);
    // printf("%d\n%c\n%0.2f\n",rahim,name,number);

// taking % character beside a int variable  as char input
    // int a,b;
    // char c;
    // scanf("%d%c %d%c",&a, &c,&b,&c);
    // printf("%d%c %d%c",a,c,b,c);
    
    // taking any char beside int data type 
    int a,b;
    scanf("%da10 %da10",&a,&b);
    printf("%da10 %da10",a,b); 
    return 0;

}

// Summary:
// using scanf which is come from stdio.h can take format specifier for taking user input, we have to specify the type like %d %f %c . and we have to pass the address to the specifier using (&) . 

// we can take any char beshide a int type just either using char input taking sytem which is using %c for single character otherwise just beshide the identifier we have type the letter we want to pass 