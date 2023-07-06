#include "main.h"
#include <string.h>

/**
 * _puts_recursion - function to print the string
 *
 * @s: the string to be printed
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if(s[i] == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(s[i]);
	_puts_recursion(s+1);
}
