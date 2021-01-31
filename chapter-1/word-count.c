/*
 * =====================================================================================
 *
 *       Filename:  word-count.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/29/2021 01:14:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define IN 1
#define OUT 0

int main(){
    int c, nl, nw, nc, state;
    state = OUT;
    nl = nw = nc = 0;

    while((c=getchar()) != EOF){
        ++nc;
        if(c == '\n')
            ++nl;
        if(c == ' ' || c == '\n' || c == '\t'){
            state = OUT;
        }
        else if(state == OUT){
            state = IN;
            ++nw;
        }
    }
    printf("%d %d %d\n",nl,nw,nc);
}
