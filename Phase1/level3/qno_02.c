// 2. Take a 3-digit number and determine if the middle digit is the largest, smallest, or neither.
#include<stdio.h>
int main(){
    int num;
    printf("enter number:- ");
    scanf("%d",&num);

    int digit1 = num%10;
    num /=10;
    int digit2 = num%10;
    num /=10;
    int digit3 = num%10;
    num /=10;

    if (digit2>digit1 && digit2>digit3)
    {
        printf("greater");
    }else if(digit2<digit1 && digit2<digit3){
        printf("smallest");
    }else{
        printf("equal");
    }
    
}