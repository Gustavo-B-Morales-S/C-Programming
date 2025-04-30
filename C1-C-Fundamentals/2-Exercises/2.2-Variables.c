#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int integer;
    float floating_point;

    // Can have many behaviors depending on the context
    printf("Uninitialized Integer: %d.\n", integer);
    printf("Uninitialized Floating Point: %f.\n", floating_point);

    return EXIT_SUCCESS;

};
