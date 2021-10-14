#include<stdio.h>
void main()
{
    int range, max, min, i, array[100];
    printf("Enter the range of your array: ");
    scanf("%d",&range);
    printf("Enter your array: ");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&array[i]);
    }

    max = array[0];
    min = array[0];
    for(i = 0; i < range; i++)
    {
        if(array[i] > max)
        {
            max = array[i];
        }
        else if(array[i] < min)
        {
            min = array[i];
        }
    }
    printf("Maximum number is: %d",max);
    printf("\nMinimum number is: %d",min);
}
