#include<stdio.h>
void res(int x){
    if (x %2 == 0)
        printf("%d is even number",x);
    else
        printf("%d is odd number",x);
}

void main(){
    int num;
    printf("Enter a number - ");
    scanf("%d",&num);
}