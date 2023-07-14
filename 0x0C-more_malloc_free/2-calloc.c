#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _calloc - functon to allocate memmmory;
 *
 * @nmemb: number to assingn
 *
 * @size: size of the array
 *
 * Return: result (success)
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;

	char *result;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	result = malloc(sizeof(int) * (size + 1));

	for (i = 0 ;  i < size ; i++)
	{
		result[i] = nmemb;
	}
	return (result);
}
