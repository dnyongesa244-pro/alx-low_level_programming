#include "main.h"
/**
 * print_sign - function nsme
 *
 * @n: parameter to pass
 *
 * Return: 0 (zero), 1 (positive), -1 (Negative)
 */
int print_sign(int n)
{
	if (n = 0)
	{
		_putchar(0);
		return 0;
	}
	else if ( n < 0)
	{
		_putchar('-');
		_putchar('1');
		return (-1);
	}
	else
	{
		_putchar('+');
		_putchar('1');
		return (1);
	}
}
