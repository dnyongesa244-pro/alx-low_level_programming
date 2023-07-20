#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * print_strings - variadic function to print strings
 *
 * @separator: characters to be printed after easch string
 *
 * @n: number of strings
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	unsigned int i;

	char *ch;

	va_start(ap, n);

	for (i = 0 ; i < n ; i++)
	{
		ch = (char *) va_arg(ap, char *);
		printf("%s", ch);
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
