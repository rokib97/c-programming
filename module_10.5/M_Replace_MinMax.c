#include<stdio.h>
#include<limits.h>
int main(){

    int n;
    scanf("%d",&n);
    int myArr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&myArr[i]);
    }
    int min = INT_MAX, max = INT_MIN, min_pos, max_pos,temp;
    for(int i=0; i<n; i++){
        if(myArr[i] < min){
            min =myArr[i];
            min_pos=i;
        }
        if(myArr[i] > max){
            max=myArr[i];
            max_pos= i;
        }
      
    }
    temp = myArr[max_pos] ;
    myArr[max_pos]=myArr[min_pos];
    myArr[min_pos]=temp;
    for(int i=0; i<n;i++){
        printf("%d ",myArr[i]);
    }
    return 0;
}