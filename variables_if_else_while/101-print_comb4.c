#include <stdio.h>
void _putchar(char c);
void _putchar(char c)
{
putchar(c);
}
void print_comb3(void)
{
int i, j, k;
for (i = 0; i < 8; i++)
{
for (j = i + 1; j < 9; j++)
{
for (k = j + 1; k < 10; k++)
{
if (i == 0 && j == 1 && k == 2)
{
_putchar('0' + i);
_putchar('0' + j);
_putchar('0' + k);
}
else
{
_putchar(',');
_putchar(' ');
_putchar('0' + i);
_putchar('0' + j);
_putchar('0' + k);
}
}
}
_putchar('\n');
}
int main(void)
{
print_comb3();
return 0;
}
