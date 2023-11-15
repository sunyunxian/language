/*
注释有很多种写法，但是我觉得写的顺手的事使用 C99 的方式写比较舒服

除了舒服之外，容易可识别也很重要。
但这不是定论，而是灵活使用，比如一句话的注释比较长，用 C99 分成多行就不是很好。

灵活使用

*/

/* This is comment */

/* Name: pun.c */
/* Purpose: Prints a bad pun. */
/* Author: K. N. King. */

/* Name: pun.c
   Purpose: Prints a bad pun.
   Author: K. N. King. */

// 这种方式是比较好的

/* Name: pun.c
   Purpose: Prints a bad pun.
   Author: K. N. King.
*/

/*****************************
 * Name: pun.c               *
 * Purpose: Prints a bad pun.*
 * Author: K. N. King.       *
 * ***************************/

/* Name: pun.c
 * Purpose: Prints a bad pun.
 * Author: K. N. King.
 */

// Name: pun.c
// Purpose: Prints a bad pun.
// Author: K. N. King.

/* C comments */

#include <stdio.h>

int main(void) /* Beginning of main program. */
{
    printf("To C, or not to c: That is the question.\n");
    return 0;  // return statement.
}
