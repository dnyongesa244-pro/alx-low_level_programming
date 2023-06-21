#include "main.h"

/**
 * print_last_digit - function name
 *
 * @num: parameter
 *
 * Return: int (Succes)
 */
int print_last_digit(int num)
{
	int x;

	if (num < 0)
	{
		num *= -1;
		x = num % 10;
	}
	else
	{
		x = num % 10;
	}
	_putchar(x + '0');
	return (x);
}
