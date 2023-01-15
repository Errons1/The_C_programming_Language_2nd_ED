/* Exercise 1-11. How would you test the word count program? What kinds of input are most
 * likely to uncover bugs if there are any? */

/* Answer: In this state learning C, I would run the program and manually count and check if things match.
 * If C have it I would write UNIT test.
 *
 * For the input part of the question I would think maybe multiple EOF could make for bugs.
 * I know the 32 first part of the ASCII table is for pc commands, but how many of them are
 * involved into writing is unknown for me at this time and could be huge source of bugs
 * that could be easy to fic. */


#include <stdio.h>

#define IN  1   /* inside a word */
#define OUT 0   /* outside a word */

/* count lines, words, and characters in input */
main() {
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

}