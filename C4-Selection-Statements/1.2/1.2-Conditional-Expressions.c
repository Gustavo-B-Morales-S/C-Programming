#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int number;

    printf("Number: ");
    scanf("%d", &number);

    // Ternary Expression Structure
    //
    // int number = 2;
    //
    // (if) number & 1 (False) ? (Then) "Odd" : (Else) "Even"
    printf("Number %d is %s.\n", number, number & 1 ? "Odd" : "Even");  // Ternary Expression (Conditional Expression)

    return EXIT_SUCCESS;

};
