#include <stdio.h>
#include "main.h"
/**
 * _putchar - single caracter for output
 * @c: Caracter a imprimir
 * made by mau
 * Return: successful 1 and if is error -1
 */
int _putchar(char c);
/**
 * print_most_numbers - numbers  0 to 9 menos 2 and 4
 * made by mau
 * printea cada digito del 0 a 9 excepto 2 y 4
 *
 * Return: void
 */
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if (c != '2' && c != '4')
{
putchar(c);
}
}
_putchar('\n');
}
