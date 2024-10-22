#include <unistd.h>
/**
 * main - prints hexagonal numbers of base 16
 *
 * putchar - writes a character to the standard output
 * Return: Always 0 (Success)
 */
int putchar(int c);
int main(void)
{
char hex[] = "0123456789abcdef";
int i;
for (i = 0; i < 16; i++)
{
putchar(hex[i]);
}
putchar('\n');
return (0);
}
