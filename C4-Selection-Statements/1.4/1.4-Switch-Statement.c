#include <stdlib.h>
#include <stdio.h>


int main(void) {

    // Switch Statement Structure
    // switch (integer-expression) {
    //     case (constant-expression): statements
    //
    //     ...
    //
    //     default: statements
    // }

    int first_number, second_number, result;
    char operator;

    printf("Number: ");
    scanf("%d", &first_number);

    printf("Arithmetic Operator: ");
    scanf(" %c", &operator);

    printf("Number: ");
    scanf("%d", &second_number);

    switch (operator) {

        case '+': result = (first_number + second_number);
                  break;

        case '-': result = (first_number - second_number);
                  break;

        case '/': result = (first_number / second_number);
                  break;

        case '*': result = (first_number * second_number);
                  break;

        default: printf("Invalid Arithmetic Operator.\n");
                 return EXIT_SUCCESS;
    }

    printf("%d %c %d = %d\n", first_number, operator, second_number, result);

    return EXIT_SUCCESS;

};
