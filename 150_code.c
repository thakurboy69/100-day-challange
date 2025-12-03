//Use pointer to struct to modify and display data using -> operator.


#include <stdio.h>

struct Student {
    int id;
    float marks;
};

int main() {
    
    struct Student s1;

    
    struct Student *ptr;

    
    ptr = &s1;

    
    ptr->id = 101;
    ptr->marks = 88.5;

    
    printf("Student ID    : %d\n", ptr->id);
    printf("Student Marks : %.2f\n", ptr->marks);

    return 0;
}