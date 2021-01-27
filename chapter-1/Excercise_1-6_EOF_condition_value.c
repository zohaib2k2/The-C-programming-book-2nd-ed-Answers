/*
 * =====================================================================================
 *       Filename:  Excercise_1-6_EOF_condition_value.c
 *    Description:  Following program finds the value of expression getchar() != EOF
 *                  is 0 or 1
 *
 *        Version:  1.0
 *        Created:  01/27/2021 02:46:37 PM
 *       Compiler:  gcc
 *         Author: Zohaib2k2 
 * =====================================================================================
 */

#include <stdio.h>

int main(){
    int cond;
    
    // The condition must either be true(1) or false(0)
    cond = (getchar() != EOF);
    
    while(cond){
        printf("%d \n",cond);
        cond = (getchar() != EOF);
    }
    printf("%d \n",cond);
    
}
