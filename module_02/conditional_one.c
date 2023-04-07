#include<stdio.h>
#include<stdbool.h>>
int main(){
    int taka;
    bool isOpen = false;
    scanf("%d",&taka);
    if(taka==100 || isOpen){
        printf("Eat The burger!");
    }else{
        printf("Not Having enough money");
    }
    return 0;
}