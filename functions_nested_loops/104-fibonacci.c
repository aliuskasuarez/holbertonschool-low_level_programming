#include <stdio.h>

#define MAX_DIGITS 100

void add_fibonacci(char result[][MAX_DIGITS], int n) {
    int carry, i, j;

    result[0][0] = '1';
    result[0][1] = '\0';
    result[1][0] = '2';
    result[1][1] = '\0';

    for (j = 2; j < n; j++) {
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

void print_fibonacci(char result[][MAX_DIGITS], int n) {
    int i;

    for (i = 0; i < n; i++) {
        printf("%s", result[i]);
        if (i < n - 1) {
            printf(", ");
        }
    }
    printf("\n");
}

int main(void) {
    char fib[98][MAX_DIGITS];
    add_fibonacci(fib, 98);
    print_fibonacci(fib, 98);
    return 0;
}
