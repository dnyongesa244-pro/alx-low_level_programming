#include "main.h"
#include <stdio.h>
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
	int x;

	char *array;

	if (str == NULL)
		return (NULL);

	x = strlen(str);
	array = malloc(sizeof(char) * x + (1));
	if (array == NULL)
		return (NULL);
	strcpy(array, str);
	return (array);
}
