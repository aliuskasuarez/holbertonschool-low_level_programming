#include "main.h"
/**
 * _putchar - Outputs a character
 * @c: The character to output
 *
 * Return: On success 1, -1 on error
 */
int _putchar(char c);
/**
 * times_table - Prints the 9 times table
 *
 * Return: void
 */
void tim
void times_table(void)
{
int i, j, product;
for (i = 0; i < 10; i++)
{
for (j = 0; j < 10; j++)
{
product = i * j;
if (j == 0)
{
_putchar(product + '0');
}
else
{
_putchar(',');
if (product < 10)
{
_putchar(' '); 
_putchar(' ');
_putchar(product + '0');
}
else
{
_putchar(' ');
_putchar(product / 10 + '0');
_putchar(product % 10 + '0');
}
}
}
_putchar('\n');
}
}
