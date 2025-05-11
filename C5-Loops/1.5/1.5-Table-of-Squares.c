#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int m;

    printf("Maximum Number of Entries: "); scanf("%d", &m);

    for (int n = 1; n <= m; ++n) {
        printf("Square of %d is %d.\n", n, (n * n));
    }

    return EXIT_SUCCESS;

};
