#include<stdio.h>
void main(){
    int number;

    printf("Enter a number: ");
    scanf("%d",&number);

    switch(number > 0){
        case 1:
            printf("%d is positive number.\n",number);
            break;

        case 0:
            if(number == 0){
            printf("Number is zero.\n");
            break;
        }
            printf("%d is negative number.\n",number);
            break;
    }
}
