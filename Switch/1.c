#include<stdio.h>
void main(){
    int choose;
    printf("Enter your day number = ");
    scanf("%d",&choose);

    switch(choose){

        case 1:
            printf("It's saturday");
            break;

        case 2:
            printf("It's sunday");
            break;

        case 3:
            printf("It's Monday");
            break;

        case 4:
            printf("It's Tuesday");
            break;

        case 5:
            printf("It's Wednesday");
            break;

        case 6:
            printf("It's Thursday");
            break;

        case 7:
            printf("It's Friday");
            break;

        default:
        printf("Wrong input!");

    }
}