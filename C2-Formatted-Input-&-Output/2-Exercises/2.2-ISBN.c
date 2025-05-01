#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int prefix, identifier, code, number, digit;

    printf("Enter ISBN: ");
    scanf(
        "%d-%d-%d-%d-%d",
        &prefix, &identifier, &code, &number, &digit
    );

    printf("GSI Prefix: %d\n", prefix);
    printf("Group Identifier: %d\n", identifier);
    printf("Publisher Code: %d\n", code);
    printf("Item Number: %d\n", number);
    printf("Check Digit: %d\n", digit);

    return EXIT_SUCCESS;

}
