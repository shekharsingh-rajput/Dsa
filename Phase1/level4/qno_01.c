// 1. Take a character and check if it is a letter, a digit, or neither.
#include<stdio.h>
int main(){
    char character;
    printf("enter character:- ");
    scanf("%c",&character);

    if (character >='a' && character<= 'z' || character>='A' && character<= 'Z')
    {
        printf("letter");

    }else if (character>='0' && character<='9')
    {
        printf("digit");
    }else{
        printf("neither");
    }
    
}