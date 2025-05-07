#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>  // Standard Library Boolean Implementation


// Boolean "Keywords" Implementation with Macro Definitions
#define TRUE 1
#define FALSE 0

// Integer Type Keyword Labeled as Bool for Better Semantic Representation
#define BOOL int

int main(void) {

    // Without Standard Library Booleans
    BOOL flag_ = TRUE | FALSE;

    // With Standard Library Booleans
    bool flag = true | false;

    printf("True: %d | False: %d\n", TRUE, FALSE);
    printf("True: %d | False: %d\n", true, false);

    return EXIT_SUCCESS;

};
