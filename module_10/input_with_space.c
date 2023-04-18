#include<stdio.h>
#include<string.h>
int main(){

    char ch[50];
    // taking input without scanf also with sapce 
    // gets(ch);
    fgets(ch,20,stdin);
    ch[20] ='\0';
    printf("%s\n",ch);
    return 0;
}