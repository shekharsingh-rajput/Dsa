// 8. Take an alphabet character and check if it lies between ‘a’ and ‘m’ or ‘n’ and ‘z’. 
#include<stdio.h>
int main(){
    printf("enter character:-");
    char ch;
    scanf("%c",&ch);

    if (ch>='a' && ch<='m')
    {
        printf("between a and m");
    }else if (ch>='a' && ch<='n'){
        printf("between a and n");
    }else if (ch>='a' && ch<='z')
    {
        printf("between a to z");
    }else
    {
       printf("enter valid character"); 
    }
    
    return 1;
}