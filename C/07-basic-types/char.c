#include <stdio.h>
#include <ctype.h>

void _7_3_1(void);
void _7_3_5 (void);

int main(void) {
    _7_3_1();
    _7_3_5();
    return 0;
}

void _7_3_1(void){
    
    char ch;
    int i;

    i = 'a';
    printf("i = %d\n", i);

    ch = 65;
    printf("ch = %c\n", ch);
    printf("ch + 1 = %c\n", (ch + 1));
    printf("ch + 2 = %c\n", (ch + 2));
    
    // cover lower to upper
    ch = 'a'; // (int)ch = 97
    if ('a' <= ch && ch <= 'z'){
        ch = ch - 'a' + 'A';
        // ch = ch - 26; 不能这样使用，因为大写和小写不是连续的
    }
    printf("ch = %c\n", ch);

    for (char ch = 'A'; ch <= 'Z'; ch++){
        printf("%c", ch);
    }
    printf("\n");
}

void _7_3_5(void){
    char ch = 'a';
    ch = toupper(ch);
    printf("ch = %c\n", ch);
}
