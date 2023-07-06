#include "main.h"
#include <string.h>

/**
 *  _print_rev_recursion - function to reverse a string
 *
 * @s: the string to be reversed
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (s[i] == '\0')
		return;
	_print_rev_recursion(s + 1);
	_putchar(*s);
}
