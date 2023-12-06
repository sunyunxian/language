#include <limits.h>
#include <stdio.h>

int main(void)
{
    int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int b[10] = {1, 2, 3, 4, 5};
    int c[10] = {0};
    int d[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int e[15] = {[2] = 29, [9] = 1};
    return 0;
}
