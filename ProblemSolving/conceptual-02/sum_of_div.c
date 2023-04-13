#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int div_sum_2=0;
    int div_sum_3=0; //15 3 4 7 2
    int temp;
    for(int i=0; i<n; i++){
        int a;
        scanf("%d",&a);
        if(a % 2 ==0){
            div_sum_2 += a;
        }else if(a % 3 ==0){
            div_sum_3+=a;

        }
    }
    printf("%d %d",div_sum_2,div_sum_3);
    return 0;
}