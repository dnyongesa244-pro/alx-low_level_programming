#include "main.h"
/**
 * print_alphabet - prototype of void
 */
void print_alphabet(void)
{
	 char i;
	for (i = 'a' ; i <= 'z' ; i++)
	{
		_putchar(i);
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
