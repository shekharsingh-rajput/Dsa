// 9. Take two angles of a triangle and compute the third angle. 
#include<stdio.h>
int main(){
    int first_angle,second_angle;
    printf("enter angle: ");
    scanf("%d",&first_angle);
    printf("enter angle: ");
    scanf("%d",&second_angle);

    if (first_angle <=0 || second_angle<=0)
    {
        printf("invalid angle");
        return 1;
    }
    

    int sumOfAngle = first_angle+second_angle;
    if (sumOfAngle>=180)
    {
        return 1;
    }
    
    int thirdAngle = 180-sumOfAngle;
    printf(" third angle :- %d",thirdAngle);
}