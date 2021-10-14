//C program to check leap year

#include<stdio.h>
void main(){
    int year;
    printf("Enter a year = ");
    scanf("%d",&year);

    (year %400 == 0)
    ? printf("%d is leap year",year)

    : ( (year %4 == 0) && (year %100 != 0)
    ? printf("%d is leap year",year)
    
    : printf("%d is not leap year",year));
}