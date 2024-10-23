#include <stdio.h>
/**
 * main - Prints "_putchar" seguido de una nueva linea
 *
 * Return: 0 on success.
 */
int main()
{
const char *str = "_putchar";
while (*str) 
{
putchar(*str);
str++;
}
putchar('\n');
return (0);
}
