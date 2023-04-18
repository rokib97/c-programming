#include<stdio.h>
#include<string.h>
int main(){

    char ch[1000001];
    // scanf("%s",&ch);
    fgets(ch,1000001,stdin);
    int sum =0;
    int length = strlen(ch);
    for(int i=0; i<length;i++){
        sum+=(ch[i]-'0');
    }
    printf("%d\n",sum);
    return 0;
}