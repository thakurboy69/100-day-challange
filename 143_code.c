//Find and print the student with the highest marks.


#include <stdio.h>

struct Student {
    char name[50];
    int roll_no;
    float marks;
};

int main() {
    struct Student s[5];
    int i;

    
    for (i = 0; i < 5; i++) {
        printf("Enter details for student %d:\n", i + 1);

        printf("  Name: ");
        scanf("%49s", s[i].name);

        printf("  Roll No: ");
        scanf("%d", &s[i].roll_no);

        printf("  Marks: ");
        scanf("%f", &s[i].marks);

        printf("\n");
    }

    
    int maxIndex = 0;
    for (i = 1; i < 5; i++) {
        if (s[i].marks > s[maxIndex].marks) {
            maxIndex = i;
        }
    }


    printf("\n--- Student with Highest Marks ---\n");
    printf("Name: %s\n", s[maxIndex].name);
    printf("Roll No: %d\n", s[maxIndex].roll_no);
    printf("Marks: %.2f\n", s[maxIndex].marks);

    return 0;
}