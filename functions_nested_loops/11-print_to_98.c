#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - imprime numeros naturales hasta el 98
 * @n: The starting number
 *
 * numeros impresos en orden con , hasta el 98
 */
void print_to_98(int n)
{
int i;
if (n < 98)
{
for (i = n; i < 98; i++)
{
printf("%d, ", i);
}
printf("98\n");
}
else if (n > 98)
{
for (i = n; i > 98; i--)
{
printf("%d, ", i);
}
printf("98\n");
}
else
{
printf("98\n");
}
}
