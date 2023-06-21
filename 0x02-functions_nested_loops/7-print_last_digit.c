#include <stdio.h>

/**
 * print_last_digit - function name
 *
 * @num: parameter
 */
int print_last_digit(int num)
{
	int x = num % 10;

	_putchar(x + '0');
	return (x);
}
