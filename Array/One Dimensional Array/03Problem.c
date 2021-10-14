#include<stdio.h>
void main()
{
    int num[100], i, range, sum;
    printf("Enter your range: ");
    scanf("%d",&range);

    printf("\nEnter %d values: ",range);
    for(i = 0; i < range; i++)
    {
        scanf("%d",&num[i]);
    }
    sum = 0;
    for(i = 0; i < range; i++)
    {
        sum = sum + num[i];
    }
    printf("Sum of %d numbers: %d",range,sum);
    printf("\nAverage of %d numbers: %d",range,sum / range);
}