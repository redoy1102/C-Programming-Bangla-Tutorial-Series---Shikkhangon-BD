//Write a C program to input any character and check whether it is alphabet, digit or special character.
#include<stdio.h>
int main(){
    int ch;
    printf("Enter a character : ");
    scanf("%c",&ch);

    if( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') ){

        printf("You character %c is alphabet",ch);

    }
    else if(ch >= 0 || ch <= 9){
        printf("You character %c is Digit",ch);
    }
    else{
        printf("You character %c is special character",ch);
    }
    return 0;

}
