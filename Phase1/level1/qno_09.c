// 9. Take a character and check if it’s a vowel or consonant.
#include<stdio.h>
#include<ctype.h>

int main(){
    char vowels[]={'a','e','i','o','u'};
    printf("enter Character:- ");
    char character;
    scanf(" %c",&character);
    character = tolower(character);
    int lengthOfArray =sizeof(vowels)/sizeof(vowels[0]);
    for(int i = 0; i<lengthOfArray ;i++){
        if (vowels[i] == character){
            printf("entered value is VOWEL");
            return 0;
        }
    }
    printf("entered character is NOT a VOwel");
    return 0;

}