// A) - Identify the directives and statements in this program.
//R:

#include <stdio.h>      // Directive (File Inclusion)
#define EXIT_SUCCESS 0  // Directive (Macro Definition)


int main(void) {  // Function Signature (Not a Statement)

    printf("Parkinson's Law:\n Work expands so as to ");  // Statement
    printf("fill the time\n");                            // Statement
    printf("available for its completion.\n");            // Statement

    return EXIT_SUCCESS;  // Statement
};

// --------------------------------------------------------------------

// B) - What output does the program produce?

/*
R: The program prints three lines of text to the
   Parent Process Standard Output (STDOUT),
   it then terminates with a Status Code 0,
   signaling successful execution to the Parent Process
*/
