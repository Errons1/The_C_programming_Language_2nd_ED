#include <stdio.h>

/*
The parentheses around the assignment, within the condition are necessary. The precedence
of != is higher than that of =, which means that in the absence of parentheses the relational
test != would be done before the assignment =.
*/

/*1st version*/
void mainOld() {
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
}
