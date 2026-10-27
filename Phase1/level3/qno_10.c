// 10. Check whether a number is a perfect square (without using the square root 
#include<stdio.h>
int main(){
    int num;
    printf("enter num: ");
    scanf("%d",&num);

    int check=num/2;
    for(int i=1;i<=check;i++){
        if (i*i == num)
        {
            printf("%d is perfect square of %d",num,i);
            return 0;
        }
        
    }
            printf("not a perfect square");
}