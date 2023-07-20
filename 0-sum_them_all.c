#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - variadic function to add up parameters
 *
 * @n: number of parameters
 *
 * Return: sum (Success)
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;

	int sum, num;

	unsigned int i;

	if (n == 0)
		return (0);
	va_start(ap, n);

	sum = 0;

	for (i = 0 ; i < n ; i++)
	{
		num = va_arg(ap, int);
		sum += num;
	}
	va_end(ap);
	return (sum);
}
