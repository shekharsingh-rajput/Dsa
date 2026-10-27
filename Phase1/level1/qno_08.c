//  Take a temperature value and print “Cold”, “Warm”, or “Hot” using range conditions. 

#include<stdio.h>
int main(){
    // cold 0-15
    // warm 16-100
    // hot > 100
    int temperature;
    printf("enter temp :-  ");
    scanf("%d",&temperature);
    if(temperature>=0 && temperature<=15){
        printf("The entered temprature %d is COLD",temperature);
    }else if(temperature>15 && temperature<=100){
        printf("The entered temprature %d is WARM",temperature);
    }else if(temperature>100){
        printf("The entered temprature %d is HOT",temperature);
    }else{
        printf("freezing temp");
    }
}