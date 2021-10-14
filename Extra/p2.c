//Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){
    int num1;
    printf("Enter a number : ");
    scanf("%d",&num1);

    if(num1 == 0){
        printf("%d is zero",num1);
    } else if(num1 < 0){
        printf("%d is negative",num1);
    }else{
        printf("%d is positive",num1);
    }
    return 0;

}
