/*Write a program to print a histogram of the lengths of words in its input. It is
* easy to draw the histogram with the bars horizontal; a vertical orientation is more challenging.
* */

#include <stdio.h>

#define ALPHABET 10

void printDots(int dots);

int main() {
    int c, nwhite, nother;
    int ndigit[ALPHABET];

    nwhite = nother = 0;
    for (int i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
        if (c >= '0' && c <= '9') {
            ++ndigit[c-'0']; /* Making char '0'-'9' to actually numbers 0-9 */
        }
        else if (c == ' ' || c == '\n' || c == '\t') {
            ++nwhite;
        }
        else {
            ++nother;
        }
    }

    printf("            Histogram           \n");
    printf("--------------------------------\n");
    for (int i = 0; i < ALPHABET; ++i) {
        printf("%d: ", i);
        printDots(ndigit[i]);
    }
    printf("Whitespace: ");
    printDots(nwhite);
    printf("Other: ");
    printDots(nother);

    return 0;
}

void printDots(int dots) {
    for (int i = 0; i < dots; ++i) {
            printf("*");
    }
    printf("\n");
}
