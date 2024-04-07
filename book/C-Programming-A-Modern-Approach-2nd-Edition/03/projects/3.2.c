#include <stdio.h>

int main(void) {
    int   item_num, year, month, day;
    float unit_price;

    printf("item number: ");
    scanf("%d", &item_num);
    printf("unit price: ");
    scanf("%f", &unit_price);
    printf("purchase date(mm/dd/yyyy): ");
    scanf("%d/%d/%d", &day, &month, &year);

    printf("Item\t\tUnit\t\tPurchase\n\t\tPrice\t\tDate\n");
    printf("%d\t\t$%8.2f\t%.2d/%.2d/%.4d", item_num, unit_price, day, month, year);

    return 0;
}
