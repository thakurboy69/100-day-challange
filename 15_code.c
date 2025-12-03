//Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.
#include<stdio.h>
int main(){
    char ch;
    printf("enter a character:");
    scanf("%c",&ch);
    
    if(ch>='a' && ch<='z')
    {
        printf("Lowercase alphabet",ch);
    }
    else if (ch>='A' && ch<='Z'){
        printf("Uppercase alphabet",ch);
    }
    else if (ch>='0' && ch<='9'){
        printf("Digit",ch);
    }
    else{
        printf("special character.",ch);
    }
        return 0;
}