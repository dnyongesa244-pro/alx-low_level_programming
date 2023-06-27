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

	for (i = x - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
