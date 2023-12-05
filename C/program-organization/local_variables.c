// Local variable and static local variables
#include <stdio.h>

void f(void);

int main(void)
{
    printf("First call f function\n");
    f();
    printf("Second call f function\n");
    f();
    return 0;
}

void f(void)
{
    int i = 0;
    printf("f function variable i = %d\n", i);
    i += 1;
    printf("f function variable i = %d\n", i);
    static int j = 0;
    printf("f function static variable j = %d\n", j);
    j += 1;
    printf("f function static variable j = %d\n", j);
}
