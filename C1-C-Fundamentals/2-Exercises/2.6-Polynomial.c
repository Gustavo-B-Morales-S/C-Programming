#include <stdio.h>
#include <stdlib.h>

int main(void)
{

    float x, polynomial;
    printf("Enter a value for (x)....: "); scanf("%f", &x);

    // With Horner Rule
    polynomial = x * (x * (x * (x * (3*x + 2) - 5) - 1) + 7) - 6;

    // Without Horner Rule
    polynomial = (
        (3 * (x * x * x * x * x))
        + (2 * (x * x * x * x))
        - (5 * (x * x * x))
        - (x * x)
        + (7 * x)
        - (6)
    );

    printf("Polynomial Formula.......: 3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6\n");
    printf("Polynomial Forumla Result: %f\n", polynomial);

    return EXIT_SUCCESS;
    
}
