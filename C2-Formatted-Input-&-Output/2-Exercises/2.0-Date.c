#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int month, day, year;

    printf("Enter a date (mm/dd/yyyy): "); scanf("%d/%d/%d", &month, &day, &year);
    printf("You entered the date: %9d/%.2d/%d\n", year, month, day);

    return EXIT_SUCCESS;

};
