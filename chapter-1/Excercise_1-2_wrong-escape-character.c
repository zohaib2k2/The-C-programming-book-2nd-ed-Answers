/*
 * =====================================================================================
 *
 *       Filename:  Excercise_1-2_wrong-escape-character.c
 *
 *    Description: A program writen to experiment what would happen
 *    if we printf argument contains a string with \c where c is not 
 *    a escape character
 *
 *        Version:  1.0
 *        Created:  01/26/2021 12:35:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Plank, 
 *
 * =====================================================================================
 */

#include <stdio.h>

main(){
    printf("hello world \n\c\m");
}


