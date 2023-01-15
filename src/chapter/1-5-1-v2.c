#include <stdio.h>

/*
The parentheses around the assignment, within the condition are necessary. The precedence
of != is higher than that of =, which means that in the absence of parentheses the relational
test != would be done before the assignment =.
*/

/* 2st version */
main() {
    int c;

    while ((c = getchar()) != EOF) {
        putchar(c);
    }

}