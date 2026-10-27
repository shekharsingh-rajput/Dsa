// 3. Take a 4-digit number and check if the first and last digits are equal.
#include<stdio.h>
int main(){
    int num;
    printf("enter num:- ");
    scanf("%d",&num);
    int digit1 = num%10;
    int digit4 = num/1000;
    printf("%d,%d",digit1,digit4);
    if (digit1 == digit4)
    {
        printf("equal");
    }else{
        printf("not equal");
    }
    
}