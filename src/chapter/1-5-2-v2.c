#include <stdio.h>

/* count character in input; 2nd version */
/* Works in terminal but not in IDE! */
int main() {
    long nc;
    for (nc = 0; getchar() != EOF ;  ++nc)
        ;
    printf("%ld\n", nc);

    return 0;
}