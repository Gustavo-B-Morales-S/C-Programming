#include <stdio.h>
#include <stdlib.h>

int main(void) {

    // While Loop Structure
    //
    // while ( Controlling Expression ) {
    //     Statement or Compound Statement (Loop Body)
    // }

    int minimum, maximum, multiplier;

    printf("Minimum: "); scanf("%d", &minimum);
    printf("Maximum: "); scanf("%d", &maximum);

    while ( minimum <= maximum ) {
        multiplier = 0;

        while ( (++multiplier) <= 10 ) {
            printf("%d X %d = %d\n", minimum, multiplier, (minimum * multiplier) );
        }
        ++minimum;
        printf("\n");

    }

    return EXIT_SUCCESS;

};
