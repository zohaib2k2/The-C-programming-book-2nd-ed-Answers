/*
 * =====================================================================================
 *
 *       Filename:  Excercise_1-4_Celsius-to-Fahrenheit.c
 *
 *    Description:  The following program prints a table converting celsius 
 *    in to Fahrenheit
 *
 *        Created:  01/26/2021 01:04:43 PM
 *       Compiler:  gcc
 *
 *         Author: zohaib2k2
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower,upper,step;
    
    lower = 0;
    upper = 300;
    step = 20;

    celsius = lower;
    printf("Celsius\t\tFahrenheit\n");
    while(celsius <= upper){
        fahr = (celsius * (9.0/5.0))+32;
        printf("%7.0f\t%18.2f\n",celsius,fahr);
        celsius = celsius + step;
    }
}

