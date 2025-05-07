#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int hours, minutes;

    printf("Enter a 24-hour time: "); scanf("%d:%d", &hours, &minutes);

    if ( (hours < 00 || hours > 23) || (minutes < 00 || minutes > 59) ) {

        printf("Invalid 24-hour time.\n");
        return EXIT_FAILURE;

    }

    printf(
        "Equivalent 12-hour time: %.2d:%.2d %s\n",
        hours % 12 ? hours % 12 : 12,
        minutes,
        hours < 12 ? "AM" : "PM"
    );

    return EXIT_SUCCESS;

};
