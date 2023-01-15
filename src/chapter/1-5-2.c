#include <stdio.h>

/* count characters in input; 1st version */
/* Works in terminal but not in IDE! */
int mainOld() {
    double nc;

    nc = 0;
    while (getchar() != EOF)
        ++nc;
    printf("%.0f\n", nc);

    return 0;
}