//Write a program to take a string input. Change it to sentence case.


#include <stdio.h>
#include <ctype.h>  

int main() {
    char str[200];

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);  

    int i = 0;
    int capitalize = 1; 

    while (str[i] != '\0') {
        if (capitalize && isalpha(str[i])) {
            str[i] = toupper(str[i]);
            capitalize = 0;
        } else {
            str[i] = tolower(str[i]);
        }

        
        if (str[i] == '.' || str[i] == '?' || str[i] == '!') {
            capitalize = 1;
        }

        i++;
    }

    printf("Sentence case: %s\n", str);

    return 0;
}