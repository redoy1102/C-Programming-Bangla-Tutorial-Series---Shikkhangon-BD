//Write a C program to check whether a number is even or odd.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num%2 == 0){
        printf("%d is even number.",num);
    }
    else{
        printf("%d is odd number.",num);
    }
    return 0;

}
