#include "main.h"
/**
 * print_alphabet - Prints the alphabet in lowercase.
 *
 * Description: This function prints the letters from 'a' to 'z'
 * followed by a newline character.
 */
void print_alphabet(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
_putchar(letter);
};
_putchar('\n');
}
