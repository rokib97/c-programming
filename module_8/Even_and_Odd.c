#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&myArr[i]);
    }
    int even_sum=0,odd_sum=0;
    for(int i=0; i<n; i++){
        if(myArr[i] % 2 == 0){
            even_sum+= myArr[i];
        }else{
            odd_sum+=myArr[i];
        }
    }
    printf("%d %d",even_sum,odd_sum);
    return 0;
}