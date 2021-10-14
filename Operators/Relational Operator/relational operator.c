#include<stdio.h>
int main(){
    int a, b;
    printf("Give the value of a: ");
    scanf("%d",&a);

    printf("Give the value of b: ");
    scanf("%d",&b);

    if(a > b){
        printf("%d is bigger then %d",a ,b);
    } else{
        printf("%d is bigger then %d",b ,a);
    }

    return 0;
}
