#include <stdio.h>
#include <stdlib.h>

// Variable Structure
/*

-- Mandatory
Type | Identifier or Identifier Sequence

-- Optional
Type | Identifier or Identifier Sequence | Assignment Operator (=) | Initializer (Value or Reference)

*/


// Terms Distinction
/*

Initializer: Value or Reference Assigned to an Identifier
Uninitialized: A variable that doesn't have a default value and hasn't yet been assigned a value
Initialization: It is the act of assigning an initial value to a variable at the time of its declaration.
Assignment: It is the act of changing or defining a value for an existing variable after its declaration

*/


int main(void)
{
    // Singular Declaration
    int length;  // Uninitialized

    // Simple Assignment
    length = 1;

    // Multiple Declaration
    float height, width;  // Uninitialized

    // Chained Assignment
    height = width = 2.0f;

    // Multiple Initialization
    int x = 1, y = 2, z = 3;

    // Initialization with Derived Expression
    int volume = height * length * width;

    printf("Length: %d. Height: %.1f. Width: %.1f.\n", length, height, width);
    printf("Volume: %d\n", volume);

    return EXIT_SUCCESS;
}
