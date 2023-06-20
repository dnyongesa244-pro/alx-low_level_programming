#include <stdio.h>
/**
 * main - This is a c code to print lower alpha a-z skipping e and q
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
