//Q1 Write a program to input two numbers and display their sum.


#include <stdio.h>
int main(){
    int num1,num2;
    printf("enter first number:");
    scanf("%d",&num1);
    printf("enter second number:");
    scanf("%d",&num2);
    int sum=0;
    sum=num1+num2;
    printf("sum of two number is:%d",sum);
    return 0;
}