#include<stdio.h>
int main(){
    int n;
    printf("Enter any number of 0 to 128: ");
    scanf("%d",&n);

    printf("The ASCII character of %d is: %c",n,n);
    return 0;
}
