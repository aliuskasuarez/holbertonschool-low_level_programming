#include "main.h"
/**
 * print_sign - imprime el signo de un numero
 * @n: el numero a chequear
 *
 * Return: 1 e imprime '+' si n es mayor a 0
 *         0 e imprime '0' if no 0
 *         -1 e imprime '-' si n es menor a 0
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
