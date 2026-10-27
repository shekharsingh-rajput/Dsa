// 10. Take a month number (1–12) and print the number of days in that month (ignore leap )

#include<stdio.h>
int main(){
    int num;
    printf("enter month number :- ");
    scanf("%d",&num);

    if (num<1 || num>12)
    {
        printf("enter valid month");
        return 0;
    }
    
    if (num == 2)
    {
        printf("28");
    }else if (num ==1 || num==3 || num==5 ||num==7||num==8||num==10||num==12)
    {
        printf("31");
    }else{
        printf("30");
    }
    
    
}