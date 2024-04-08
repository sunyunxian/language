#include <stdio.h>

int main(void) {
    float f = 12.3;
    double d = 12.33333333;
    long double ld = 12.333333333333333;
    printf("%f\n", f);  // 12.300000
    printf("%e\n", f);  // 12.300000
    printf("%g\n", f);  // 12.300000
    printf("%lf\n", d);  // 12.300000
    printf("%le\n", d);  // 12.300000
    printf("%lg\n", f);  // 12.3
    printf("%Lf\n", ld);  // 12.3
    printf("%Le\n", ld);  // 12.3
    printf("%Lg\n", ld);  // 12.3

    return 0;
}
