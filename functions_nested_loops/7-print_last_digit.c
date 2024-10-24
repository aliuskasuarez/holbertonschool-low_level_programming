#include <stdio.h>
#include <limits.h>

int print_last_digit(int n) {
    int last_digit = n % 10;
    if (last_digit < 0) {
        last_digit = -last_digit;
    }
    
    printf("%d\n", last_digit);
    return last_digit;
}

