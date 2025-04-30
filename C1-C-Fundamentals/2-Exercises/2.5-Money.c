#include <stdio.h>
#include <stdlib.h>


int main(void) {

    float amount, tax;

    printf("Enter an amount: $");  scanf("%f", &amount);
    printf("Enter an tax...: %%"); scanf("%f", &tax);

    printf("\nWith tax added.: $%.2f\n", amount * (1 + tax));

    return EXIT_SUCCESS;

};
