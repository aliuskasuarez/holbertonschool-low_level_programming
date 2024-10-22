#include <unistd.h>
/*
 * main print all possible combinations of single digit numbers separated by ,
 *
 * return always is 0 succes 
 */
int putchar(int c);
int main(void)
{
	int i, j;

	for ( i = 0; i <= 8; i++)
	{

		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
            putchar(j + '0');

	    if (i != 8 || j != 9)
		    {
                putchar(',');
                putchar(' ');
            }
        }
    }
	 putchar('\n');
    return (0);
}
