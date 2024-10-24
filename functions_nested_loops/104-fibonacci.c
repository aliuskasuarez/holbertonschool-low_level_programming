#include <stdio.h>

/**
 * main - imprime fiboooo 
 *
 * Description: este programa genera hasta 400000 sin exeder eso el fiboo
 *
 * Return: siempre retorna 0 el exitoso
 */
int main(void)
{
unsigned long fib1 = 1, fib2 = 2;
unsigned long next_fib;
unsigned long sum = 0;
printf("%lu, %lu", fib1, fib2);
sum += fib2;
while (fib2 <= 4000000)
{
next_fib = fib1 + fib2;
if (next_fib > 4000000)
{
break;
}
printf(", %lu", next_fib);
if (next_fib % 2 == 0) {
sum += next_fib;
}
fib1 = fib2;
fib2 = next_fib;
}
printf("\nSum of even Fibonacci numbers: %lu\n", sum);
return (0);
}
