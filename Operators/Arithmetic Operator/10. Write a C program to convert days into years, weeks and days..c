//Problem-10: Write a C Program to convert days into years, weeks.
#include<stdio.h>
void main()
{
int d, y, w;
printf("Enter your total years = ");
scanf("%d",&d);
y = d / 365;
w = d / 7;

printf("%d days  = %d weeks", d, w);
printf("\n%d days  = %d years", d, y);
}
