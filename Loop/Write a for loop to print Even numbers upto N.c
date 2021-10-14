#include<stdio.h>
void main()
{
    int n;
    printf("Enter a number: ");
    negative:
    scanf("%d",&n);
    if(n < 0){
        printf("Invalid number!!\n Please enter a positive number: ");
        goto negative;
    }
    else {
        for(int i = 2; i <= n; i+=2){
            printf("%d\n",i);
        }
    }
}
