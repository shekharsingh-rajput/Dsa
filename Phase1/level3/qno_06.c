// 6. Take coordinates (x, y) and determine which quadrant the point lies in. 
#include<stdio.h>
int main(){
    int x,y;
    printf("enter the value of x:-");
    scanf("%d",&x);
    printf("enter the value of y:-");
    scanf("%d",&y);
    if(x==0 && y==0){
        printf("Origin");
        return 0;
    }
    if (x==0)
    {
        printf("on y axis");
        return 0;
    }
    if (y==0)
    {
        printf("on x axis");
        return 0;
    }
    
    

    if (x>=0 && y>=0)
    {
        printf("1st quadtant");
        return 0;
    }else if (x<0 && y>=0)
    {
        printf("2nd quadrant");
        return 0;
    }else if (x<0 && y<0)
    {
        printf("third quadrant");
    }else{
        printf("4th quadrant");
    }
    
    
    
}