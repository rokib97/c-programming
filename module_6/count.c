#include<stdio.h>

int main(){

    int n,a,even=0,odd=0,pos=0,neg=0;
    scanf("%d",&n);
    for(int i =1; i<=n; i++){
        scanf("%d",&a);
        if(a % 2 == 0){
            even++;
        }else if(a % 2 == 1 || a % 2 == -1){
            odd++;
        }
        if(a < 0){
            neg++;
        }else if (a > 0){
            pos++;
        }
    }
    printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d\n",even,odd,pos,neg);
    return 0;
}