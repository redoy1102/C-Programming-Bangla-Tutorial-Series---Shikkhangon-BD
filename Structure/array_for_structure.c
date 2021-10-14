#include<stdio.h>

struct person
{
    char name[50];
    int age;
    float salary;
};

void main()
{
    struct person person[3];
    int i;
    for(i = 0; i < 3; i++)
    {
        printf("Enter information of person %d",i+1);

        printf("\nEnter name: ");
        fflush(stdin);
        gets(person[i].name);

        printf("Enter age: ");
        scanf("%d",&person[i].age);

        printf("Enter salary: ");
        scanf("%f",&person[i].salary);
    }

    //printing output

    for(i = 0; i < 3; i++)
    {
        printf("\n\nInformation of person %d",i+1);

        printf("\nName: %s",person[i].name);
        printf("\nAge: %d",person[i].age);
        printf("\nSalary: %f",person[i].salary);
    }

}