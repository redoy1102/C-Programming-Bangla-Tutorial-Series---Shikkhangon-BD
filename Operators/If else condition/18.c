//Write a C program to input basic salary of an employee and calculate its Gross salary according to following:
//Basic Salary <= 10000 : HRA = 20%, DA = 80%
//Basic Salary <= 20000 : HRA = 25%, DA = 90%
//Basic Salary > 20000 : HRA = 30%, DA = 95%
#include<stdio.h>
void main(){
    int bs, gs, hra, da;
    printf("Enter your basic salary = ");
    scanf("%d",&bs);
    if(bs <= 10000){
        hra = (bs * 0.20);
        da = (bs * 0.80);
        gs = bs + hra + da;
        printf("Your gross salary = %d taka",gs);
    }
    else if(bs <= 20000){
        hra = (bs * 0.25);
        da = (bs * 0.90);
        gs = bs + hra + da;
        printf("Your gross salary = %d taka",gs);
    }
    else if(bs > 20000){
        hra = (bs * 0.30);
        da = (bs * 0.95);
        gs = bs + hra + da;
        printf("Your gross salary = %d taka",gs);
    }
}
