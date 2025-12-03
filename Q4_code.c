//Q4 Write a program to calculate the area and circumference of a circle given its radius.

#include<stdio.h>

int main(){
    float radius,area,circumference;

    printf("enter radius:");
    scanf("%f",&radius);
    
    area=3.14*(radius*radius);
    printf("area is:%f \n",area);

    circumference = 2*3.14*radius;
    printf("circumference is:%f \n",circumference );

    return 0;

}