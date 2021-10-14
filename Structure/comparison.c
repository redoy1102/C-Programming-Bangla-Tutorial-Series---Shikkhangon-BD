#include<stdio.h>
struct person{
    int age;
    float salary;
};
void main()
{
    struct person person1, person2;
    printf("Enter age for person1: ");
    scanf("%d",&person1.age);

    printf("\nEnter age for person2: ");
    scanf("%d",&person2.age);

    if(person1.age == person2.age)
    {
        printf("Age are equal.");
    }
    else{
        printf("Age are not equal.");
    }
}