#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int accumulator = 0, number, sum = 0;

    while (accumulator++ < 10) {
        scanf("%d", &number);

        // Continue (Jump Statement)
        if ( !(number) ) continue;
        sum += number;

        // Or
        // if ( number ) {
        //     sum += number;
        // }

    }

    printf("\nSum: %d", sum);

    return EXIT_SUCCESS;

};
