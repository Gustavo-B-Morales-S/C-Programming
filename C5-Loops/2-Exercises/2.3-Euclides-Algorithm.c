#include <stdio.h>
#include <stdlib.h>

#define MOD(a, b) ((a) % (b))


int main(void) {
    int a, b, l, s, r;

    printf("Two Nonnegative Integers: "); scanf("%d %d", &a, &b);

    if ( !(a && b) ) {
        printf("Null Integers are not Allowed.\n");
        return EXIT_FAILURE;
    }

    (a > b)
    ? ((l = a), (s = b))
    : ((l = b), (s = a));

    while (MOD(l, s)) {
        r = MOD(l, s);
        l = s;
        s = r;
    }

    printf("\nGreatest Common Divisor of %d & %d is %d\n", a, b, s);

    return EXIT_SUCCESS;

};
