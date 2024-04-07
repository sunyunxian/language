#include <stdio.h>

int main(void) {
    printf("%6d, %4d\n", 86, 1040);

    /* 2
    float x = 8.8f;
    printf("%-8.1e\n", x);
    printf("%10.6e\n", x);
    printf("%-8.3f\n", x);
    printf("%6.0f\n", x);
    */

    // 4
    int   i, j;
    float x;
    scanf("%d%f%d", &i, &x, &j);
    printf("i = %d, j = %d, x = %f\n", i, j, x);
    return 0;
}
