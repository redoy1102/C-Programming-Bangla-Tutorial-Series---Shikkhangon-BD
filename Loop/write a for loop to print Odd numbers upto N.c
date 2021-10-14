//Write a for loop to print Odd numbers upto N
#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    negative:
    scanf("%d",&n);
    if(n < 0){
        printf("Invalid number!!\nEnter a positive number: ");
        goto negative;
    }
    else
    {
        for(int i = 1; i <= n; i += 2){
            printf("%d\n",i);
        }
    }
}

