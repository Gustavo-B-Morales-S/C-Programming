#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void) {

    float number, largest;

    // While Loop Implementation
    largest = 0.0f;

    while (true) {

        if ( !(number) ) break;

        printf("Number: "); scanf("%f", &number);
        if (number > largest) (largest = number);

    }

    printf("\nLargest: %.2f\n", largest);


    // Do Loop Implementation
    largest = 0.0f;

    do {

        printf("Number: "); scanf("%f", &number);
        if (number > largest) (largest = number);

    } while ( number );

    printf("\nLargest: %.2f\n", largest);

    return EXIT_SUCCESS;
}
