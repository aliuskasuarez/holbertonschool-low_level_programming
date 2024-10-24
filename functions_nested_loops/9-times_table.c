#include "main.h"
/**
 * times_table - Prints the 9 times table, starting from 0.
 *
 * This function prints the 9 times multiplication table,
 * from 0 to 9, with each value printed on a new line.
 *
 * Return: void
 */
void times_table(void)
{
int i, j, result;
for (i = 0; i <= 9; i++)
{
for (j = 0; j <= 9; j++)
{
result = i * j;
if (result < 10)
{
_putchar('0' + result);
}
else
{
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
}
}
_putchar('\n');
}
