#include <stdio.h>
#include <string.h>

#define MAX_DIGITS 1000

void add_fibonacci(char *result, const char *num1, const char *num2)
{
    int carry = 0, sum, i, j, k;
    int len1 = strlen(num1);
    int len2 = strlen(num2);
    int max_len = len1 > len2 ? len1 : len2;
    int start, end;

    for (i = 0, j = len1 - 1, k = len2 - 1; i < max_len || carry; i++)
    {
        sum = carry;
        if (j >= 0) sum += num1[j--] - '0';
        if (k >= 0) sum += num2[k--] - '0';
        carry = sum / 10;
        result[i] = (sum % 10) + '0';
    }
    result[i] = '\0';

    for (start = 0, end = i - 1; start < end; start++, end--)
    {
        char temp = result[start];
        result[start] = result[end];
        result[end] = temp;
    }
}

int main(void)
{
    char fib1[MAX_DIGITS] = "1";
    char fib2[MAX_DIGITS] = "2";
    char next_fib[MAX_DIGITS];
    char sum[MAX_DIGITS] = "3";
    int i;

    printf("%s, %s", fib1, fib2);

    for (i = 2; i < 98; i++)
    {
        add_fibonacci(next_fib, fib1, fib2);
        printf(", %s", next_fib);
        add_fibonacci(sum, sum, next_fib);
        strcpy(fib1, fib2);
        strcpy(fib2, next_fib);
    }

    printf(", %s\n", sum);
    return 0;
}
