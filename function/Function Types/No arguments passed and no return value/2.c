#include<stdio.h>

void aver(){
    int num1, num2, num3, res;
    num1 = 10, num2 = 20, num3 = 30;
    res = (num1 + num2 + num3) / 3;
    printf("Average of 3 numbers = %d",res);
}
void main(){
    aver();
}