#include <stdio.h>
#include <stdlib.h>


int main(void) {

    int month, day, year, item_number;
    float unit_price;

    printf("Enther purchase date (mm/dd/yyyy): "); scanf("%d/%d/%d", &month, &day, &year);
    printf("Enter item number: ");                 scanf("%d", &item_number);
    printf("Enter unit price: ");                  scanf("%f", &unit_price);

    printf("item\t\t Unit\t\t Purchase\n");
    printf("\t\t Price\t\t Date\n");

    printf("%d\t\t $%7.2f\t %d/%d/%d\n", item_number, unit_price, month, day, year);

    return EXIT_SUCCESS;

}
