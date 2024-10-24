#include "main.h"
#include <stdio.h>

/**
 * times_table - imprime la tabla del 9 empezando de 0
 *
 * imprime la tabla del 9
 */
void times_table(void)
{
int i, product;
for (i = 0; i <= 9; i++)
{
product = 9 * i;
if (i == 9)
{
printf("%d", product);
}
else
{
printf("%d, ", product);
}
}
printf("\n");
}
