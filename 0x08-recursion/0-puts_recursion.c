#include "main.h"
#include <string.h>

/**
 * _puts_recursion - function to print the string
 *
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	int i, x;

	x = strlen(s);
	for (i = 0 ; i < x ; i++)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
