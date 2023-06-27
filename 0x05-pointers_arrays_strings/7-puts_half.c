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

	int i, k;

	int x = length / 2;

	k = length % 2;

	if (k != 0)
	{
		x++;
	}

	for (i = 0; i < length ; i++)
	{
		if ((i + 1) > x)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
