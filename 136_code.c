//Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch.


#include <stdio.h>

enum Menu {
    ADD = 1,
    SUBTRACT,
    MULTIPLY
};

int main() {
    enum Menu choice;
    int a, b;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    printf("\nMenu:\n");
    printf("1 → ADD\n");
    printf("2 → SUBTRACT\n");
    printf("3 → MULTIPLY\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case ADD:
            printf("Result: %d + %d = %d\n", a, b, a + b);
            break;
        case SUBTRACT:
            printf("Result: %d - %d = %d\n", a, b, a - b);
            break;
        case MULTIPLY:
            printf("Result: %d * %d = %d\n", a, b, a * b);
            break;
        default:
            printf("Invalid choice!\n");
            break;
    }

    return 0;
}