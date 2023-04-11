#include<stdio.h>

int main(){

    long long int eye, mouth, body, min_eye_or_body, result;
    scanf("%lld %lld %lld",&eye,&mouth,&body);
    // if(body < eye){
    //     min_eye_or_body = body;
    // }else{
    //     min_eye_or_body=eye;
    // }
    // if(mouth < min_eye_or_body){
    //     result = mouth;
    // }else{
    //     result = min_eye_or_body;
    // }
    if(body < eye && body < mouth){
        result = body;
    }else if(eye < body && eye < mouth){
        result = eye;
    }else{
        result = mouth;
    }
    body -= result;
    eye -= result;
    if(eye/2 < body){
        result += eye/2;
    }else{
        result += body;
    }
    printf("%lld\n",result);
   

    return 0;
}