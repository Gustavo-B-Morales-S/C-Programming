#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int n1, n2, n3, n4, n5, n6,
        n7, n8, n9, n10, n11,
        first_sum, second_sum, check_digit;

    printf("First: ");
    scanf("%1d", &n1);

    printf("First Group of Five: ");
    scanf("%1d%1d%1d%1d%1d", &n2, &n3, &n4, &n5, &n6);

    printf("Second Group of Five: ");
    scanf("%1d%1d%1d%1d%1d", &n7, &n8, &n9, &n10, &n11);

    first_sum = n1 + n3 + n5 + n7 + n9 + n11;
    second_sum = n2 + n4 + n6 + n8 + n10;
    check_digit = 9 - ((second_sum + (first_sum * 3) - 1) % 10);

    printf("\nCheck Digit: %d\n", check_digit);

    return EXIT_SUCCESS;

};
