#include<stdio.h>

int main(){

    int n,sum=0;
    // for(scanf("%d",&n);n !=0 ; n/=10){
    //     sum += n%10;  
    // }
    // printf("%d\n",sum);
    scanf("%d",&n);
    // for(;n!=0;){
    //     sum += n%10;
    //     n= n/10;
    // }
    // printf("%d\n",sum);

    while(n !=0){
        sum += n%10;
        n= n/10;
    }
    printf("%d\n",sum);
    return 0;
}