#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - variadic function to print parameters recied
 *
 * @separator: whai to be printed after every number
 *
 * @n: number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	int num;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);
		if (separator != NULL)
		{
			if (i != (n - 1))
			{
				printf("%s", separator);
			}
		}
	}
	putchar('\n');
}

