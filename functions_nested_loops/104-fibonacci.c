#include <stdio.h>

int main(void)
{
    unsigned long fib1 = 1, fib2 = 2;
    unsigned long next_fib;
    unsigned long sum = 0;
    int i;

    printf("%lu, %lu", fib1, fib2);
    sum += fib2;

    for (i = 2; i < 98; i++)
    {
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
