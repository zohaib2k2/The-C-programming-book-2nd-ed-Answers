/*
 * =====================================================================================
 *
 *       Filename:  Excercise_1-3_heading.c
 *
 *    Description: Prints a heading above the temperature conversion 
 *
 *        Created:  01/26/2021 11:47:08 AM
 *       Compiler:  gcc
 *
 * =====================================================================================
 */

#include <stdio.h>
// NOTE: The main() is given an int return type 
// to avoid a Compiler warning
int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    fahr = lower;
    printf("Fahrenheit\tCelsius\n");
    while(fahr <= upper){
        celsius = 5 * (fahr - 32) / 9;
        printf("%10.0f\t%2.2f\n", fahr, celsius);
        fahr = fahr + step;
    }
}


