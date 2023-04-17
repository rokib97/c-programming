#include<stdio.h>
#include<string.h>
int main(){

    char s[1001],t[1001];
    scanf("%s %s",&s,&t);
    int first_len = strlen(s);  
    int second_len = strlen(t);
    printf("%d %d\n",first_len,second_len);
    printf("%s %s\n",s,t);  
    return 0;
}