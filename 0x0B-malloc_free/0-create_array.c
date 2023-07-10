#include "main.h"
#include <stdlib.h>
/**
 * create_array - function to allocate charatter
 *
 * @size: size of the array
 *
 * @c: character
 *
 * Return: chars (Success)
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;

	char *chars;

	if (size == 0)
		return (NULL);
	chars = (char *) malloc(sizeof(char) * size);

	if (chars == NULL)
		return (NULL);
	for (i = 0 ; i < size ; i++)
	{
		chars[i] = c;
	}
	return (chars);
}
