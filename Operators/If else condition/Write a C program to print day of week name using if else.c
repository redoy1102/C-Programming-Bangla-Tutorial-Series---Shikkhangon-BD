#include <stdio.h>
void main()
{
    int weekNumber;

    printf("Enter week number (1-7): ");
    scanf("%d",&weekNumber);


    if(weekNumber == 1)
    {
        printf("week day is Monday");
    }
    else if(weekNumber == 2)
    {
        printf("week day is Tuesday");
    }
    else if(weekNumber == 3)
    {
        printf("week day is Wednesday");
    }
    else if(weekNumber == 4)
    {
        printf("week day is Thursday");
    }
    else if(weekNumber == 5)
    {
        printf("week day is Friday");
    }
    else if(weekNumber == 6)
    {
        printf("week day is Saturday");
    }
    else if(weekNumber == 7)
    {
        printf("week day is Sunday");
    }
    else
    {
        printf("enter week number between 1-7.");
    }
}
