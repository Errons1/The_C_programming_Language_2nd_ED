/* Exercise 1-12. Write a program that prints its input one word per line. */

#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in input */
main() {
    int c, state;

    state = OUT;
    while ((c = getchar()) != EOF) {
        putchar(c);
        if (c == ' ' || c == '\n' || c == '\t')
            putchar('\n');
    }

}