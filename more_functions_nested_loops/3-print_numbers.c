#include <stdio.h>

/**
 * _putchar - Outputs a single character to stdout
 * @c: The character to print
 *
 * Return: On success 1, on error -1
 */
int _putchar(char c) {
    return putchar(c);
}

/**
 * print_numbers - Prints the numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void) {
    char c;

    for (c = '0'; c <= '9'; c++) {
        _putchar(c);
    }
    _putchar('\n');
}
