#include<stdio.h>

int main(){

    int eye,face,body,small,art,rem_eye,rem_face,rem_body;
    scanf("%d %d %d",&eye,&face,&body);
    if(eye ==0 || face==0 || body == 0){
        printf("%d\n",0);
    }
    if(eye < face && eye < body){
        small = eye;
    }else if(face < eye && face < body){
        small = face;
    }else{
        small=body;
    }
    return 0;
}