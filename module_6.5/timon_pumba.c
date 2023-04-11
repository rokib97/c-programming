#include<stdio.h>

int main(){

    int a,b,diff;
    scanf("%d %d",&a,&b);
    diff = a - b;
    if(diff >= 0){
        printf("%d\n",diff);
    }else{
        printf("%d\n",0);
    }
    return 0;
}