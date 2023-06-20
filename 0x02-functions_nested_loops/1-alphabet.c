#include "main.h"
/**
 * print_alphabet - prototype of void
 */
print_alphabet(void)
{
	int i;
	for (i = 65 ; i <= 90 ; i++)
	{
		putchar(i);
	}
}
/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
	print_alphabet(void);
	return (0);
}
