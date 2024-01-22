#include <stdio.h>

#define N 5

void read_elements(int a[], int length);
void sum_elements(int a[], int length);
void clear_elements(int a[], int length);
void write_elements(int a[], int length);

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5};
    read_elements(a, N);
    sum_elements(a, N);
    clear_elements(a, N);
    write_elements(a, N);
    int c[10] = {5, 1, 9, [4] = 3, 7, 2, [8] = 6};
    read_elements(c, 10);
    return 0;
}

void read_elements(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        printf("a[%d] = %d\n", i, a[i]);
    }
}

void clear_elements(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        a[i] = 0;
    }
    read_elements(a, length);
}

void sum_elements(int a[], int length)
{
    int sum = 0;
    for (int i = 0; i < length; i++)
    {
        sum += a[i];
    }
    printf("sum = %d\n", sum);
}

void write_elements(int a[], int length)
{
    for (int i = 0; i < length; i++)
    {
        scanf("%d", &a[i]);
    }
    read_elements(a, length);
}
