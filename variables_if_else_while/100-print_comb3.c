#include <stdio.h>
void _putchar(char c);
void _putchar(char c)
{
putchar(c);
}
void print_comb3(void)
{
int i, j;
for (i = 0; i < 9; i++)
{
for (j = i + 1; j < 10; j++)
{
if (i == 0 && j == 1)
{
_putchar('0' + i);
_putchar('0' + j);
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + i);
_putchar('0' + j);
}
}
}
_putchar('\n');
}
int main(void)
{
print_comb3();
return (0);
}
