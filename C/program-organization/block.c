#include <stdio.h>

int main(void)
{
    int i = 1, j = 2;
    printf("i = %d, j = %d\n", i, j);
    if (i < j)
    {
        // swap value of i and j
        int tmp = i;
        i = j;
        j = tmp;
    }
    printf("i = %d, j = %d\n", i, j);
    return 0;
}
