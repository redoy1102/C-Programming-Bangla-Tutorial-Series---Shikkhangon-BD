#include<stdio.h>
int main(){
    int number;
    printf("Enter a number: ");
    scanf("%",&number);

    if(number % 5 == 0 && number % 11){
        printf("%d is divisible by 5 and 11.");
    }
    else{
        printf("%d is not divisible by 5 and 11.");
    }
}
