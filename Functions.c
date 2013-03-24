/* 
 * File:   Functions.c
 * Author: Stefan Klaus
 *
 * Created on 22 March 2013, 18:23
 */

#include <stdlib.h>

void fibonacci() {
    unsigned long long first = 0, second = 1, next, i;
    int f;

    printf("Fibonacci Generator: non-recursive\n");
    printf("Please enter how many iterations you want:\n");
    scanf("%d", &f);

    printf("The first %d iterations of Fibonacci numbers are:\n", f);
    printf("Fibonacci series\n");
    for (i = 0; i < f; i++) {
        if (i <= 1) {
            next = i;
        } else {
            next = first + second;
            first = second;
            second = next;
        }
        printf("%d\n", next);

    }

}

void fibonacci_recursive() {
    unsigned long long i = 0, c;
    int n;
    printf("Fibonacci Generator: Recursive\n\n");
    printf("NOTE: requesting a to large number might take FOREVER\n\n");
    printf("please enter how many iterations you want\n");
    scanf("%d", &n);

    printf("Fibonacci series\n");

    for (c = 1; c <= n; c++) {
        printf("%d\n", Fibonacci(i));
        i++;
    }
}

int Fibonacci(int n) {
    if (n == 0)
        return 0;
    else if (n == 1)
        return 1;
    else
        return (Fibonacci(n - 1) + Fibonacci(n - 2));
}