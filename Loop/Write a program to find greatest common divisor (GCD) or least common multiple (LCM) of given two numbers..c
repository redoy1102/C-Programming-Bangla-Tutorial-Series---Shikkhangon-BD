#include<stdio.h>
void main()
{
    int num1, num2, n1, n2, gcd, lcm, rem;
    printf("Enter two numbers: ");
    negative:
    scanf("%d %d",&num1, &num2);
    if( (num1 < 0 && num2 < 0) || num1 < 0 || num2 < 0 ){
        printf("\nInvalid number!!\nPlease enter a positive number: ");
        goto negative;
    }
    else{
        n1 = num1;
        n2 = num2;
        while(n2 !=0){
            rem = n1 % n2;
            n1 = n2;
            n2 = rem;
        }
        printf("\nGCD is %d",n1);
        lcm = (num1*num2)/n1;
        printf("\nLCM  is %d",lcm);
    }
}
