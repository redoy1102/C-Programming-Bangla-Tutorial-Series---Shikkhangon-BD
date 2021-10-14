/*
Temp < 0 then Freezing weather
Temp 0-10 then very cold weather
Temp 10-20 then cold weather
Temp 20-30 then Normal in Temp
Temp 30-40 then its hot
Temp >=40 then its very hot
*/
#include<stdio.h>
int main(){
    int centi;
    printf("Enter temperature: ");
    scanf("%d",&centi);

    if(centi < 0){
        printf("Freezing weather");
    }
    else if(centi >= 0 && centi <= 10){
        printf("Freezing weather");
    }
    else if(centi >= 10 && centi <= 20){
        printf("cold weather");
    }
    else if(centi >= 20 && centi <= 30){
        printf("Normal in Temp");
    }
    else if(centi >= 30 && centi <= 40){
        printf("Its hot");
    }
    else if(centi >= 40){
        printf("Its very hot");
    }

    return 0;
}
