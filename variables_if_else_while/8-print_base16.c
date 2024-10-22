#include <unistd.h>
/**
 * main - prints hexagonal numberos of base 16
 *
 * Return: Always 0 (Success)
 */
int putchar(int c);
int main(void) {
char hex[] = "0123456789abcdef";
for (int i = 0; i < 16; i++) {
putchar(hex[i]);
}
putchar('\n');
return 0;
}
