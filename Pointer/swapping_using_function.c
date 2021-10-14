#include<stdio.h>
void swap(int *ptr1, int *ptr2)
{
    printf("Before swap: x = %d, y = %d\n",*ptr1,*ptr2);
    int temp;
    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
    printf("After swap: x = %d, y = %d\n\n",*ptr1,*ptr2);
}

void main()
{
    int x, y;
    x = 10;
    y = 20;

    swap(&x, &y);
}