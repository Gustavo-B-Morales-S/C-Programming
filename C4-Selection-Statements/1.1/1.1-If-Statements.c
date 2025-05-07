#include <stdio.h>
#include <stdlib.h>

#define PRINT_COMISSION(base, percent, value) printf("Comission: $%.2f\n", (base + (percent * value)))


int main(void) {

    printf("%-20s %s\n", "Transaction size", "Commission rate");
    printf("%-20s %s\n", "Under $2,500",     "$30 + 1.7%");
    printf("%-20s %s\n", "$2,500-$6,250",    "$56 + 0.66%");
    printf("%-20s %s\n", "$6,250-$20,000",   "$76 + 0.34%");
    printf("%-20s %s\n", "$20,000-$50,000",  "$100 + 0.22%");
    printf("%-20s %s\n", "$50,000-$500,000", "$155 + 0.11%");
    printf("%-20s %s\n", "Over $500,000",    "$255 + 0.09%");

    float value;

    printf("\nTrade Value: ");
    scanf("%f", &value);

    // If Statement Structure
    /*
    If (Keyword Indicating a Logical Decision Structure) (Expression) {

        Statements

    } else (Optional) | else if (Optional)
    */

    if (value > 500000.00f) {

        PRINT_COMISSION(255, value, .0009f);

    } else if (value > 50000.00f) {

        PRINT_COMISSION(155, value, .0011f);

    } else if (value > 20000.00f) {

        PRINT_COMISSION(100, value, .0022f);

    } else if (value > 6250.00f) {

        PRINT_COMISSION(76, value, .0034f);

    } else if (value > 2500.00f) {

        PRINT_COMISSION(56, value, .0066f);

    } else  if (value > 39.00f){

        PRINT_COMISSION(30, value, .017f);

    } else {

        PRINT_COMISSION(39.00f, 0, 0);

    }

    return EXIT_SUCCESS;

};
