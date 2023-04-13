#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int myArr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&myArr[i]);
    }
    int x,y;
    scanf("%d %d",&x,&y);
    for(int j=n-1; j>=0; j--){
        if(j == x){
            myArr[j] = y;
        }
        printf("%d ",myArr[j]);
    }
    return 0;
}