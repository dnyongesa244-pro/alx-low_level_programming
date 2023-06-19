#include <stdio.h>
/*
 * his i a c rogram
 *
 * it prins integers 1 to 10 separeted by comma
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
