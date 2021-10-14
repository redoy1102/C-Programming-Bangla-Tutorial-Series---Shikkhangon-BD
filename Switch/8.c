#include<stdio.h>
void main(){
    printf("Welcome to simple Calculator\n");
    printf("-----------------------------");

    int numb1, numb2;
    char op;

    printf("Enter [Number 1] [+-*/] [Number 2]");
    scanf("%d %c %d",&numb1,&op,&numb2);

    switch(op)
    {
    case '+':
        printf("%d %c %d = %d",numb1,op,numb2,numb1 + numb2);
        break;
    case '-':
        printf("%d %c %d = %d",numb1,op,numb2,num1 - numb2);
        break;
    case '*':
        printf("%d %c %d = %d",numb1,op,numb2,num1 * numb2);
        break;
    case '/':
        printf("%d %c %d = %d",numb1,op,numb2,num1 / numb2);
        break;
    case '%':
        printf("%d %c %d = %d",numb1,op,numb2,num1 % numb2);
        break;
    default:
        printf("Invalid!!");
        break;
    }
}
