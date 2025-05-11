#include <stdio.h>
#include <stdlib.h>


int main(void) {

    // For Statement Structure
    // for ( expression ; Controlling Expression ; expression) {
    //     Statement or Compound Statement (Loop Body)
    // }

    int multiplicand_limit, multiplier_limit;

    printf("Multiplicand Limit: "); scanf("%d", &multiplicand_limit);
    printf("Multiplier Limt: "); scanf("%d", &multiplier_limit);

    for (int multiplicand = 1; (multiplicand <= multiplicand_limit); ++multiplicand, printf("\n")) {

        for (int multiplier = 1 ; multiplier <= multiplier_limit; ++multiplier) {
            printf("%d * %d = %d\n", multiplicand, multiplier, (multiplicand * multiplier));
        }
    }

    return EXIT_SUCCESS;
    
};
