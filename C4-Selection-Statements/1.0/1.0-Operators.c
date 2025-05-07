#include <stdio.h>
#include <stdlib.h>


int main(void) {

    // -----------------------------------------------------------
    // | Type of Operator     | Associativity | Precedence Level |
    // |---------------------------------------------------------|
    // | Relational Operators | Left          | 1                |
    // | Equality   Operators | Left          | 2                |
    // | Logical    Operators | Left & Right  | 3 & 1            |
    // -----------------------------------------------------------

    // Relational Operator
    printf("%d\n", 1 < 2);   // Less than
    printf("%d\n", 1 > 2);   // Higher than
    printf("%d\n", 1 <= 2);  // Less than or equal to
    printf("%d\n", 1 >= 2);  // Higher than or equal to

    // Equality Operator
    printf("%d\n", 1 == 1);   // Equal to
    printf("%d\n", 1 != 1);   // Not equal to

    // Logical Operators
    printf("%d %d\n", !(1), !(0));  // Logical NOT (Highest Precedence) (Right Associative)
    printf("%d\n", 1 && 0);         // Logical AND
    printf("%d\n", 1 || 0);         // Logical OR

    return EXIT_SUCCESS;

};
