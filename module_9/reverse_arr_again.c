#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int myArr[n];
    for(int i=0; i<n; i++){
        myArr[i] = arr[n-i-1];
    }
    for(int i=0; i<n;i++){
        printf("%d ",myArr[i]);
    }
    return 0;
}