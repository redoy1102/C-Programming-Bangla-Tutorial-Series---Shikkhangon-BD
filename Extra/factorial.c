//5! = 1*2*3*4*5
#include<stdio.h>
int main(){
    int number, multiply=1;

    printf("Enter a number: ");
    scanf("%d",&number);

    for(int i=1; i<=number; i++){
        multiply = multiply * i;
    }
    printf("Factorial of %d is: %d",multiply);

    return 0;
}

