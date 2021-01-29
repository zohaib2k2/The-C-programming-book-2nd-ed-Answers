/*
 * =====================================================================================
 *       Filename:  Excercise_1-8_count_characters.c
 *    Description:  This program counts blanks, newline and newline.
 *        Created:  01/28/2021 12:35:43 PM
 *       Compiler:  gcc
 *         Author:  zohaib2k2 
 * =====================================================================================
 */

#include <stdio.h>

int main(){
    int c;
    int nlines,ntabs,nblanks;
    nlines = ntabs = nblanks = 0;
    while((c=getchar()) != EOF){
       nlines = nlines + (c=='\n');
       ntabs = ntabs + (c==' ');
       nblanks = nblanks + (c=='\t');
    }
    printf("The number of newlines : %d\n",nlines);
    printf("The number of tabs : %d\n",ntabs);
    printf("The number of nblanks : %d\n",nblanks);
}

