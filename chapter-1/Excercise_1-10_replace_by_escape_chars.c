/*
 * =====================================================================================
 *
 *       Filename:  Excercise_1-10_replace_by_escape_chars.c
 *    Description:  A program that replace newlines with '\n'
 *                  tabs with '\n'and backslash by \\
 *        Version:  1.0
 *        Created:  01/28/2021 10:33:16 PM
 *       Compiler:  gcc
 *         Author:  zohaib2k2
 * =====================================================================================
 */

#include <stdio.h>

int main(){
    int c;
    int is_escape = 0;
    while((c=getchar()) != EOF){
        if(c=='\b'){
            is_escape = 1;
            printf("\\b");
        }
        if(c=='\t'){
            is_escape = 1;
            printf("\\t");
        }
        if(c=='\\'){
            is_escape = 1;
            printf("\\\\");
        }
        if(is_escape == 0){
            putchar(c);
        }
        is_escape = 0;
    }
}

