/*
 * =====================================================================================
 *       Filename:  Excercise_1-5_reverse-order.c
 *
 *    Description:  Prints the the temperature converstion table (Fahrenheit to Celsius)
 *      in reverse order from 300 to 0
 *
 *        Version:  1.0
 *        Created:  01/26/2021 02:08:51 PM
 *       Compiler:  gcc
 *
 *         Author: zohaib2k2 
 * =====================================================================================
 */

#include <stdio.h>

int main(){
    int fahr;

    // the Excercise 1-5 does not ask to put a heading put-
    // it here anyway for the sake of getting a sense of completeness
    printf ("Fahrenheit\tCelsius\n");
    
    for(fahr = 300; fahr >= 0; fahr = fahr - 20){
        printf("%9d\t%.2f\n",fahr,(5.0/9.0)*(fahr-32));
    }
}

