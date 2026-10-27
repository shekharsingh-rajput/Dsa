// 1. Take a 3-digit number and check if all digits are distinct. 
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

    if (digit1 == digit2 && digit2 ==digit3)
    {
        printf("all same");
    }
    else{
        printf("not same");
    }
    
    

}