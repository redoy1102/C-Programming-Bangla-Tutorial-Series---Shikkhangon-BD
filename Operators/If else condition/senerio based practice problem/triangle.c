#include<stdio.h>
void main(){
    int num1, num2, num3, sum;
    printf("Enter three triangles: ");
    scanf("%d %d %d",&num1, &num2, &num3);

    sum = num1 + num2 + num3;

    if(sum == 180 && num1 > 0 && num2 > 0 && num3){
        printf("They are standing in triangle shape");
    }
    else{
        printf("They are not standing in triangle shape");
    }
}
