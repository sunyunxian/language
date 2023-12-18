#include <stdio.h>

int main(void)
{
    short a = 123;
    int b = 123;
    long c = 123L;
    long long d = 123LL;
    int e = 012;
    int f = 0x123;

    printf("%hd\n", a);
    printf("%d\n", b);
    printf("%ld\n", c);
    printf("%lld\n", d);
    printf("%o\n", e);
    printf("%x\n", f);
}
