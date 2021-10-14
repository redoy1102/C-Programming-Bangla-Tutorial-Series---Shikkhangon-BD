#include<stdio.h>
void main(){
    int sell, cost, profit, loss;
    printf("Enter your sell and cost price: ");
    scanf("%d %d",&sell,&cost);

    profit = sell - cost;
    loss = cost - sell;

    if(sell > cost){
        printf("Your profit is %d taka.",profit);
    }
    else{
        printf("Your loss is %d taka.",loss);
    }
}
