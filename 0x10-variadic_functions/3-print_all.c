#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include  "variadic_functions.h"
/**
 * print_all - variadic function name to print any output
 *
 * @format: parameter size
 */
void print_all(const char * const format, ...)
{
	const char *p = format;

	va_list ap;

	va_start(ap, format);

	while (*p)
	{
		switch (*p)
		{
			case 'i':
					printf("%d", va_arg(ap, int));
					break;
			case 'c':
					printf("%c", va_arg(ap, int));
					break;
			case 'f':
					printf("%f", va_arg(ap, double));
					break;
			case 's':
					{
					char *s = va_arg(ap, char*);

					printf("%s", (s == NULL)  ? ("nil") : s);
					break;
					}
			default:
				break;
		}
		p++;
		if (*p && (*p == 'i' || *p == 'c' || *p == 'f' || *p == 's' || *p == 's'))
			printf(", ");
	}
	va_end(ap);
	putchar('\n');
}
