//Print all enum names and integer values using a loop


#include <stdio.h>

enum Color {
    RED,
    GREEN,
    BLUE,
    COLOR_COUNT   
};

const char* ColorNames[] = {
    "RED",
    "GREEN",
    "BLUE"
};

int main() {
    for (int i = 0; i < COLOR_COUNT; i++) {
        printf("%s = %d\n", ColorNames[i], i);
    }
    return 0;
}