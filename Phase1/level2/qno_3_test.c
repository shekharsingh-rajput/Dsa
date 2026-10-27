#include<stdio.h>
int main(){
    printf("enter your number:- ");
    int num;
    scanf("%d",&num);

    if (num>100)
    {
        printf("enter valid number unedr 100");
        return 0;
    }
    
    if (num>=90 && num<=100)
    {
        printf("grade: A");
    }else if (num>=80 && num<90)
    {
        printf("grade: B");
    }else if (num>=70 && num<80)
    {
        printf("grade: C");
    }else if (num>=60 && num<70)
    {
        printf("grade: D");
    }else if (num>=50 && num<60)
    {
        printf("grade: E");
    }else{
        printf("grade: F");
    }
}
