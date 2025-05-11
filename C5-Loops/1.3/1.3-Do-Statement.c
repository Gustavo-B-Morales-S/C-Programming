#include <stdio.h>
#include <stdlib.h>

int main(void) {

    int number;

    printf("Countdown from: "); scanf("%d", &number);

    // Do Statement Structure
    // do Statement; or Compound Statement; while ( Controling Expression );
    do printf("%d\n", number); while (--number > 0);

    return EXIT_SUCCESS;

};
