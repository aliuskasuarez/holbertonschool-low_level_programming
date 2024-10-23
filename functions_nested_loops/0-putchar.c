#include <stdio.h>
#include <unistd.h>
/**
 * main - Prints "_putchar" seguido de una nueva linea
 *
 * Return: 0 on success.
 */
int main(void)
{
    const char *str = "_putchar\n";
    write(1, str, 9);
    return 0;
}
