#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - generates a random number and checks its last digit
 *
 * Return: Always 0 (Success)
 */
int main(void) {
    srand(time(0));
    int n = rand();
    int last_digit = n % 10;
    return 0;
}
