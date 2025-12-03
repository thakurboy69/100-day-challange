//Q6 Write a program to swap two numbers using a third variable.

#include<stdio.h>
int main(){
    int a,b,z;
    printf("enter two number:");
    scanf("%d %d",&a,&b);

    z=a;
    a=b;
    b=z;


    printf("After swapping:%d %d \n",a,b);
    return 0;
}