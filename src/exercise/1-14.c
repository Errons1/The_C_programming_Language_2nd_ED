/*Write a program to print a histogram of the frequencies of different characters
* in its input.
* */
#include <stdio.h>

#define ALPHABET 57

void printDots(int dots);

int main() {
    int c, nwhite, nother;
    char ndigit[ALPHABET];

    nwhite = nother = 0;
    for (int i = 0; i < 10; ++i) {
        ndigit[i] = 0;
    }

    while ((c = getchar()) != EOF) {
//        c = c - 65; //char 'A' starts at 65
        if (c >= 65 && c <= 122) {
            ++ndigit[c-'A'];
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
        printf("%c: ", i + 65);
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
