#include "main.h"
#include <string.h>

/**
 *  _print_rev_recursion - function to reverse a string
 *
 * @s: the string to be reversed
 */
void _print_rev_recursion(char *s)
{
	int i, x;

	x = strlen(s);
	for (i = x - 1 ; i >= 0 ; i--)
	{
		_putchar(s[i]);
	}
}
