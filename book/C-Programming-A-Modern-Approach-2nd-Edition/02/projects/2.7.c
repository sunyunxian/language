#include <stdio.h>

int main(void) {
    int amount = 0;
    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    int bill_20, bill_10, bill_5, bill_1;
    bill_20 = amount / 20;
    bill_10 = (amount - bill_20 * 20) / 10;
    bill_5 = (amount - bill_20 * 20 - bill_10 * 10) / 5;
    bill_1 = (amount - bill_20 * 20 - bill_10 * 10 - bill_5 * 5) / 1;

    printf("$20: bills: %d\n$10: bills: %d\n $5: bills: %d\n $1: bills: %d\n", bill_20, bill_10, bill_5, bill_1);

    return 0;
}
