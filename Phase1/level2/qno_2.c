// 2. If the sides form a valid triangle, determine whether it is equilateral, isosceles, or scalene.
#include<stdio.h>
int main(){
    int a,b,c;
    printf("side of triangle with , :- ");
    scanf("%d,%d,%d",&a,&b,&c);
    if (a+b>c && b+c>a && c+a>b )
    {
        if(a==b && b==c){
            printf("equilateral triangle");
        }else if (a==b ||a==c || b==c){
            printf("isosceles triangle");
        }else{
            printf("scalen triangle");
        }  
    }else{
        printf("triangle not formed");
    }
    
}