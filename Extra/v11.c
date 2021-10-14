//Write a C program to calculate profit or loss.
#include<stdio.h>
int main(){
    int buyPrice, sellPrice, profit, loss, profitTaka;

    printf("Enter you buy price: ");
    scanf("%d",&buyPrice);

    printf("Enter you sell price: ");
    scanf("%d",&sellPrice);

    profitTaka = sellPrice - buyPrice;

    if(sellPrice > buyPrice){
        printf("Your buy price was %d taka and you sold it %d taka. So your profit is: %d taka",buyPrice,sellPrice,profitTaka);
    }
    else{
        printf("Your will loss.");
    }
}
