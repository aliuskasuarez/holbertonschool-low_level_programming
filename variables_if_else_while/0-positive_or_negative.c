#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - checks if a random number is positive, negative, or zero
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    srand(time(0));
    int n;
    int last_digit;
    n = rand();
    last_digit = n % 10;
    printf("Random number: %d, Last digit: %d\n", n, last_digit);
    return 0;
}
