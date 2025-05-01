#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int first_slice, second_slice, third_slice;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");

    scanf(
        "(%d) %d-%d",
        &first_slice, &second_slice, &third_slice
    );

    printf(
        "You entered: %d.%d.%d\n",
        first_slice, second_slice, third_slice
    );

    return EXIT_SUCCESS;
    
}
