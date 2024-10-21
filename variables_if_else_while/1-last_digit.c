#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() 
{
    srand(time(NULL));
    int n = rand();
    printf("The random number is: %d\n", n);
    int last_digit = n % 10;
    printf("The last digit of %d is: %d\n", n, last_digit);

    return 0;
}
