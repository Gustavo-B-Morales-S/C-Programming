#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int accumulated = 0, current = 1;

    printf("Integers (0 to Terminante): ");

    while ( current ) {
        scanf("%d", &current);
        accumulated += current;
    }

    printf("Sum: %d\n", accumulated);

    return EXIT_SUCCESS;
    
};
