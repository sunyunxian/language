/*
 * Author: sunyunxian
 * Purpose: learn c pointer
 * copyright 2023
 */

#include <stdio.h>

int main(void) {
    int i, *p;
    p = &i;
    printf("i = %d\n", i);
    printf("*p = %d\n", *p);
    *p = 1;
    printf("i = %d\n", i);
    printf("*p = %d\n", *p);
    return 0;
}
