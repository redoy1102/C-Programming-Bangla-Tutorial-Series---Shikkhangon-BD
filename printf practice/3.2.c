#include<stdio.h>
void main(){
    float  rice, sugar;

    printf("Give the price of rice and sugar: ");
    scanf("%f %f",&rice, &sugar);

    printf("* List of Items *");
    printf("\nItem\tPrice");
    printf("\nRice\tRs %0.2f",rice);
    printf("\nSugar\tRs %0.2f",sugar);

    return 0;
}
