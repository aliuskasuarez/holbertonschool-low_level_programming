#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number and checks if it is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n; // Declare the variable at the start

    srand(time(0)); // Seed the random number generator
    n = rand() % 201 - 100; // Generate a random number between -100 and 100

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
