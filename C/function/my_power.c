// 计算 x 的 y 次幂
// x * y 次
#include <stdio.h>

int power1(int x, int y);
int power2(int x, int y);

int main(void) {
    int x = 2, y = 3;
    printf("%d\n", power1(x, y));
    printf("%d\n", power2(x, y));
    return 0;
}

int power1(int x, int y) {
    int result = 1;
    for (int i = 1; i <= y; i++) {
        result = result * x;
    }
    return result;
}

int power2(int x, int y) {
    int result = 1;
    while (y-- > 0) {
        result *= x;
    }
    return result;
}
