// 4. Check whether a given integer is single-digit, double-digit, or multi-digit. 
#include<stdio.h>
int main(){
    int num;
    printf("enter number:- ");
    scanf("%d",&num);

    int count =0;
    int temp = num;
    if (temp<0){
        temp = -temp;
    }
    while(temp>0){
        temp /=10;
        count+=1;
    }
    if(count>2){
        printf("multidigit");
    }else if (count==2)
    {
        printf("double-digit");
    }else{
        printf("single digit");
    }
    
}