#include <stdio.h>
/**
 * print_line - function name
 *
 * @n: parameter name
 */
void print_line(int n)
{
	while ( n > 0)
	{
		putchar('_');
		n--;
	}
	putchar('\n');
}
