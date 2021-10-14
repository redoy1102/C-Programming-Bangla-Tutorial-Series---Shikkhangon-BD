#include<stdio.h>
void main()
{
    int num1, num2, add, sub, mul, div, mod;

    printf("Enter a number: ");
    scanf("%d",&num1);

    printf("Enter another number: ");
    scanf("%d",&num2);

    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    div = num1 / num2;
    mod = num1 % num2;

    printf("Addition is: %d",add);
    printf("\nSubtraction is: %d",sub);
    printf("\nMultiplication is: %d",mul);
    printf("\nDevide is: %d",div);
    printf("\nModulus is: %d",mod);
}
