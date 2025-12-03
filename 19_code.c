//Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.
#include<stdio.h>
int main(){
    int s1,s2,s3;
    printf("enter all three side of triangle:");
    scanf("%d %d %d",&s1,&s2,&s3);
    if(s1==s2 &&s2==s3){
        printf("Equilateral triangle");
    }
    else if(s1==s2||s2==s3||s1==s3){
        printf("Isosceles triangle");
    }
    else{
        printf("Scalene triangle");
    }
    return 0;
 }