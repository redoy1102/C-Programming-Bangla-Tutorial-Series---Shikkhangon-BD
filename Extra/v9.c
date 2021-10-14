//Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
int main(){
    char input;

    printf("Enter anything: ");
    scanf("%c",input);

    if( (input >= 'a' && input <= 'z') || (input >= 'A' && input <= 'Z') ){
        printf("%c is alphabet",input);
    }
    else if(input >= 0 && input <= 9){
        printf("%c is digit",input);
    }
    else{
        printf("%c is special character.",input);
    }

    return 0;

}
