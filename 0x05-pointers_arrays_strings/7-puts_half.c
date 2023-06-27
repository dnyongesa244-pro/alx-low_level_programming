#include "main.h"
#include <string.h>

/**
 * puts_half - The function to print
 *
 * @str: the parmeter to pass
 */
void puts_half(char *str)
{
	int length = strlen(str);

	int i;
	int x = length / 2;

	for (i = 0; i < length ; i++)
	{
		if ((i+1) > x)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
