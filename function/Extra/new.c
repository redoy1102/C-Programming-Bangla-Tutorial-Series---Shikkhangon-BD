#include<stdio.h>
void add();
void main()
{
    add();
}
void add()
{
    int a, b, c;
    printf("Enter two number: ");
    scanf("%d %d",&a, &b);
    c = a + b;
    printf("Sum: %d",c);
}