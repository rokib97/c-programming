#include<stdio.h>
#include<string.h>
int main(){

    char ch[1000001];
    scanf("%s",&ch);
    int sum =0;
    for(int i=0; i<strlen(ch);i++){
        sum+=(ch[i]-'0');
    }
    printf("%d\n",sum);
    return 0;
}