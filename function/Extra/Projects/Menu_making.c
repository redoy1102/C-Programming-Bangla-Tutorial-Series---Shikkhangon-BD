#include<stdio.h>
void main()
{
    int input, n1, n2;
    printf("Enter two numbers: ");
    scanf("%d %d",&n1,&n2);

    printf("\nEnter 1 for Addition.");
    printf("\nEnter 2 for Subtraction.");
    printf("\nEnter 3 for Multiplication.");
    printf("\nEnter 0 to exit.");

    printf("\n\nEnter a number: ");
    scanf("%d",&input);

    switch(input)
    {
        case 1:
        printf("Addition of %d and %d = %d",n1,n2,n1+n2);
        break;

        case 2:
        if(n1 > n2)
        {
            printf("Subtraction of %d and %d = %d",n1,n2,n1-n2);
        }
        else{
            printf("Subtraction of %d and %d = %d",n2,n1,n2-n1);
        }
        break;

        case 3:
        printf("Multiplication of %d and %d = %d",n1,n2,n1*n2);
        break;

        default:
        printf("Your program exit.");
        break;
    }
}