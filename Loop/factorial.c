//C program to find factorial.
#include <stdio.h>
void main()
{
    int n, fact = 1;
    printf("Enter a number: ");

    label1:

    scanf("%d",&n);

    if( n < 0)
    {
        printf("Invalid number!!\nEnter a positive number: ");
        goto label1;
    }
    else{
        for(int i = 1; i <= n; i++){
            fact = fact * i;
        }
        printf("factorial of %d : %d",n,fact);
    }
}

