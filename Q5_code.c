//Q5: Write a program to convert temperature from Celsius to Fahrenheit.
#include<stdio.h>

int main(){
    float Celsius,Fahrenheit;

    printf("enter temperature Celsius :");
    scanf("%f",&Celsius );
    
    Fahrenheit=(Celsius*9/5)+32;
    printf("temperature in Fahrenheit is:%f ",Fahrenheit);

    return 0;

}