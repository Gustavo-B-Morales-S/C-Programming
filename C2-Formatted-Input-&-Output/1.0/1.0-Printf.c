#include <stdio.h>  // Standard Library Containing Printf Function
#include <stdlib.h>


// Printf (C A Modern Approach 2nd Edition: Page 39)
/*

    Escape Sequences:
      Alert (Bell)  : \a
      Backspace     : \b
      Horizontal Tab: \t
      New Line      : \n

    String Structure:
      Ordinary Characters and Escape Sequences (Optional) Enclosed in Double Quotes
      Example: "This is a String"

    Conversion Specification Structure:
      With a Percentage Symbol and a Conversion Specifier Specifying how the Binary Value Should be Mapped
      Example: %m.pX
        - m ((Optional), Integer Constant): Indicate Minimum Field Width
        - p ((Optional), Integer Constant): Indiciate Precison
        - X ((Required), Letter)          : Indicate the Conversion Specifier

    Format String Structure:
      Ordinary Characters (Optional) and Conversion Specifications (%) Enclosed in Double Quotes
      Example: "This is a Float: %-10.2f"

    printf(String | Format String, Expression1, Expression2, ...)

*/


int main(void) {

    // Common Conversion Specifiers and Escape Sequences
    printf("%d.\a", 1);    // Displays an Integer in Decimal (Base 10)
    printf("%e\b", 2.0);  // Displays an Floating-Point Number in Exponential Format (Scientific Notation)
    printf("%f.\t", 3.0);  // Displays a Floating-Point Number in "Fixed-Decimal" Format
    printf("%g.\n", 4.0);  // Displays a Floating-Point Number in either  'f' or 'e' Format, Depending on the Number's Size

    return EXIT_SUCCESS;

};
