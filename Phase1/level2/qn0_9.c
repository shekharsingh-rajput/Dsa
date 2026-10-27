// 9. Take a day number (1–7) and print the corresponding day name. 
#include<stdio.h>
void main(){
    const char *days[7]={"Monday","Tuesday","Wednesdesay","Thrusday","Friday","Saturday","Sunday"};

    printf("enter day no :- ");
    int number;
    scanf("%d",&number);
    if (number>=1 && number<=7)
    {
       printf("%s",days[number-1]); 
    }else{
        printf("enter valid number");
    }
}