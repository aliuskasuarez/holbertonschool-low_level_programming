#include <stdio.h>
/**
* main i will be using putchar to print all posible combinations
*
* Return 0 success
*/
int main(void)
{
int i;
for (i = 0; i <= 9; i++)
{
putchar('0');
putchar(i + '0');
if (i < 9)
{
putchar(',');
putchar(' ');
}
}
return (0);
}
