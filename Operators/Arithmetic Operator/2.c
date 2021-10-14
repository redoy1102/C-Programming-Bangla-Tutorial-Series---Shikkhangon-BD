#include<stdio.h>
void main(){
    int year, week, days, month, restDays;
    printf("Enter total days : ");
    scanf("%d",&days);

    year = days / 365;
    printf("\nTotal %d year",year);
    days -= year*365;

    month = days / 30;
    printf(" , %d month",month);
    days -= month*30;

    week = days / 7;
    printf(" , %d week",week);
    days -= week*7;

    printf(" and %d days.",days);
}