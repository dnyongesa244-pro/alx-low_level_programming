#include "main.h"
#include <string.h>

/**
 * print_rev - funtion to reverse
 *
 * @s: parsmeter to be reversed
 */
void print_rev(char *s)
{
	int x = strlen(s);

	int i;

	for (i = x ; i >= 1 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
