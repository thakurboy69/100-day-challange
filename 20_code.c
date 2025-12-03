//Write a program to display the day of the week based on a number (1–7) using switch-case.
#include<stdio.h>
int main(){
    int n;
    printf("enter number(1-7):");
    scanf("%d",&n);
    switch(n){
     case 1:
        printf("monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    case 4:
        printf("Thusday\n");
        break;
    case 5:
        printf("Friday\n");
        break;
    case 6:
        printf("Saturday\n");
        break;
    case 7:
        printf("Sunday\n");
        break;
        default:
        printf("Invalid input enter number between 1-7.\n");
    }
    return 0;
}
