#include<stdio.h>
int main(){
    int floor;
    printf("Enter floor number: ");
    scanf("%d",&floor);

    switch(floor == 4)
    {
    case 1:
        printf("\nYou are in your Department floor.");
        break;

    case 0:
        if( (floor >= 0 && floor <= 3) || (floor == 5 || floor == 6)){
            printf("\nYou are in %d number floor.",floor);
        }
        else if(floor > 6){
            printf("\nFloor is in under construction");
        }

    default:
        printf("\nInvalid number!!");
    }
}
