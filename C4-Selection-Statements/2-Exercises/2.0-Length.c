#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 4


int main(void) {

    int number, digits;



    printf("Number: "); scanf("%d", &number);

    if (number < 10 && number > -10) {
        digits = 1;

    } else if (number < 100 && number > -100) {
        digits = 2;

    } else if (number < 1000 && number > -1000) {
        digits = 3;

    } else if (number < 10000 && number > -10000) {
        digits = 4;

    } else {
        printf("\nNumber has more than %d digits\n", MAX_DIGITS);
        return EXIT_FAILURE;
    }

    printf("\nThe number %d has %d digits.\n", number, digits);
    return EXIT_SUCCESS;
    
};
