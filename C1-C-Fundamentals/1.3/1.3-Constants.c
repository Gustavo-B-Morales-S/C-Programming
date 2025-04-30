// Directive (Include (File Inclusion))
#include <stdio.h>
#include <stdlib.h>

// Directive (Define (Macro Definition))
#define PI 3.14159f
#define SQUARE(number) ((number) * (number))


int main(void)
{
     float area, radius;

    printf("Circle Radius: ");

    scanf("%f", &radius);

    printf("Area: πr² = %.2f.\n", (PI * SQUARE(radius)));

    return EXIT_SUCCESS;
}
