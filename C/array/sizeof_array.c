#include <stdio.h>

#define N 5

void read_array(int a[], int n);

int main(void) {
    int a[N] = {1, 2, 3, 4, 5};
    read_array(a, N);
    for (int i = 0; i < (int)(sizeof(a) / sizeof(a[0])); i++) {
        a[i] = 0;
    }
    read_array(a, N);
    return 0;
}

void read_array(int a[], int n) {
    printf("read array\n");
    for (int i = 0; i < n; i++) {
        printf("%d\n", a[i]);
    }
}
