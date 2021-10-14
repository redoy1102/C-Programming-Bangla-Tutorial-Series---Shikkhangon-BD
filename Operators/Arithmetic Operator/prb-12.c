//Problem-12: Write a C Program to enter any number and calculate its square root.
#include<stdio.h>
void main(){
    int num, result;
    printf("Enter a number: ");
    scanf("%d",&num);
    result = sqrt(num);
    printf("Square root of %d = %d",num,result);
}
