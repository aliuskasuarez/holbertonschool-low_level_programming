#include <stdio.h>

int main(void)
{
    unsigned long fib1;
    unsigned long fib2;
    unsigned long next_fib;
    unsigned long sum;
    int i;

    fib1 = 1;
    fib2 = 2;
    sum = fib1 + fib2;

    printf("%lu, %lu", fib1, fib2);

    for (i = 2; i < 98; i++)
    {
        next_fib = fib1 + fib2;
        printf(", %lu", next_fib);
        sum += next_fib;

        fib1 = fib2;
        fib2 = next_fib;
    }

    printf(", %lu\n", sum);
    return 0;
}

