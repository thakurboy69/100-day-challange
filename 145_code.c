//Return a structure containing top student's details from a function.


#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};


struct Student findTopStudent(struct Student s[], int n) {
    int maxIndex = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }

    return s[maxIndex];   
}

int main() {
    struct Student students[5] = {
        {"Alice", 101, 88.5},
        {"Bob",   102, 76.0},
        {"Carol", 103, 92.3},
        {"Dave",  104, 85.0},
        {"Eve",   105, 90.7}
    };

    struct Student topper = findTopStudent(students, 5);

    printf("Top Student:\n");
    printf("Name: %s\n", topper.name);
    printf("Roll No: %d\n", topper.roll_no);
    printf("Marks: %.2f\n", topper.marks);

    return 0;
}