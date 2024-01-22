#include <stdio.h>

void read_string(void);
void write_string(void);
int read_line(char str[], int n);

int main(void)
{
    read_string();
    char str1[6];
    read_line(str1, 5);
    puts(str1); // puts 自带换行
    write_string();
    return 1;
}

void read_string(void)
{
    char str[] = "Are we having fun yet?";
    printf("%s\n", str);
    puts(str); // puts 自带换行
}
void write_string(void)
{
}

int read_line(char str[], int n)
{
    int ch, i = 0;
    while ((ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}
