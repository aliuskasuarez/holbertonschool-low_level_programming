#include <stdio.h>
#include "main.h"
/**
 * main - printea los 50 fibo
 *
 * Description:genera fibonacci 50 primeros
 *
 * Return: siempre exitoso 0
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2;
unsigned long next_fib;
int count;
for (count = 1; count <= 50; count++)
{
if (count == 1)
{
printf("%lu", fib1);
}
else if (count == 2)
{
printf(", %lu", fib2);
}
else
{
next_fib = fib1 + fib2;
printf(", %lu", next_fib);
fib1 = fib2;
fib2 = next_fib;
}
}
printf("\n");
return (0);
}
