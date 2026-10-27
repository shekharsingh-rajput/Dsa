// 10. Take a character and check whether it’s uppercase, lowercase, a digit, or a special character.
#include <stdio.h>
// it can don via ASCII and built in library / function 
int main()
{   
    char ch;
    printf("enter value:- ");
    scanf("%c",&ch);

    if (ch>='0' && ch<='9')
    {
        printf("digit");
    }else if (ch>='A' && ch<='Z')
    {
        printf("Upercase");
    }else if (ch>='a' && ch <='z')
    {
        printf("lowercase");
    }else{
        printf("special character");
    }
}