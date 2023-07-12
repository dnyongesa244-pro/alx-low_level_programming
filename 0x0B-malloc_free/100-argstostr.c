#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - funtion to assing string
 *
 * @ac: string size
 *
 * @av: srring
 *
 * Return: result(Success)
 */
char *argstostr(int ac, char **av)
{
	int i, position, length;

	char *result;

	int total_length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		length = 0;
		while (av[i][length] != '\0')
		{
			length++;
		}
		total_length += length + 1;
	}
	result = malloc(sizeof(char) * (total_length + 1));
	if (result == NULL)
	{
		return (NULL);
	}
	position = 0;
	for (i = 0; i < ac; i++)
	{
		length = 0;
		while (av[i][length] != '\0')
		{
			result[position] = av[i][length];
			length++;
			position++;
		}
		result[position] = '\n';
		position++;
	}
	result[position] = '\0';
	return (result);
}
