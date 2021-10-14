//Write a C program to input angles of a triangle and check whether triangle is valid or not
#include<stdio.h>
int main(){
    int num1, num2, num3, sum;
    printf("Enter 3 angles: ");
    scanf("%d %d %d",&num1,&num2,&num3);


    sum = num1 + num2 + num3;

    if(sum == 180 && num1 > 0 && num2 > 0 && num3 > 0){
        printf("Triangle is valid");
    }
    else{
        printf("Triangle is NOT valid");
    }

    return 0;

}
