#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main(void) {

    int number;

    while (true) {
        printf("\nNumber (0 to stop): "); scanf("%d", &number);
        system("clear");

        // Break (Jump Statement)
        if ( !(number) ) break;

        for (int multiplier = 1; multiplier <= 10; ++multiplier) {
            printf("%d X %d = %d\n", number, multiplier, (number * multiplier));
        }

    }

    return EXIT_SUCCESS;

};
