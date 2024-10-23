#include <unistd.h>
void _putchar(char c)
{
write(1, &c, 1);
}
void print_alphabet(void) {
char letter;
for (letter = 'a'; letter <= 'z'; letter++) {
_putchar(letter);
}
_putchar('\n');
}
int main(void) {
print_alphabet();
return 0;
}
