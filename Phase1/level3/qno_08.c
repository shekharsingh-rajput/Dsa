// 8. Check if a number lies within the range [100, 999]. 
#include<stdio.h>
int main(){
    int num;
    printf("enter num :");
    scanf("%d",&num);
    if (num>=100 && num<=999)
    {
        printf("in range");
    }else{
        printf("not in range");
    }
    
}