#include<stdio.h>
void main()
{
    int x, y, temp;
    x = 5, y = 6;

    int *ptr1, *ptr2;
    ptr1 = &x;
    ptr2 = &y;

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("X = %d\n",x);
    printf("Y = %d",y);



    
}