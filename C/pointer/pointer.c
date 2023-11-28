/*
 * Author: sunyunxian
 * Purpose: learn c pointer
 * copyright 2023
 */

#include <stdio.h>

int main(void) {
    int i, j, *p;
    i = 0;
    p = &i;
    j = *&i;  // j = i
    printf("i = %d, &i = %p\n", i, &i);
    printf("p = %p\n", p);
    printf("%d\n", j);
    return 0;
}
