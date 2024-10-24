#include <stdio.h>
#include "main.h"
/**
 * main - Prints the first 50 Fibonacci numbers.
 *
 * Description: This program generates and prints the first 50
 * Fibonacci numbers starting from 1 and 2, separated by a comma
 * and a space.
 *
 * Return: Always returns 0 (success).
 */
int main(void) {
    long long int fib1 = 1, fib2 = 2;
    long long int next_fib;
    int count;

    for (count = 1; count <= 50; count++) {
        if (count == 1) {
            printf("%lld", fib1);
        } else if (count == 2) {
            printf(", %lld", fib2);
        } else {
            next_fib = fib1 + fib2;
            printf(", %lld", next_fib);
            fib1 = fib2;
            fib2 = next_fib;
        }
    }

    printf("\n");
    return 0;
}
