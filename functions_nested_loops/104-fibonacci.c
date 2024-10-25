#include <stdio.h>

int main(void)
{
    unsigned long fib1 = 1, fib2 = 2;
    unsigned long next_fib;
    unsigned long sum = fib1 + fib2;
    int i;

    printf("%lu", fib1);
    printf(", %lu", fib2);

    for (i = 2; i < 98; i++)
    {
        next_fib = fib1 + fib2;
        printf(", %lu", next_fib);

        sum += next_fib;

        fib1 = fib2;
        fib2 = next_fib;
    }

    printf("\nsuma de los fibonacci numbers: %lu\n", sum);
    return 0;
}
