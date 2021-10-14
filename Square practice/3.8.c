#include<stdio.h>
int main(){
    int square,n;
    printf("Enter a number to square: ");
    scanf("%d",&n);

    square = n * n;
    printf("Square of %d: %d",n,square);

    return 0;
}
