//Write a program to implement a basic calculator using switch-case for +, -, *, /, %.


#include<stdio.h>
int main(){
    int num1,num2;
    char op;
    printf("enter two number and operator:");
    scanf("%d %d %c",&num1,&num2,&op);
    switch(op){
     case '+':
        printf("%d\n",num1+num2);
        break;
    case '-':
        printf("%d\n",num1-num2);
        break;
    case '*':
         printf("%d\n",num1*num2);
        break;
    case '/':
    if(num2!=0)
         printf("%d\n",num1/num2);
        else
        printf("error");
        break;
    case '%':
         if (num2 != 0)
        printf("Result: %d\n", num1 % num2);
        else
        printf("Error: Modulo by zero is not allowed.\n");
        break;
        default:
        printf("invalid operator\n");
     
    }
    return 0;
}