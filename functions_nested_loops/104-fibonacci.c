#include <stdio.h>
int main(void)
{
    unsigned long long fib1 = 1, fib2 = 2;
    unsigned long long next_fib;
    unsigned long long sum = fib1 + fib2;
    int i;

    printf("%llu, %llu", fib1, fib2);

    for (i = 2; i < 98; i++)
    {
        next_fib = fib1 + fib2;
        printf(", %llu", next_fib);

        sum += next_fib;

        fib1 = fib2;
        fib2 = next_fib;
    }

    printf("\nsuma de los fibonacci numbers: %llu\n", sum);
    return (0);
}
