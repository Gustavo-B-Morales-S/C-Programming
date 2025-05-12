#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int limit, number;

    GET_NUMBER: {
        printf("Number: "); scanf("%d", &number);
    }
    if ( !(number) ) goto GET_NUMBER;

    GET_LIMIT: {
        printf("Limit: "); scanf("%d", &limit);
    }
    if ( !(limit) ) goto GET_LIMIT;

    goto VERIFY;

    INCREMENT: {
        printf("%d\n", number++);
        goto VERIFY;
    }

    VERIFY: {
        if (number <= limit) goto INCREMENT;
    }

    return EXIT_SUCCESS;

};
