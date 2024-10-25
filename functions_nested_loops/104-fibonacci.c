#include <stdio.h>

int main(void)
{
    unsigned long long fib1 = 1, fib2 = 2, next_fib;
    int i;

    printf("%llu, %llu", fib1, fib2);

    for (i = 3; i <= 98; i++)
    {
        next_fib = fib1 + fib2;
        printf(", %llu", next_fib);
        fib1 = fib2;
        fib2 = next_fib;
    }

    printf("\n");
    return 0;
}

