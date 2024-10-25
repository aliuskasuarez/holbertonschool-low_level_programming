#include <stdio.h>

/**
 * main - Prints the first 98 Fibonacci numbers and their sum
 *
 * Description: This program generates the first 98 Fibonacci numbers
 *              and calculates the sum of the even ones.
 *
 * Return: Always returns 0 on success
 */
int main(void)
{
    unsigned long fib1 = 1, fib2 = 2;
    unsigned long next_fib;
    unsigned long sum = 0;

    printf("%lu", fib1);
    sum += fib1;

    for (int i = 1; i < 98; i++)
    {
        if (i == 1) {
            printf(", %lu", fib2);
            sum += fib2;
            continue;
        }

        next_fib = fib1 + fib2;
        printf(", %lu", next_fib);

        if (next_fib % 2 == 0) {
            sum += next_fib;
        }

        fib1 = fib2;
        fib2 = next_fib;
    }

    printf("\nSum of even Fibonacci numbers: %lu\n", sum);
    return (0);
}
