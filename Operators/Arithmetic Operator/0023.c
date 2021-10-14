//problem 22

#include<stdio.h>
int main(){
    int foodForOneStudent,totalStudents, addedStudents, gotFoodDays, continuedDays;
    printf("Tell me the total students: ");
    scanf("%d", &totalStudents);

    printf("How many days you have got for their food: ");
    scanf("%d",&gotFoodDays);

    printf("Tell me the total added students: ");
    scanf("%d", &addedStudents);

    foodForOneStudent = (totalStudents * gotFoodDays);

    continuedDays = foodForOneStudent / (totalStudents + addedStudents);

    printf("With that food %d days can be continued.", continuedDays);
    return 0;
}
