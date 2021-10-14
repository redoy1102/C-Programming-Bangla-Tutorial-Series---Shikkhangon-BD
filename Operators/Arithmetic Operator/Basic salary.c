#include<stdio.h>
void main(){
    int salary,HRA,DA;

    printf("Enter basic salary: ");
    scanf("%d",&salary);

    if(salary <= 10000 ){
        HRA = (salary*0.2);
        DA = (salary*0.8);
        printf("HRA is = %d",HRA);
        printf("DA is = %d",DA);
    }
    else if(salary <= 20000){
        HRA = (salary*0.25);
        DA = (salary*0.9);
        printf("HRA is = %d",HRA);
        printf("DA is = %d",DA);
    }
    else if(salary > 20000 ){
        HRA = (salary*0.3);
        DA = (salary*0.95);
        printf("HRA is = %d",HRA);
        printf("DA is = %d",DA);
    }
}
