// 7. Check if an amount can be evenly divided into 2000, 500, and 100 currency notes. 
#include<stdio.h>
int main(){
    int amount ;
    printf("enter amount:- ");
    scanf("%d",&amount);
    if (amount%2000==0)
    {
        printf("distributed into 2000"); 
        return 0;   
    }else if (amount%500 == 0)
    {
        printf("distributed into 500");
        return 0;
    }else if (amount%100==0)
    {
        printf("distributed into 100 ");
        return 0;
    }else if (amount)
    {
        /* code */
    }
    else{
        printf("not evenly distributed");
    }
    
    
    
}