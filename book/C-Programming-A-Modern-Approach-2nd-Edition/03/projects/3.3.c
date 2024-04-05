#include <stdio.h>

int main(void) {
    int i, j, k, x, y;
    printf("Enter ISBN: ");

    scanf("%d-%d-%d-%d-%d", &i, &j, &k, &x, &y);
    printf("GSI prefix: %d\n", i);
    printf("Group identifier: %d\n", j);
    printf("Publisher code: %d\n", k);
    printf("Item number: %d\n", x);
    printf("Check digit: %d\n", y);

    return 0;
}
