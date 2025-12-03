//Take two structs as input and check if they are identical.


#include <stdio.h>
#include <string.h>

struct Person {
    char name[50];
    int age;
    float height;
};

int areIdentical(struct Person a, struct Person b) {
    if (strcmp(a.name, b.name) != 0)
        return 0;
    if (a.age != b.age)
        return 0;
    if (a.height != b.height)
        return 0;

    return 1;
}

int main() {
    struct Person p1 = {"Alice", 30, 5.5};
    struct Person p2 = {"Alice", 30, 5.5};

    if (areIdentical(p1, p2))
        printf("Structs are identical.\n");
    else
        printf("Structs are different.\n");

    return 0;
}