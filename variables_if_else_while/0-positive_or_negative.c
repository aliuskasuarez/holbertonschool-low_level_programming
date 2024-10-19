#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number and checks its last digit
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    int n;
    int last_digit;

    srand(time(0));
    n = rand();
    last_digit = n % 10;
    printf("Last digit of %d is %d\n", n, last_digit);

    return 0;
}

