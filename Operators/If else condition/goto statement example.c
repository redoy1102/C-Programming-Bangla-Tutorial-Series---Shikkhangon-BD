//Write a c program to calculate sum of two positive numbers.
#include<stdio.h>
void main()
{
    int num1, num2;
    printf("Enter two numbers: ");
    negative:
    scanf("%d %d",&num1, &num2);

    if(num1 < 0 || num2 < 0){
        printf("You entered a negative number.\nPlease enter positive number: ");
        goto negative;
    }
    else{
        int sum = num1 + num2;
        printf("Sum is %d\nInput two another number: ",sum);
        goto negative;
    }
}
