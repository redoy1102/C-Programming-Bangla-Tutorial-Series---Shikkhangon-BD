//Write a C program to check whether a number is negative, positive or zero.
#include<stdio.h>
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    if(num == 0){
        printf("%d is zero",num);
    }
    else if(num > 0){
        printf("%d is positive number.",num);
    }
    else{
        printf("%d is negative number.",num);
    }
    return 0;

}
