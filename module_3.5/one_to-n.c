#include<stdio.h>

int main(){

    int i=1,num;
    scanf("%d",&num);
    while(i <= num){
        if(i % 5 == 0){
            printf("%d Yes\n",i);
        }else{
            printf("%d No\n",i);      
        }
        i++;
    }
    return 0;
}