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

	char *array;

	if (str == NULL)
		return (NULL);
	array = malloc(sizeof(char) * x);
	if (array == NULL)
		return (NULL);
	strcpy(array, str);
	return (array);
}
