#include <stdio.h>
/**
 * main - fibonacci sin exeder los 4 millones
 *
 * Description: fibonacci starting 1 to 4000000
 *
 * Return: siempre retorna 0 el exitoso
 */
int main(void)
{
unsigned long long a = 1, b = 2;
int count;
for (count = 1; count <= 98; count++)
{
if (count == 1)
{
printf("%llu", a);
}
else if (count == 2) {
printf(", %llu", b);
}
else
{
unsigned long long next = a + b;
printf(", %llu", next);
a = b;
b = next;
}
}
printf("\n");
return (0);
}
