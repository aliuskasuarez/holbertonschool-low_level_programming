#include <unistd.h>
#include "main.h"
int _putchar(char c) {
    return write(1, &c, 1);
}

void print_times_table(int n) {
    int i, result;

    for (i = 0; i <= n; i++) {
        result = i * 9;
        if (result < 10) {
            _putchar(result + '0');
        } else {
            _putchar((result / 10) + '0');
            _putchar((result % 10) + '0');
        }
        if (i < n) {
            _putchar('\n');
        }
    }
}
