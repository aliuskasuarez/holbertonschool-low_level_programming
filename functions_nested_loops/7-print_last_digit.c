#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - devuelve el ultimo digito
 * @number: valor ultimo digito
 *
 * Return: el ultimo input
 */
int print_last_digit(int number)
{
int last_digit;
last_digit = number % 10;
if (last_digit < 0)
{
last_digit = -last_digit;
}
return (last_digit);
}
