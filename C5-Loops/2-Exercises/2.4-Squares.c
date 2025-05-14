#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int n;

    printf("Number: "); scanf("%d", &n);

    for (int i = 1; i < n; ++i) {
        if ((i * i) % 2) {
            continue;
        }

        if ((i * i) > n) {
            break;
        }

        printf("%d\n", i * i);
    }

    return EXIT_SUCCESS;

};
