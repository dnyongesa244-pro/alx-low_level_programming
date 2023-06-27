#include "main.h"
#include <string.h>

/**
 * rev_string - function to reverse string
 *
 * @s: the parameter to pas the string
 */

void rev_string(char *s)
{
	int x = strlen(s);
	int i, j, temp;

	for (i = 0, i = x - 1 ; i < j ; i++, j--)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;
	}
}
