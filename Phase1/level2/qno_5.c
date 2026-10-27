// 5. Take the hour of the day (0–23) and print “Good Morning”, “Good Afternoon”, “Good Evening”, or “Good Night”. 
#include<stdio.h>
int main(){
    int hour;
    printf("enter he hour :- ");
    scanf("%d",&hour);

    if (hour>=0 && hour <=6)
    {
        printf("Good Morning");

    }else if (hour>6 && hour<=12)
    {
        printf("Good Afternoon");

    }else if (hour>12 && hour<=18)
    {
        printf("Good Evening");

    }else if (hour>18 && hour<=23)
    {
        printf("Good Night");

    }else{
        printf("enter valid hour");
    }
}