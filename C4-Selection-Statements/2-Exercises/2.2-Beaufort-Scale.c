#include <stdio.h>
#include <stdlib.h>


int main(void) {

    printf("%-20s %-20s\n", "Speed (Knots)", "Description");
    printf("%-20s %-20s\n", "Less than 1",   "Calm");
    printf("%-20s %-20s\n", "1-3",           "Light Air");
    printf("%-20s %-20s\n", "4-27",          "Breeze");
    printf("%-20s %-20s\n", "28-47",         "Gale");
    printf("%-20s %-20s\n", "48-63",         "Storm");
    printf("%-20s %-20s\n", "Above 63",      "Hurricane");

    int wind_speed;

    printf("\nWind Speed (Knots): "); scanf("%d", &wind_speed);

    printf(
        "\nCorresponding Description: %s.",
          wind_speed < 1  ? "Calm"
        : wind_speed < 3  ? "Light Air"
        : wind_speed < 27 ? "Breeze"
        : wind_speed < 47 ? "Gale"
        : wind_speed < 63 ? "Storm"
        :                   "Hurricane"
    );

    return EXIT_SUCCESS;

};
