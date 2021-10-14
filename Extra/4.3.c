#include<stdio.h>
int main(){
    int marks[6];

    printf("Enter some numbers: ");

    for(int i = 0; i <= 4; i++){
       scanf("%d",&marks[i]);
    }

    for(int j = 0; j <= 4; j++){
       printf("%d",marks[j]);
    }

    return 0;

}

