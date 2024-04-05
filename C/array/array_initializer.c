#include <limits.h>
#include <stdio.h>

void init_array();

int main(void) {
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    printf("%s", a);
    int b[10] = {1, 2, 3, 4, 5};
    int c[10] = {0};
    int d[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int e[15] = {[2] = 29, [9] = 1};
    init_array();
    return 0;
}
void init_array() {
    int a[3] = {1, 10, 100};
    a[2] = 1000;
    for (int i = 0; i < 3; i++) {
        printf("a[%d] = %d\n", i, a[i]);
    }
}
