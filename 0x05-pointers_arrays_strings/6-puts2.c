#include "main.h"
#include <string.h>

/**
 * puts - The function namee
 *
 * @str: paramertr to pass
 */
void puts2(char *str)
{
	int x = strlen(str);

	int i;

	for (i = 0 ; i < x ; i++)
	{
		_putchar(str[i]);
		_putchar('\n');
	}
}
