#include "main.h"
/**
 * print_last_digit - imprime el ultimo digito de un numero
 * @c: el integrador del ultimo digito a imprimirse
 *
 * Return: devuelve el ultimo digito de un numero
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
