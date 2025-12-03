//Q9 Write a program to calculate simple and compound interest for given principal, rate, and time.
#include<stdio.h>
#include<math.h>

int main(){
    float principal,rate,time,compoundinterest,simpleinterest;

    printf("enter principal,rate,time:");
    scanf("%f %f %f",&principal,&rate,&time);


    compoundinterest=principal*pow((1+rate/100),time)-principal;
    printf("compound interest:%f \n",compoundinterest);

    simpleinterest=(principal*rate*time)/100;
     printf("simple interest:%f \n",simpleinterest);
    return 0;
}