#include <stdio.h>
/*
 * this is a c code
 *
 * it prints hexadecimal digits
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 15 ; i++)
	{
		if (i < 10)
		{
			putchar(i + '0');
		}
		else
		{
			putchar('a' + (i - 10));
		}
	}
	putchar('\n');
	return (0);
}
