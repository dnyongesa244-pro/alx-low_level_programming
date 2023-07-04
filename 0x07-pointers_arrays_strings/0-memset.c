#include "main.h"

/**
 * _memset - function to coppy the valuse
 *
 * @s: the destination
 *
 * @b: the source
 *
 * @n: the number of times
 *
 * Return: s (Success)
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n ; i++)
	{
		s[i] =  b;
	}
	return (s);
}
