#include<stdio.h>
void main(){
    int numb1, numb2;

    printf("Enter two numbers: ");
    scanf("%d %d",&numb1,&numb2);


    switch( numb1 > numb2){
    case 1:
        printf("%d is big.",numb1);
        break;

    case 0:

        if(numb1 == 0 && numb2 == 0){
        printf("Your inputed two number are zero.");
        break;
    }
        printf("%d is big.",numb2);
        break;

        default:
        printf("Invalid input");
    }

}
