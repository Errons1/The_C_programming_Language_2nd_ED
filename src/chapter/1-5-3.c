#include <stdio.h>

/* count lin in input */
int main() {
    int c, newLines, tabs, blanks;

    newLines = 0;
    tabs = 0;
    blanks = 0;
    while ((c = getchar()) != EOF) {
        switch (c) {
            case '\n': ++newLines;
            case 9: ++tabs;
            case 32: ++blanks;
            default:
                break;
        }
    }

    printf("Newline: %d\n", newLines);
    printf("Tabs: %d\n", tabs);
    printf("blanks: %d\n", blanks);

    return 0;
}