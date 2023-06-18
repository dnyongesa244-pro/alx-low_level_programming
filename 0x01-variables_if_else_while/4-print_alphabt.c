#include <stdio.h>
/*
 *This is a c code to print lower alpha a-z skipping e and q
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		if (i == 101)
		{
			continue;
		}
		if (i == 113)
		{
			continue;
		}
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
