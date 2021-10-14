#include<stdio.h>
void main()
{
    int num[5],i,sum;
    printf("Enter five numbers: ");
    for(i = 0; i < 5; i++)
    {
        scanf("%d",&num[i]);
    }
    sum = 0;
    for(i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }
    printf("Sum of five numbers: %d",sum);
}