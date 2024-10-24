#include "main.h"
#include <stdio.h>

void custom_print(int num) {
    printf("%d", num);
}

void print_times_table(int n) {
    int i, j, product;

    for (i = 0; i <= n; i++) {
        for (j = 0; j <= n; j++) {
            product = i * j;
            char buffer[4];
            sprintf(buffer, "%d", product);
            int k;
            for (k = 0; buffer[k] != '\0'; k++) {
                custom_print(buffer[k] - '0');
            }

            if (j < n) {
                custom_print(' ');
            }
        }
        custom_print('\n');
    }
}
