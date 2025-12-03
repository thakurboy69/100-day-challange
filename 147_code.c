//Store employee data in a binary file using fwrite() and read using fread().


#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    Employee e1 = {1001, "John Doe", 55000.50};
    Employee e2 = {1002, "Alice Smith", 62000.75};

    FILE *fp;

    
    fp = fopen("employees.dat", "wb");
    if (fp == NULL) {
        printf("Error opening file for writing!\n");
        return 1;
    }

    fwrite(&e1, sizeof(Employee), 1, fp);
    fwrite(&e2, sizeof(Employee), 1, fp);

    fclose(fp);

    
    fp = fopen("employees.dat", "rb");
    if (fp == NULL) {
        printf("Error opening file for reading!\n");
        return 1;
    }

    Employee temp;
    printf("Employee Records (Read from File):\n");

    while (fread(&temp, sizeof(Employee), 1, fp)) {
        printf("ID: %d\n", temp.id);
        printf("Name: %s\n", temp.name);
        printf("Salary: %.2f\n\n", temp.salary);
    }

    fclose(fp);

    return 0;
}