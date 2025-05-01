#include <stdio.h>
#include <stdlib.h>

#define SUM(a, b, c, d) ((a) + (b) + (c) + (d))
#define PRINT_ROW(a, b, c, d) printf("%-4d %-4d %-4d %-4d\n", a, b, c, d)

int main(void) {

    int r1_n1, r1_n2, r1_n3, r1_n4,
        r2_n1, r2_n2, r2_n3, r2_n4,
        r3_n1, r3_n2, r3_n3, r3_n4,
        r4_n1, r4_n2, r4_n3, r4_n4;

    printf("\nEnter the numbers from 1 to 16 in any order: ");
    scanf(
        "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
        &r1_n1, &r1_n2, &r1_n3, &r1_n4,
        &r2_n1, &r2_n2, &r2_n3, &r2_n4,
        &r3_n1, &r3_n2, &r3_n3, &r3_n4,
        &r4_n1, &r4_n2, &r4_n3, &r4_n4
    );

    int r1, r2, r3, r4,
        c1, c2, c3, c4,
        d1, d2;

    r1 = SUM(r1_n1, r1_n2, r1_n3, r1_n4);
    r2 = SUM(r2_n1, r2_n2, r2_n3, r2_n4);
    r3 = SUM(r3_n1, r3_n2, r3_n3, r3_n4);
    r4 = SUM(r4_n1, r4_n2, r4_n3, r4_n4);

    c1 = SUM(r1_n1, r2_n1, r3_n1, r4_n1);
    c2 = SUM(r1_n2, r2_n2, r3_n2, r4_n2);
    c3 = SUM(r1_n3, r2_n3, r3_n3, r4_n3);
    c4 = SUM(r1_n4, r2_n4, r3_n4, r4_n4);

    d1 = SUM(r1_n1, r2_n2, r3_n3, r4_n4);
    d2 = SUM(r1_n4, r2_n3, r3_n2, r4_n1);

    printf("\n4x4 Arrangement: \n");
    PRINT_ROW(r1_n1, r1_n2, r1_n3, r1_n4);
    PRINT_ROW(r2_n2, r2_n2, r2_n3, r2_n4);
    PRINT_ROW(r3_n3, r3_n2, r3_n3, r3_n4);
    PRINT_ROW(r4_n4, r4_n2, r4_n3, r4_n4);

    printf("\nRow Sums: %d %d %d %d\n", r1, r2, r3, r4);
    printf("Column Sums: %d %d %d %d\n", c1, c2, c3, c4);
    printf("Diagonal Sums: %d %d\n", d1, d2);

    return EXIT_SUCCESS;

};
