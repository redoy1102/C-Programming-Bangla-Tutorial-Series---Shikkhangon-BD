#include<stdio.h>

struct person
{
    int age;
    float salary;
};

void main()
{
    struct person person1, person2;

    printf("Enter age and salary for person1: ");
    scanf("%d %f",&person1.age, &person1.salary);

    printf("Enter age and salary for person2: ");
    scanf("%d %f",&person2.age, &person2.salary);

    printf("\nAge for person1: %d",person1.age);
    printf("\nSalary for person1: %f",person1.salary);

    printf("\nAge for person2: %d",person2.age);
    printf("\nSalary for person2: %f",person2.salary);

}