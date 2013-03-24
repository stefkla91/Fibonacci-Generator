/* 
 * File:   Main.c
 * Author: Stefan Klaus
 *
 * Created on November 28, 2012, 9:37 PM
 */

#include <stdio.h>
#include <stdlib.h>

#include "Functions.h"

/**
 * Simple Fibonacci generator
 * @param argc
 * @param argv : write 'f' for a non-recursive approach or 'r' for a recursive approach 
 * @return 
 */
int main(int argc, char** argv) {
    if(argv[1][0] == 'f'){
        fibonacci();
    }else if(argv[1][0] == 'r'){
        fibonacci_recursive();
    }
    return 0;
}

