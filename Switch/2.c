#include<stdio.h>
void main(){
    int num;

    printf("Press: 1 to Check total days of January.");
    printf("\nPress: 2 to Check total days of February.");
    printf("\nPress: 3 to Check total days of March.");
    printf("\nPress: 4 to Check total days of April.");
    printf("\nPress: 5 to Check total days of May.");
    printf("\nPress: 6 to Check total days of June.");
    printf("\nPress: 7 to Check total days of July.");
    printf("\nPress: 8 to Check total days of August.");
    printf("\nPress: 9 to Check total days of September.");
    printf("\nPress: 10 to Check total days of October");
    printf("\nPress: 11 to Check total days of November.");
    printf("\nPress: 12 to Check total days of December.");

    printf("\n\nNow press - ");
    scanf("%d",&num);

    switch(num){
        case 1:
            printf("You haved pressed 1.");
            printf("\nSo total days of January = 31");
            break;

        case 2:
            printf("You haved pressed 2.");
            printf("\nSo total days of February = 29");
            break;
        
        case 3:
            printf("You haved pressed 3.");
            printf("\nSo total days of March = 31");
            break;

        case 4:
            printf("You haved pressed 4.");
            printf("\nSo total days of April = 30");
            break;

        case 5:
            printf("You haved pressed 5.");
            printf("\nSo total days of May = 31");
            break;

        case 6:
            printf("You haved pressed 6.");
            printf("\nSo total days of June = 30");
            break;
        
        case 7:
            printf("You haved pressed 7.");
            printf("\nSo total days of July = 31");
            break;

        case 8:
            printf("You haved pressed 8.");
            printf("\nSo total days of August = 30");
            break;

        case 9:
            printf("You haved pressed 9.");
            printf("\nSo total days of September = 31");
            break;

        case 10:
            printf("You haved pressed 10.");
            printf("\nSo total days of October = 30");
            break;
        
        case 11:
            printf("You haved pressed 11.");
            printf("\nSo total days of November = 31");
            break;

        case 12:
            printf("You haved pressed 12.");
            printf("\nSo total days of December = 30");
            break;

        default:
            printf("Wrong Input");

    }




}