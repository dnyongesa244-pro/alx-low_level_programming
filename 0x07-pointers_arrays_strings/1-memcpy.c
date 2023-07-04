#include "main.h"

/**
 * _memcpy - the function t coppy the string
 *
 * @dest: destination piinter
 *
 * @src: oriin pointer
 *
 * @n: bumer of times
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0 ; i < n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
