//C program to check alphabets

#include<stdio.h>
void main(){
    char ch, result;
    printf("Enter a character = ");
    scanf("%c",&ch);

    result = ( (ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')
    ? printf("%c is Alphabet.",ch) 
    : printf("%c is not Alphabet.",ch) );
}

