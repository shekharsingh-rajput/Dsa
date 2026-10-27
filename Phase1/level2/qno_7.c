// 7. Take two numbers and determine whether both are even, both are odd, or one is even and one is odd. 

#include<stdio.h>
int main(){
    int num1,num2;
    printf("enter number:- ");
    scanf("%d",&num1);
    printf("enter number:- ");
    scanf("%d",&num2);

    if (num1 % 2 == 0 && num2 % 2 == 0)
    {
        printf("both even");
    }
    else if (num1 % 2 != 0 && num2 % 2 != 0)
    {
        printf("both odd");
    }
    else
    {
        printf("one is even and the other is odd");
    }

    return 0;
    
    
    

}