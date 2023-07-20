#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - function to call a function to print
 *
 * @array: array@size: array size
 *
 * @action: function pointer to print elements
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	int i, x;
	x =  (int) size;
	for (i = 0 ; i < x ; i++)
		action(array[i]);
}
