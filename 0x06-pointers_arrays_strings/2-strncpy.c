#include "main.h"

/**
 * _strncpy - the parameter to copy the string
 *
 * @dest: destination of the string
 *
 * @src: source of the string
 *
 * @n: the umber of times the string is to be coppied
 *
 * Return: dest (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int index = 0, src_len = 0;

	while (src[index++])
	{
		src_len++;
	}
	for (index = 0 ; src[index] && index < n ; index++)
	{
		dest[index] = src[index];
	}

	for (index = src_len ; index < n; index++)
	{
		dest[index]  = '\0';
	}

	return (dest);
}
