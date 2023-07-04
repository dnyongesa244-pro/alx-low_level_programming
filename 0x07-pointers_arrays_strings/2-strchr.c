#include "main.h"
#include <stdio.h>

/**
 * _strchr - Function to copy
 *
 * @s: Destination string
 *
 * @c: Source string
 *
 * Return: NULL (Success)
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0 ; i >= '\0' ; i++)
	{
		if (s[i] == c)
		{
			return (s+i);
		}
	}
	return (NULL);
}
