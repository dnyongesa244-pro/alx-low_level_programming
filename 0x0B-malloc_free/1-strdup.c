#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _strdup - funtion to allocate string
 *
 * @str: string
 *
 * Return: array (Success)
 */
char *_strdup(char *str)
{
	int x = strlen(str);

	int i;

	char *array;

	if (str == NULL)
		return (NULL);
	array = malloc(sizeof(char) * x);
	if (array == NULL)
		return (NULL);
	for (i = 0 ; i < x ; i++)
	{
		array[i] = str[i];
	}
	return (array);
}
