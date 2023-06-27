#include "main.h"

/**
 * _puts - function to print the string
 *
 *  @str: parameter pased to function as string
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(str);
		str++;
	}
	_putchar('\n');
}
