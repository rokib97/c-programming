#include<stdio.h>
#include<string.h>
int main(){

    char ch[100];
    scanf("%s",&ch);
    // fgets(ch,20,stdin);
    // ch[20] ='\0';
    int count=0;
    int i=0;
    while(ch[i]!='\0'){
        count++;
        i++;
    }
    // for(int i=0; ch[i]!='\0';i++){
    //     count++;
    // }
    // printf("%d\n",count);
    printf("%d\n",strlen(ch));
    return 0;
}