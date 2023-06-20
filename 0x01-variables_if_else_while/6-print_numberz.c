#include <stdio.h>
/**
 * main - this is a c code to print integer 1-9
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i <= 9 ; i++)
	{
		putchar(i + '0');
	}
	putchar('\n');
	return (0);
}
