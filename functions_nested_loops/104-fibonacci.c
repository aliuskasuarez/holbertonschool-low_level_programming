#include <stdio.h>

#define MAX_DIGITS 100
#define FIB_COUNT 98

void add_fibonacci(char result[][MAX_DIGITS]) {
    result[0][0] = '1';
    result[0][1] = '\0';
    result[1][0] = '2';
    result[1][1] = '\0';

    int j;
    int carry;
    int i;

    for (j = 2; j < FIB_COUNT; j++) {
        carry = 0;
        for (i = 0; result[j - 1][i] != '\0' || result[j - 2][i] != '\0' || carry; i++) {
            int sum = carry;

            if (result[j - 1][i] != '\0') {
                sum += result[j - 1][i] - '0';
            }
            if (result[j - 2][i] != '\0') {
                sum += result[j - 2][i] - '0';
            }

            result[j][i] = (sum % 10) + '0';
            carry = sum / 10;
        }
        result[j][i] = '\0';
    }
}

void print_fibonacci(char result[][MAX_DIGITS]) {
    int i;

    for (i = 0; i < FIB_COUNT; i++) {
        printf("%s", result[i]);
        if (i < FIB_COUNT - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main(void) {
    char fib[FIB_COUNT][MAX_DIGITS];
    add_fibonacci(fib);
    print_fibonacci(fib);
    return 0;
}
