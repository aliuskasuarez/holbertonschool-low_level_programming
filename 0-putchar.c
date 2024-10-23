#include <unistd.h>

int main(void) {
    const char *str = "_putchar\n";
    write(1, str, 9);
    return 0;
}
