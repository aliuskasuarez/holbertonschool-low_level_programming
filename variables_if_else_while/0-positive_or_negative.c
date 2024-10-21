#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - la descripcion de main
 *
 * Return: Siempre 0 (Exitoso)
 */
int main(void)
{
    int n;
    srand(time(0));
    n = rand() % 201 - 100;
    printf("The number is %d\n", n);
    if (n > 0)
    {
        printf("%d is positive\n", n);
    }
    else if (n < 0)
    {
        printf("%d is negative\n", n);
    }
    else
    {
        printf("%d is zero\n", n);
    }

    return (0);
}
