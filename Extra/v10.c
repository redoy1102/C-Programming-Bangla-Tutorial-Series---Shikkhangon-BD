//Write a C program to check whether a character is uppercase or lowercase alphabet.
#include<stdio.h>
int main(){
    char alphabet;

    printf("Enter any alphabet:  ");
    scanf("%c",&alphabet);

    if(alphabet >= 'A' && alphabet <= 'Z'){
        printf("Your alphabet is uppercase.");
    }
    else{
        printf("Your alphabet is lowercase.");
    }
    return 0;

}
