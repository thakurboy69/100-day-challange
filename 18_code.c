/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria:
90-100: Grade A
80-89: Grade B
70-79: Grade C
60-69: Grade D
below 60: Grade F.*/
#include<stdio.h>
int main(){
    int grade;
    printf("enter grade:");
    scanf("%d",&grade);
    if(grade>=90 && grade<=100){
        printf("Grade A");
    }
    else if(grade>=80 && grade<=89){
        printf("Grade B");
    }
    else if(grade>=70 && grade<=79){
        printf("Grade C");
    }
    else if(grade>=60 && grade<=69){
        printf("Grade D");
    }
    else{
        printf("Grade F");
    }
    return 0;
}