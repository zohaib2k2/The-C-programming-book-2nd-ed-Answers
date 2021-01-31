/*
 * =====================================================================================
 *       Filename:  Excercise_1-13_vertical-histogram.c
 *    Description:    
 *        Version:  1.0
 *        Created:  01/29/2021 08:50:17 PM
 *       Compiler:  gcc
 *         Author:  zohaib2k2
 * =====================================================================================
 */

 /*
  * NOTE:
  * This program was writen after reading C programming concepts that was introduced
  * later in the book like using nested loops 
  */

#include <stdio.h>


#define IN 1
#define OUT 0

#define MAX_WORDS 100 


int main(){
    int c;
    int n_words[MAX_WORDS];
    
       for ( int index = 0; index < MAX_WORDS; index += 1 ) 
        n_words[index] = 1;//if a word exist then it must have at least one charachter

    int state = OUT;
    int nw, nc;
    nw = nc  = 0;

    while((c=getchar())!=EOF){
        ++nc;
        
        if(c==' ' || c=='\n' || c =='\t') state = OUT;
        else if(state == OUT){
            state = IN;
            ++nw;
        } else ++n_words[nw-1];
    }
    int max_len = 0;
    for (int i = 0;i < nw;i++){
        if(max_len < n_words[i]) max_len = n_words[i];
    }
    
    int level = 1;
    for ( int word_index= 0; word_index< max_len; word_index+= 1 )         
    {
        for( int j = 0; j < nw; j++  ){
            if(n_words[j] >= level ){
                printf("* ");
            }
            else 
                printf("  "); 
        }
        level++;
        printf("\n");
    }
}
