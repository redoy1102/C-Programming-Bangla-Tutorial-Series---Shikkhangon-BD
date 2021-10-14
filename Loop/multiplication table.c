#include<stdio.h>
void main(){
    int n;
    printf("Enter a number: "); //5
    redoy1:
    scanf("%d",&n);
    if(n < 0){
        printf("Invalid number!!\nEnter a positive number: ");
        goto redoy1;
    }
    else{
        for(int i = 1; i <= 10; i++)
        {
            printf("%d X %d = %d\n",n,i,n*i);
        }
    }
}

