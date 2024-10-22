#include <unistd.h>
/**
 * putchar - writes a character to the standard output
 * @c: the character to print (ASCII value)
 *
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int putchar(int c);
/**
 * main - prints hexadecimal numbers of base 16
 *
 * Return: Always 0 (Success)
 */
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
