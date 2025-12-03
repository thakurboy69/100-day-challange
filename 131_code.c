//Create an enumeration for days (SUNDAY to SATURDAY) and print each day with its integer value.


#include <stdio.h>

enum Days {
    SUNDAY,
    MONDAY,
    TUESDAY,
    WEDNESDAY,
    THURSDAY,
    FRIDAY,
    SATURDAY
};

int main() {
    enum Days day;

    printf("Days of the week:\n");
    
    for (day = SUNDAY; day <= SATURDAY; day++) {
        printf("%d → ", day);

        switch (day) {
            case SUNDAY:    printf("SUNDAY"); break;
            case MONDAY:    printf("MONDAY"); break;
            case TUESDAY:   printf("TUESDAY"); break;
            case WEDNESDAY: printf("WEDNESDAY"); break;
            case THURSDAY:  printf("THURSDAY"); break;
            case FRIDAY:    printf("FRIDAY"); break;
            case SATURDAY:  printf("SATURDAY"); break;
        }
        printf("\n");
    }

    return 0;
}