#include "main.h"
#include <stdlib.h>

/**
 * array_range - function t assing array range
 *
 * @min: starting ndex
 *
 * @max: ending index
 *
 * Return: numbers (SUccess)
 */
int *array_range(int min, int max)
{
	int *numbers;

	int i, x;

	if (min > max)
		return (NULL);
	x = max - min;
	numbers = malloc(sizeof(int) * x + 1);
	if (numbers == NULL)
		return (NULL);
	for (i = min ; i <= max ; i++)
	{
		numbers[i] = min + i;
	}
	return (numbers);
}
