// 1. Take three sides and check if they form a valid triangle. 
#include<stdio.h>
int main(){
    int a,b,c;
    printf("side of triangle with ,");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b )
    {
        printf("the entered triangle side form a triangle");
    }else{
        printf("wrong");
    }
    
}