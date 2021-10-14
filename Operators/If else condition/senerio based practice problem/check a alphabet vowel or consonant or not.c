#include<stdio.h>
void main(){
    char ch;
    printf("Enter a alphabet: ");
    scanf("%c",&ch);
    //checking vowel.....
    if(ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' || ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){
        printf("\n%c is vowel.",ch);
    }
    //checking consonant.....
    else if( (ch >= 'b' && ch <= 'd') || (ch >= 'f' && ch <= 'h') || (ch >= 'j' && ch <= 'n') || (ch >= 'p' && ch <= 't') || (ch >= 'v' && ch <= 'z') ){
        printf("\n%c is consonant.",ch);
    }
    else if( (ch >= 'B' && ch <= 'D') || (ch >= 'F' && ch <= 'H') || (ch >= 'J' && ch <= 'N') || (ch >= 'P' && ch <= 'T') || (ch >= 'V' && ch <= 'Z') ){
        printf("\n%c is consonant.",ch);
    }
    else{
        printf("\nIts not a vowel or not a consonant.");
    }
}
