#include <stdio.h>
/**
 * main - this is a c program to print integer 1-9
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
		printf("%d", i);
	}
	putchar ('\n');
	return (0);
}
