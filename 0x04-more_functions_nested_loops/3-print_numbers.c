#include "main.h"
/*
 * print_numbers - the name of the function
 */
void print_numbers(void)
{
	int i = 0;

	while (i < 10)
	{
		_putchar(i+'0');
		i++;
	}
	putchar('\n');
}
