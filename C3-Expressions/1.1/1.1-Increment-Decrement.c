#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int i = 1, j = 1;

    // "Pre-Increment"
    printf("\nI: %d\n", i);
    printf("Incremented I: %d\n", ++i);  // Prefix Increment Operator

    // "Pre-Decrement"
    printf("\nJ: %d\n", j);
    printf("Decremented J: %d\n", --j);  // Prefix Decrement Operator

    // "Post-Increment"
    printf("\nI: %d\n", i);
    printf("Incremented I in the next line: %d\n", i--);  // Post Increment Operator
    printf("I: %d\n", i);

    // "Post-Decrement"
    printf("\nJ: %d\n", j);
    printf("Decremented J in the next line: %d\n", j--);  // Prefix Increment Operator
    printf("J: %d\n", j);

    return EXIT_SUCCESS;

};
