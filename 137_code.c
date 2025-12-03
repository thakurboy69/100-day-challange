//Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role.


#include <stdio.h>

enum UserRole {
    ADMIN = 1,
    USER,
    GUEST
};

int main() {
    enum UserRole role;

    printf("Select user role:\n");
    printf("1 → ADMIN\n");
    printf("2 → USER\n");
    printf("3 → GUEST\n");
    printf("Enter your choice: ");
    scanf("%d", &role);

    switch (role) {
        case ADMIN:
            printf("Welcome, Admin! You have full access.\n");
            break;
        case USER:
            printf("Welcome, User! You have limited access.\n");
            break;
        case GUEST:
            printf("Welcome, Guest! You have minimal access.\n");
            break;
        default:
            printf("Invalid role selected.\n");
            break;
    }

    return 0;
}