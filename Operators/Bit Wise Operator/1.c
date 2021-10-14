#include<stdio.h>
void main(){
    int number;
    printf("Enter a number = ");
    scanf("%d",&number);

    (number & 1 == 1)
    ? printf("LSB of %d is set (1)",number)
    : printf("LSB of %d is set (0)",number);
}