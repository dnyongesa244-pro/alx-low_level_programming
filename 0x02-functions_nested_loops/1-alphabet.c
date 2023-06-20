#include "main.h"
/**
 * print_alphabet - prototype of void
 */
void print_alphabet(void)
{
	 char i;
	for (i = 97 ; i <= 122 ; i++)
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
	print_alphabet();
	return (0);
}
