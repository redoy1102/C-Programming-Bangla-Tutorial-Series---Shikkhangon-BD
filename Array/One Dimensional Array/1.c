#include<stdio.h>
void main()
{
    int num[5] = {1,2,3,4,5} ,sum, i;
    sum = 0;
    for(i = 0; i < 5; i++)
    {
        sum = sum + num[i];
    }
    printf("Sum of 5 numbers: %d",sum);
}