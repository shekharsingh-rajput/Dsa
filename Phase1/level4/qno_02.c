// 2. Take a number and print “Fizz” if divisible by 3, “Buzz” if divisible by 5, and “FizzBuzz” if divisible by both

#include<stdio.h>
int main(){
    int num;
    printf("enter number: ");
    scanf("%d",&num);

    if (num%5==0 && num%3==0)
    {
        printf("FizzBuzz");
    }else if (num%5==0)
    {
        printf("Buzz");
    }else if (num%3 ==0)
    {
        printf("Fizz");
    }else{
        printf("invalid");
    }
}