#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int i;

    // For Loop Implementation
    for (i = 1; i < 128; printf("%d\n", (i *= 2)));

    // While Loop Implementation
    i = 1;

    while (i < 128) {
        printf("%d\n", (i *= 2));
    }

    // Do While Loop Implementation
    i = 1;

    do printf("%d\n", (i *= 2)); while (i < 128);


    return EXIT_SUCCESS;

}
