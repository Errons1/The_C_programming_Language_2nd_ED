#include <stdio.h>

/*
 * print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300
 * */

main() {
    int fahr;
    int celsius;

    /* VVV According to book all var should be declared first then given value*/
    int lower = 0;      /*lower limit of the scale*/
    int upper = 300;    /*upper limit*/
    int step = 20;      /*step size*/


    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr - 32) / 9;
        printf("%3d\t\t%3d\n", fahr, celsius);
        fahr = fahr + step;
    }
}
