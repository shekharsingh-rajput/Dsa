// 6. Check voting eligibility for a given age (18+)
#include<stdio.h>
int main(){
    int age;
    printf("Enter Age:- ");
    scanf("%d",&age);

    if(age>=18){
        printf("Eligible for vote");
    }else{
        printf("not eligible for vote");
    }
}