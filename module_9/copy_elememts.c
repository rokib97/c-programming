#include<stdio.h>

int main(){

    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0; i<n; i++){
        scanf("%d",&a[i]);
    }
    int m;
    scanf("%d",&m);
    int b[m];
    for(int i=0; i<m;i++){
        scanf("%d",&b[i]);
    }
    int res[n+m];
    for(int i=0; i<n+m;i++){
        res[i] = a[i];
    }
    int i=n;
    for(int j=0;j<m;j++){
        res[i] = b[j];
        i++;

    }
    for(int i=0;i<n+m;i++){
        printf("%d ",res[i]);
    }
    return 0;
}