#include "main.h"
/**
 * times_table - imprime la tabla del 9
 *
 * tala del  9
 * from 0 to 9
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
_putchar(' ');
_putchar(' ');
}
else
{
_putchar('0' + (result / 10));
_putchar('0' + (result % 10));
_putchar(' ');
}
if (j < 9)
{
_putchar(',');
_putchar(' ');
_putchar(' ');
}
}
_putchar('\n');
}
}
