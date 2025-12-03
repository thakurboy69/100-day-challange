//Write a program to find the roots of a quadratic equation and categorize them.
#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;
    float dis, r1, r2, rP, imagPart;

  
    printf("Enter coefficients a, b, and c: ");
    scanf("%f %f %f", &a, &b, &c);

   
    if (a == 0) {
        printf("This is not a quadratic equation.\n");
        return 0;
    }

   
    dis = b * b - 4 * a * c;

    
    if (dis > 0) {
        
        r1 = (-b + sqrt(dis)) / (2 * a);
        r2 = (-b - sqrt(dis)) / (2 * a);
        printf("Roots are real and distinct:\n");
        printf("Root1 1 = %.2f\n", r1);
        printf("Root 2 = %.2f\n", r2);
    } else if (dis== 0) {
      
        r1 = -b / (2 * a);
        printf("Roots are real and equal:\n");
        printf("Root = %.2f\n", r1);
    } else {
        
        rP = -b / (2 * a);
        imagPart = sqrt(-dis) / (2 * a);
        printf("Roots are complex and conjugate:\n");
        printf("Root 1 = %.2f + %.2fi\n", rp, imagPart);
        printf("Root 2 = %.2f - %.2fi\n", rP, imagPart);
    }

    return 0;
}