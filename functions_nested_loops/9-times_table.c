#include <unistd.h>
#include "main.h"
/**
 * times_table - imprime la tabla del 9
 *
 * esta funcion imprime la tabla del 9 el codigo es echo por mi mauricio
 *
 * Return: void
 */
int _putchar(char c);
void times_table(void)
{
int i, result;
for (i = 0; i <= 9; i++)
{
result = i * 9;
if (result < 10)
{
_putchar(result + '0');
}
else
{
_putchar((result / 10) + '0');
_putchar((result % 10) + '0');
}
if (i < 9)
{
_putchar('\n');
}
}
}
