#include <unistd.h>
#include <stdio.h>
/*
 * main i will be using putchar to print all posible combinations
 *
 * return 0 success 
 */ 
int main()
{
int i, j; 
for (i = 0; i<= 9; i++) 
{
for (j = i + 1; j<= 9; j++) 
{
putchar(j + '0');
putchar(j + '0');
if (i < 8 || j < 9)
{
putchar(',');
putchar(' '); 
}
}
}
return (0);
}
