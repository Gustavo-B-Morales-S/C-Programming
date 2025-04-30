#include <stdio.h>  // Standard Library Containing Scanf Function
#include <stdlib.h>


int main(void) {

    int first_number, first_denominator,
        second_number, second_denominator,
        result_number, result_denominator;

    printf("Enter the First Fraction: ");
    scanf("%d/%d", &first_number, &first_denominator);

    printf("Enter the Second Fraction: ");
    scanf("%d/%d", &second_number, &second_denominator);

    result_number = (
            (first_number * second_denominator) + (second_number * first_denominator)
        );

    result_denominator = (first_denominator * second_denominator);

    printf("The sum is: %d/%d.\n", result_number, result_denominator);

    return EXIT_SUCCESS;
    
}
