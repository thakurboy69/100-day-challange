//Use malloc() to allocate structure memory dynamically and print details.


#include <stdio.h>
#include <stdlib.h>
#include <string.h>


struct Student {
    int id;
    float marks;
    char name[30];
};

int main() {
    
    struct Student *s = (struct Student *)malloc(sizeof(struct Student));

    
    if (s == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    
    s->id = 101;
    s->marks = 88.5;
    strcpy(s->name, "John Doe");

    
    printf("Student Details:\n");
    printf("ID: %d\n", s->id);
    printf("Marks: %.2f\n", s->marks);
    printf("Name: %s\n", s->name);

    
    free(s);

    return 0;
}