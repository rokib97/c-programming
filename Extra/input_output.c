#include<stdio.h>

int main(){

    // int a,b,sum;
    // a=50;
    // b=60;
    // sum = a + b;
    // printf("Sum is: %d",sum);

    // int x,y;
    // x = 1;
    // y = x;
    // x = 2;
    // printf("The Value Of Y is: %d\n",y);


    // int a,b,sum;
    // a=50;
    // b=60;
    // sum = a + b;
    // printf("%d + %d = %d",b,a,sum);

    // int a,b,sum;
    // a=50.50;
    // b=60;
    // sum = a + b;
    // printf("%d + %d = %d",a,b,sum);

    // int n;
    // double x;
    // x = 10.50;
    // n = (int) x;
    // printf("Value of n is %d\n",n);
    // printf("Value of x is %lf\n",x);

    // double a, b, sum;
    // a = 9.5;  
    // b = 8.743;
    // sum = a + b;
    // printf("Sum is: %d\n",sum);  
    // printf("Sum is: %0.2lf",sum);  

    // int first,second,sum;
    // scanf("%d %d",&first,&second);
    // sum = first + second;
    // printf("Sum is: %d\n",sum);

    // double numOne, numTwo, sum;
    // scanf("%lf %lf", &numOne, &numTwo);
    // sum = numOne + numTwo;
    // printf("Sum is: %0.2lf",sum);

    // char ch;
    // scanf("%c",&ch);
    // printf("The First letter Of Your Name is: %c\n",ch);

    // using getchar 

    // char ch;
    // ch = getchar();
    // printf("First Letter of my name is : %c\n",ch);

    // int a,b,sum,sub,mult,div;
    // scanf("%d %d", &a,&b);
    // sum = a+b;
    // sub = a-b;
    // mult = a*b;
    // div = a/b;

    // printf("addition: %d + %d = %d\n",a,b,sum);
    // printf("sub: %d - %d = %d\n",a,b,sub);
    // printf("mul: %d * %d = %d\n",a,b,mult);
    // printf("div: %d / %d = %d\n",a,b,div);

    // double a,b,sum,sub,mult,div;
    // char ch;
    // scanf("%lf %lf", &a,&b);
    // sum = a+b;
    // sub = a-b;
    // mult = a*b;
    // div = a/b;

    // ch = '+';
    // printf("addition: %0.2lf %c %0.2lf = %0.2lf\n",a,ch,b,sum);
    // ch = "-";
    // printf("sub: %0.2lf %c %0.2lf = %0.2lf\n",a,ch,b,sub);
    // ch = "*";
    // printf("mul: %0.2lf %c %0.2lf = %0.2lf\n",a,ch,b,mult);
    // ch = "/";
    // printf("div: %0.2lf %c %0.2lf = %0.2lf\n",a,ch,b,div);

    int value,i;
    printf("Please Enter a value: ");
    scanf("%d",&value);
    for(i=1; i<=10; i++){
        printf("%d\n",i);
    }
    return 0;
}