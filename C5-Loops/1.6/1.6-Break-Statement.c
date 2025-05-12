#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int number, divisor = 2;

    printf("Number: "); scanf("%d", &number);

    // Break (Jump Statement)
    do {if (number % divisor == 0) break;} while (++divisor < number);

    (divisor < number)
    ? printf("%d is not prime.\n", number)
    : printf("%d is prime.\n", number);

    return EXIT_SUCCESS;

};
