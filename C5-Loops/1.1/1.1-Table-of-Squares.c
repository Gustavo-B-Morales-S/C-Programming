#include <stdio.h>
#include <stdlib.h>


int main(void) {
    int entries;

    printf("Number of Entries in Table: "); scanf("%d", &entries);

    while ( entries-- > 0 ) {
        printf("%-10d %d\n", (entries + 1), ((entries + 1) * (entries + 1)));
    }

    return EXIT_SUCCESS;
    
};
