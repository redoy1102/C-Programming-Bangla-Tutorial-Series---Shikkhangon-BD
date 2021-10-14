#include<stdio.h>
void main(){

    float phy, math, chem, bio, ict, total, average, per;
    printf("Enter the marks of all subject = ");
    scanf("%f %f %f %f %f",&phy, &math, &chem, &bio, &ict);

    total = phy + math + chem + bio + ict;
    average = (phy + math + chem + bio + ict) / 5;

    per = (total / 500) * 100;

    printf("Total number = %.2f",total);
    printf("\nAverage number = %.2f",average);
    printf("\nPercentage = %.2f %",per);

}