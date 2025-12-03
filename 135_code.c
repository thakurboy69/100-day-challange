//Assign explicit values starting from 10 and print them


#include <stdio.h>

enum Status {
    SUCCESS = 10,
    FAILURE,    
    TIMEOUT     
};

int main() {
    enum Status s;

    
    for (s = SUCCESS; s <= TIMEOUT; s++) {
        switch (s) {
            case SUCCESS:
                printf("%d → SUCCESS\n", s);
                break;
            case FAILURE:
                printf("%d → FAILURE\n", s);
                break;
            case TIMEOUT:
                printf("%d → TIMEOUT\n", s);
                break;
        }
    }

    return 0;
}