#include <stdio.h>

int main(void)
{
    unsigned long fib1 = 1, fib2 = 2;
    unsigned long next_fib;
    unsigned long long sum = fib1 + fib2;
    int i;

    printf("%lu, %lu", fib1, fib2);

    for (i = 2; ; i++)
    {
        next_fib = fib1 + fib2;
        printf(", %lu", next_fib);
        sum += next_fib;

        fib1 = fib2;
        fib2 = next_fib;

        if (next_fib >= 218922995834555169026ULL)
            break;
    }

    printf(", %llu\n", sum);
    return 0;
}
