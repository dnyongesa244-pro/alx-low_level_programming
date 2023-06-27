#include "main.h"

/**
 * _strlen - Function to compute the lenht of the string
 *
 * @s: parameter to pass the string
 *
 * Return: 0 Always (Success)
 */

int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	return (length);
}
