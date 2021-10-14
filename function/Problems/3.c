#include<stdio.h>
int add(){
    int n1, n2, res;
    printf("\nEnter two numbers = ");
    scanf("%d%d",&n1,&n2);
    res = n1 + n2;
    return res;
}
int sub(){
    int n1, n2, res;
    printf("\nEnter two numbers = ");
    scanf("%d%d",&n1,&n2);
    if (n1 > n2)
    {
        res = n1 - n2;
    }
    else{
        res = n2 - n1;
    }
    return res;
}
int mul(){
    int n1, n2, res;
    printf("\nEnter two numbers = ");
    scanf("%d%d",&n1,&n2);
    res = n1 * n2;
    return res;
}

int dev(){
    int n1, n2, res;
    printf("\nEnter two numbers = ");
    scanf("%d%d",&n1,&n2);
    res = n1 / n2;
    return res;
}

int menuBar(){
    int opt;
    label:
    printf("\tChoose your option\n");
    printf("Press - 01 for addition\n");
    printf("Press - 02 for subtraction\n");
    printf("Press - 03 for multiplication\n");
    printf("Press - 04 for Devision\n");
    printf("Press here - ");
    scanf("%d",&opt);

    switch (opt)
    {
    case 1:
        printf("Summation of two numbers = %d\n\n",add());
        goto label;
        break;
    case 2:
        printf("Subtraction between two numbers = %d",sub());
        break;
    case 3:
        printf("Multiplication of two numbers = %d",mul());
        break;
    case 4:
        printf("Devision of two numbers = %d",dev());
        break;
    
    default:
        break;
    }

    return 0;
}

void main(){
    menuBar();
}