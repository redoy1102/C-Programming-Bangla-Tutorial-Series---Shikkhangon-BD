//Write a C program to check whether a year is leap year or not.
#include<stdio.h>
int main(){
    int year;
    printf("Enter a year to check leap year: ");
    scanf("%d",&year);

    if(year%400 == 0){
        printf("Your %d is leap year.",year);
    }
    else if(year%4 == 0 && year%100 != 0){
        printf("Your %d is leap year.",year);
    }
    else {
         printf("Your %d is NOT leap year.",year);
    }

    return 0;

}
