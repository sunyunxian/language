#include <stdio.h>

#define N 10

void read_array_elements(int a[], int length);

int main(void)
{
    int a[N];
    // Use for loop clear array
    for (int i = 0; i < N; i++)
    {
        a[i] = 0;
    }
    read_array_elements(a, N);

    // Read data to array
    printf("Enter %d number: ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &a[i]);
    }
    read_array_elements(a, N);

    // Sum array
    int sum = 0;
    for (int i = 0; i < N; i++)
    {
        sum += a[i];
    }
    printf("Sum = %d\n", sum);

    return 1;
}

void read_array_elements(int a[], int length)
{
    // Read array elements
    for (int i = 0; i < length; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}
