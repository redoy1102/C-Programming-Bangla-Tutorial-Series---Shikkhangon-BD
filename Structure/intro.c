#include<stdio.h>
//global variable
struct person
{
    int age;
    float salary;
};

void main()
{
    struct person person1, person2;
    person1.age = 25;
    person1.salary = 15200.50;

    person2.age = 27;
    person2.salary = 25200.50;

    printf("Information of person1: ");
    printf("Age: %d",person1.age);
    printf("\nSalary: %.2f",person1.salary);

    printf("\nInformation of person2: ");
    printf("Age: %d",person2.age);
    printf("\nSalary: %.2f",person2.salary);
}