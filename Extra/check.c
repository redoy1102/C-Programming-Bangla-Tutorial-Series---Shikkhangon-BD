#include<stdio.h>
int main(){
    float basicSalary,incomeTex, annualSalary,finalBasicSalary,monthlyBasicSalary;

    printf("Hey! Enter your monthly basic salary please: ");
    scanf("%f",&basicSalary);

    monthlyBasicSalary = basicSalary + ((basicSalary * 0.2) + (basicSalary * 0.5)); //added ta, da, houseRent;

    finalBasicSalary = monthlyBasicSalary - (basicSalary * 0.05);

    annualSalary = finalBasicSalary * 12;

    incomeTex = annualSalary * 0.07;

    printf("\a\nYour annual income tax: %.2f", incomeTex);

    return 0;
}
