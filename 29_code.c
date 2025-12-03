//Write a program to calculate the factorial of a number.
#include<stdio.h>
int main(){
    int n,fact=1;
    printf("enter number:");
    scanf("%d",&n);
    if(n<0)
    printf("Error! factorial of a negative number doesn't exist");
    else{
    for(int i=1;i<=n;i++)
    {
        fact=fact*i;
        
    }
    printf("factorial is :%d\n",fact);
    }
    return 0;
}