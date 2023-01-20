#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in input */
int main() {
    int c, nl, nw, nc, state;

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;

        /*count new lines*/
        if (c == '\n'){
            ++nl;
        }
        /* checks if you are outside word*/
        if (c == ' ' || c == '\n' || c == '\t') {
            state = OUT;
        }
        /* counts new words */
        else if (state == OUT) {
         state = IN;
         ++nw;
        }
    }

    printf("New line: %d\n", nl);
    printf("New word: %d\n", nw);
    printf("New char: %d\n", nc);

    return 0;
}