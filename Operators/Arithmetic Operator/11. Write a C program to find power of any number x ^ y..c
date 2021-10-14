//Problem-11: Write a C Program to find power of any number. [x^y]
#include<stdio.h>
#include<math.h>
void main()
{
    int base, power, result;
    printf("Enter the value of base = ");
    scanf("%d",&base);

    printf("\nEnter the value of power = ");
    scanf("%d",&power);
    result = pow(base,power);
    printf("Result = %d",result);
}
