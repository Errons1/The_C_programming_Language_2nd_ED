/*Rewrite the temperature conversion program of Section 1.2 to use a function
* for conversion.
* */

#include <stdio.h>

/*
 * print Fahrenheit-Celsius table
 * for fahr = 0, 20, ..., 300
 * */

int fahrenheitToCelsius(int Fahrenheit);

int main() {
    int fahr;
    int celsius;

    /* VVV According to book all var should be declared first then given value*/
    int lower = 0;      /*lower limit of the scale*/
    int upper = 300;    /*upper limit*/
    int step = 20;      /*step size*/


    fahr = lower;
    while (fahr <= upper) {
        celsius = fahrenheitToCelsius(fahr);
        printf("%3d\t\t%3d\n", fahr, celsius);
        fahr = fahr + step;
    }

    return 0;
}

int fahrenheitToCelsius(int Fahrenheit) {
    int celsius = 5 * (Fahrenheit - 32) / 9;
    return celsius;
}

