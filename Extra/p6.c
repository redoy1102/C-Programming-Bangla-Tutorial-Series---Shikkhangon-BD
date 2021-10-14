//Write a C program to check whether a year is leap year or not.
#include<stdio.h>
int main(){\
    int year;
    printf("Enter your year: ");
    scanf("%d",&year);

    if(year%400 == 0){
        printf("%d is leap year",year);
    }
    else if(year%4 == 0 && year%100 != 0){
        printf("%d is leap year",year);
    }
    else{
        printf("%d is NOT leap year",year);
    }

    getch();
}
