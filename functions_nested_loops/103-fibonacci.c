#include <stdio.h>

/**
 * main - fibonacci sin exeder los 4 millones
 *
 * Description: fibonacci starting 1 to 4000000
 *
 * Return: siempre retorna 0 el exitoso
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2;
unsigned long next_fib;
unsigned long sum = 0;
while (fib1 <= 4000000)
{
if (fib1 % 2 == 0)
{
sum += fib1;
}
next_fib = fib1 + fib2;
fib1 = fib2;
fib2 = next_fib;
}
printf("%lu\n", sum);
return (0);
}
