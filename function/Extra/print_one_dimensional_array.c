#include<stdio.h>

void display(int x[])
{
    int i;
    for(i = 0; i < 7; i++)
    {
        printf("%d ",x[i]);
    }
}

void main()
{
    int arr[] = {10,11,12,13,14,15,16};
    display(arr);
}