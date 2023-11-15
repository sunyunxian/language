#include <stdio.h>

int main(void)
{
    int radius;
    printf("Input radius: ");
    scanf("%d", &radius);
    float volume;
    volume = 4.0f / 3.0f * radius * radius * radius * 3.14f;
    printf("Sphere volume: %.2f cubic meters\n", volume);
    return 0;
}
