//Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUF_SIZE 4096

static void trim_newline(char *s) {
    size_t len = strlen(s);
    if (len > 0 && (s[len - 1] == '\n' || s[len - 1] == '\r')) {
        s[len - 1] = '\0';
    }
}

int main(void) {
    char src_path[BUF_SIZE];
    char dst_path[BUF_SIZE];

    printf("Enter source filename: ");
    if (!fgets(src_path, sizeof(src_path), stdin)) {
        fprintf(stderr, "Failed to read source filename.\n");
        return 1;
    }
    trim_newline(src_path);

    printf("Enter destination filename: ");
    if (!fgets(dst_path, sizeof(dst_path), stdin)) {
        fprintf(stderr, "Failed to read destination filename.\n");
        return 1;
    }
    trim_newline(dst_path);

    FILE *src = fopen(src_path, "rb");
    if (!src) {
        perror("Error opening source file");
        return 1;
    }

    FILE *dst = fopen(dst_path, "wb");
    if (!dst) {
        perror("Error opening destination file");
        fclose(src);
        return 1;
    }

    int ch;
    while ((ch = fgetc(src)) != EOF) {
        if (fputc(ch, dst) == EOF) {
            perror("Error writing to destination file");
            fclose(src);
            fclose(dst);
            return 1;
        }
    }

    if (ferror(src)) {
        perror("Error reading from source file");
        fclose(src);
        fclose(dst);
        return 1;
    }

    if (fclose(src) != 0) {
        perror("Error closing source file");
    }
    if (fclose(dst) != 0) {
        perror("Error closing destination file");
        return 1;
    }

    printf("File copied successfully from '%s' to '%s'.\n", src_path, dst_path);
    return 0;
}