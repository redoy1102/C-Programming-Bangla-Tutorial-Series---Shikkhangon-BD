/*
Marks in MATHS >= 65
Marks in PHY >= 55
Marks in CHEM >= 50
Total in all three subject => 180
Or
Total in Math and physics >=140
*/
#include<stdio.h>
int main(){
    int math, phy, chem, totalMarks, totalMathPhy;

    printf("Enter the marks of Math: ");
    scanf("%d",&math);
    printf("Enter the marks of Phy: ");
    scanf("%d",&phy);
    printf("Enter the marks of Chem: ");
    scanf("%d",&chem);

    totalMarks = math + phy + chem;
    totalMathPhy = math + phy;

    if(math >= 65 && phy >= 55 && chem >= 50){
        if(totalMarks >= 180 || totalMathPhy >= 140){
            printf("Your are eligible!!");
        }
        else{
            printf("Your are not eligible!!");
        }
    }
    else{
        printf("Your are not eligible!!");
    }

    return 0;
}
