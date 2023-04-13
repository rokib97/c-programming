#include<stdio.h>

int main(){

    int n,x;
    scanf("%d",&n);
    int myArr[n];
    for(int i=0; i<n;i++){
        scanf("%d",&myArr[i]);
    }
    scanf("%d",&x);
    int ans = -1;
    for(int i=0; i<n;i++){
        if(myArr[i] == x){
            ans=i;
            break;
        }
    }
    printf("%d\n",ans);
    return 0;
}