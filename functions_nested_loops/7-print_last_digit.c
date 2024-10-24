#include "main.h"
/**
 * _putchar - imprime
 * int print_last_digit - imprime ultimo digito
 *
 * Return: el valor absoluto de n
 */
int _putchar(char c);
int print_last_digit(int number)
{
int last_digit = number % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
_putchar(last_digit + '0');
return (last_digit);
}
