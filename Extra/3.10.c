#include<stdio.h>
int main(){
    int days, year, weeks;
    printf("Enter your days: ");
    scanf("%d",&days);

    year = days / 365;

    weeks = days / 7;

    printf("Years: %d",year);
    printf("\nweeks: %d",weeks);
    printf("\nDays: %d",days);
    return 0;
}
