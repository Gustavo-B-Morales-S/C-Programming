#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int a, b, c, d;
    int smallest, largest;

    printf("Enter four integers: ");
    scanf("%d %d %d %d", &a, &b, &c, &d);

    largest = smallest = a;

    if (b > largest) largest = b;
    if (b < smallest) smallest = b;

    if (c > largest) largest = c;
    if (c < smallest) smallest = c;

    if (d > largest) largest = d;
    if (d < smallest) smallest = d;

    printf("Largest: %d\nSmallest: %d\n", largest, smallest);

    return EXIT_SUCCESS;

};
