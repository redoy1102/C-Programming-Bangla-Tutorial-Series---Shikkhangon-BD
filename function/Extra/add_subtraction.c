#include<stdio.h>

//function of summation
void add(int x, int y)
{
    printf("The sum of two numbers is %d\n",x+y);
}

//function of subtracction
void sub(int x, int y)
{
    printf("Subtraction of two numbers is %d",x-y);
}
void main()
{
    add(10,20);
    sub(10,20);
}
