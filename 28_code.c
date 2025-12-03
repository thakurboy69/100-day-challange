//Write a program to print the product of even numbers from 1 to n.
#include<stdio.h> 
int main(){ 
    int n, product=1; 
    printf("enter number:");
     scanf("%d",&n); 
     for(int i=1;i<=n;i++){
         if(i%2==0){
            product =product*i;
         }
         else{
            continue;
         }
        } 
        printf("product of even number is :%d\n",product); 
        return 0; 
    }