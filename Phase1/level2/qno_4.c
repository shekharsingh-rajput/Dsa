// 4. Check if one of two given numbers is a multiple of the other.
#include<stdio.h>

int main(){
    int num1, num2;

    printf("enter number");
    scanf("%d", &num1);
    printf("enter number");
    scanf("%d", &num2);

    if (num1 == 0 || num2 == 0) {
        printf("multiple");
        return 0;
    }

    if (num1 % num2 == 0 || num2 % num1 == 0) {
        printf("multiple");
    } else {
        printf("not multiple");
    }

    return 0;
}