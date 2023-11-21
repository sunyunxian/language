#include <stdio.h>

int main(void)
{
    int n = 0, sum = 0;
    printf("This program sums a series of integers.\n");
    printf("Enter integers(0 to terminate): ");

    scanf("%d", &n);
    while (n != 0)
    {
        sum += n;
        scanf("%d", &n);
    }

    printf("sum is %d", sum);
    return 0;
}
