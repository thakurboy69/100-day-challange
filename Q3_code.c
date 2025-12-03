//Q3 Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include<stdio.h>

int main(){
    int lenght,breadth,area,perimeter;

    printf("enter length:");
    scanf("%d",&lenght);
    
    printf("enter breadth:");
    scanf("%d",&breadth);

    area=lenght*breadth;
    printf("area is:%d \n",area);

    perimeter= 2*(lenght+breadth);
    printf("perimeter is:%d \n",perimeter);

    return 0;

}
