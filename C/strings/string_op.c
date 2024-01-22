#include <stdio.h>

void printf_string_and_string_index(void);
char digit_to_hex_char(int digit);

int main(void)
{
    printf_string_and_string_index();
    char rst;
    int i = 10;
    rst = digit_to_hex_char(i);
    printf("%d to hex char is %c\n", i, rst);
}

void printf_string_and_string_index(void)
{
    char *p;
    char ch;
    p = "abc";
    ch = "abc"[0];
    printf("%s\n", p);
    printf("%c\n", ch);
}
char digit_to_hex_char(int digit)
{
    return "0123456789ABCDEF"[digit];
}
