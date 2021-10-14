#include<stdio.h>
void main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);

    //int result = num % 2;

    switch(num % 2){
        case 0:
        printf("%d is even number.\n",num);
        break;

        case 1:
            printf("%d is odd number.",num);
            break;
    }
}
