// 5. Check if a number is a multiple of 7 or ends with 7. 
#include<stdio.h>
void main(){
    int num;
    printf("enter number:- ");
    scanf("%d",&num);

    int last_digit = num%10;

    if (num%7 ==0 || last_digit == 7)
    {
        printf("multiple or it ends with 7");
    }else{
        printf("nor multiple nor ends with 7");
    }
    
}