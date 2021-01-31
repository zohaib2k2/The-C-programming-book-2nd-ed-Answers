/*
 * =====================================================================================
 *
 *       Filename:  Excercise_1-14_frequecny-histogram.c
 *
 *    Description:  This program prints a HORIZONTAL histogram of the frequencies of 
 *                  different characters in its input.
 *
 *        Version:  1.0
 *        Created:  01/30/2021 10:21:53 PM
 *       Compiler:  gcc
 *
 *         Author:  zohaib2k2 
 * =====================================================================================
 */

#include <stdio.h>
#include <math.h>

int main(){
    int i,c;
    int nb,nn,nother,ntabs,nl;
    int loop_index;

    ntabs = nb = nn = nother = nl = 0;

    while((c=getchar())!=EOF){
        if(c == '\t') ntabs++;
        else if(c == '\n') nl++;
        else if(c >= '0' && c <= '9' ) nn++;
        else if(c == ' ') nb++;
        else nother++;
    }
    printf("tabs frequencies: "); 
    for(loop_index = 0; loop_index < ntabs; loop_index++ ) printf("* ");
    printf("\n");
    printf("new lines frequencies: "); 
    for(loop_index = 0; loop_index < nl; loop_index++ ) printf("* ");
    printf("\n");
    printf("white blanks frequencies: "); 
    for(loop_index = 0; loop_index < nb; loop_index++ ) printf("* ");
    printf("\n");
    printf("number frequencies: "); 
    for(loop_index = 0; loop_index < nn; loop_index++ ) printf("* ");
    printf("\n");
    printf("ascii characters frequencies: "); 
    for(loop_index = 0; loop_index < nother; loop_index++ ) printf("* ");
    printf("\n");

}


