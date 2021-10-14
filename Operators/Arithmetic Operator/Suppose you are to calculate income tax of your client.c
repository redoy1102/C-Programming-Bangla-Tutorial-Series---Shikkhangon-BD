//Suppose you are to calculate income tax of your client. The income tax is
//15% of the net annual income.
//TA, DA 10% and PF 5% of the basic monthly income.
//Develop a program in c language that will take an
//income amount as input and show the tax amount, TA, DA and PF.
#include<stdio.h>
int main(){
    int annual, month, ta, da, pf,tax;

    printf("Enter your annual salary: ");
    scanf("%d",&annual);

    month = annual  / 12;

    tax = annual * 0.15;
    ta = month * 0.1;
    da = month * 0.1;
    pf = month * 0.05;

    printf("\nIncome Tax: %d",tax);
    printf("\n\nTa is: %d",ta);
    printf("\n\nDa is: %d",da);
    printf("\n\nPF is: %d",pf);

    return 0;

}
