#include <stdio.h>
/**
 * main - program
 *
 * Return: 0 Always (Success)
 *
 */
int main(void)
{
	int i, j;

	for (i = 0; i < 9 ; i++)
	{
		for (j = i ; j < 10 ; j++)
		{
			if (i == j)
			{
				continue;
			}
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8 || j < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');
	return (0);
}
