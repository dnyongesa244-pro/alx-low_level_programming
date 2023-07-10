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
	int x = strlen(str);

	char *array;

	if (str == NULL)
	{
		printf("failed to allocate memory");
		return (NULL);
	}
	array = malloc(sizeof(char) * (x + 1));
	if (array == NULL)
		return (NULL);
	strcpy(array, str);
	return (array);
}
