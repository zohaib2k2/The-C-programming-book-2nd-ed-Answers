/*
 * =====================================================================================
 *       Filename:  Excercise_1-9_replace-blank.c
 *    Description:  following program copies input to output replaing
 *                  two or more blanks by single
 *        Version:  1.0
 *        Created:  01/28/2021 02:55:16 PM
 *       Compiler:  gcc
 *         Author:  zohaib2k2 
 * =====================================================================================
 */

#include <stdio.h>

int main(){
    int c;
    int is_blank = 0;
    while((c=getchar())!=EOF){
        if(c==' ') is_blank = 1;
        if(c!=' ' && is_blank==0) putchar(c);
        if(c!=' ' && is_blank == 1){
            putchar(' ');
            putchar(c);
            is_blank = 0;
        } 
    }
}

