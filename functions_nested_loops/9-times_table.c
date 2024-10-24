#include "main.h"
void times_table(void) {
    int i, j;
    char buffer[50];

    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            int product = i * j;
            int len = snprintf(buffer, sizeof(buffer), "%2d", product);
            write(1, buffer, len);
            if (j < 9) {
                write(1, ", ", 2);
            }
        }
        write(1, "$\n", 2);
    }
}
