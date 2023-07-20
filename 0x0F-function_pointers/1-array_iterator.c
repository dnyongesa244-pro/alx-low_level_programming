#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - function to call a function to print
 *
 * @array: array@size: array size
 *
 * @action: function pointer to print elements
 *
 *@size: size of the array
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	for (i = 0 ; i < size ; i++)
		action(array[i]);
}
