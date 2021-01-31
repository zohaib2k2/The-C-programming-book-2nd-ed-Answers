/*
 * =====================================================================================
 *
 *       Filename:  Exercise_1-15_tempereture_convertion_function.c
 *
 *    Description: The following program usees a finction function to convert fahrenheit
 *    in to celsius and produces an identical output 
 *
 *         Created:  01/31/2021 10:30:59 PM
 *         Compiler:  gcc
 *         Author:  zohaib2k2 
 * =====================================================================================
 */

#include <stdio.h>

// returns the celsius eqivelent of the inputed fahrenheit value
int fahr2cel(int fahr);

int main(){
    int fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;
    fahr = lower;

    while(fahr <= upper){
        celsius = fahr2cel(fahr);
        printf("%d\t%d\n", fahr,celsius);
        fahr = fahr + step;
    }
}

// defination
int fahr2cel(int fahr){
    int cel;
    cel = (5.0/9.0)*(fahr-32);
    return cel;
}




