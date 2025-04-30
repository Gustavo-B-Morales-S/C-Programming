#include <stdio.h>
#include <stdlib.h>

#define PI 3.14159265358979323846
#define CUBE(N) ((N) * (N) * (N))


int main(void) {

    float radius;
    printf("Radius: "); scanf("%f", &radius);

    float volume = (4.0f / 3.0f) * (PI * CUBE(radius));
    printf("Volume: %.2f\n", volume);

    return EXIT_SUCCESS;

};
