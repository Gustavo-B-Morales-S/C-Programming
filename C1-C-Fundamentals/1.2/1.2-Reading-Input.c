#include <stdio.h>


int main(void)
{
    int number;

    printf("Number: ");

    // Request user input and store the entered value in the specified variable
    scanf("%d", &number);  // // The & symbol is used to pass the address of the variable to scanf

    printf("Square: %d² = %d\n", number, (number * number));

    return 0;
}
