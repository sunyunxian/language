#include <stdio.h>

int main(void)
{
    char ch;

    ch = 'a';
    printf("%c\n", ch);
    printf("%d\n", ch);

    ch = 'A';
    printf("%c\n", ch);
    printf("%d\n", ch);

    printf("a - A = %d\n", ('a' - 'A'));

    ch++;
    printf("%c\n", ch);

    for (char x = 'A'; x <= 'Z'; x++)
    {
        printf("%c", x);
    }
}
