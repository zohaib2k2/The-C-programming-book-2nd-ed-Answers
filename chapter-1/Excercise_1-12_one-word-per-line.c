/*
 * =====================================================================================
 *
 *       Filename:  Excercise_1-12_one-word-per-line.c
 *
 *    Description:  A program that copies input to output one word per line
 *
 *        Version:  1.0
 *        Created:  01/29/2021 06:16:55 PM
 *       Compiler:  gcc
 *         Author:  zohaib2k2
 * =====================================================================================
 */

#include <stdio.h>

int main(){
    int c;
    while((c=getchar()) != EOF){
        if(c == '\n' || c == ' ' || c == '\t') putchar('\n');
        else putchar(c);
    }
}


