#include <stdio.h>
/**
 * main - Printea digitos simples de  numeros from 0 to 9
 *
 *
 * Return: 0 on success.
 */
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
