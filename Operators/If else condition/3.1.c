#include<stdio.h>
int main(){
    double i,sum = 0,number;

    printf("Enter a number: ");
    scanf("%lf",&number);

    for( i = 1; i <= number; i++){
        sum += (1/i);

        if(i==1){
            printf("\n1 + ");
        }
        else if(i==number){
            printf("1/%.0lf",i);
        }else{
            printf("1/%.0lf + ",i);
        }
    }
    printf("\a = %.2lf",sum);
    return 0;
}
