#include "function_pointers.h"
/**
 * int_index - function to find the index of array element
 *
 * @array: array
 *
 * @size: array size
 *
 * @cmp: function pointer
 *
 * Return: i (success)
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size < 0)
		return (-1);
	for (i = 0; i < size ; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
