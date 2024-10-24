#include <stdio.h>
#include "main.h"
/**
 * main - computa la suma
 *
 * Description:iterats all natural numbers
 * el resultado
 *
 * Return: always 0
 */
int main(void)
{
int limit = 1024;
int sum = 0;
int i;
for (i = 0; i < limit; i++)
{
if (i % 3 == 0 || i % 5 == 0)
{
sum += i;
}
}
printf("%d\n", sum);
return (0);
}
