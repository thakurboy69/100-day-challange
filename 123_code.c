//Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.


#include <stdio.h>
#include <ctype.h>

int main() {
    FILE *fp;
    char filename[100];
    int ch;
    int characters = 0, words = 0, lines = 0;
    int in_word = 0;

    printf("Enter file name: ");
    scanf("%s", filename);

    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Error: Cannot open file %s\n", filename);
        return 1;
    }

    while ((ch = fgetc(fp)) != EOF) {
        characters++;

        
        if (ch == '\n')
            lines++;

        
        if (!isspace(ch) && !in_word) {
            in_word = 1;
            words++;
        } else if (isspace(ch)) {
            in_word = 0;
        }
    }

    fclose(fp);

    printf("\n--- File Statistics ---\n");
    printf("Characters : %d\n", characters);
    printf("Words      : %d\n", words);
    printf("Lines      : %d\n", lines);

    return 0;
}