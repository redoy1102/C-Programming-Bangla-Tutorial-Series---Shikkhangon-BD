#include<stdio.h>
void main()
{
    int array[100], i, range, even, odd;
    printf("Enter a range for array: ");
    scanf("%d",&range);
    printf("Enter your array: ");
    for(i = 0; i < range; i++)
    {
        scanf("%d",&array[i]);
    }

    even = 0;
    odd = 0;
    for(i = 0; i < range; i++)
    {
        if(array[i] % 2 == 0)
        {
            even++;
        }else{
            odd++;
        }
    }
    printf("Total even numbers: %d",even);
    printf("\nTotal odd numbers: %d",odd);
}