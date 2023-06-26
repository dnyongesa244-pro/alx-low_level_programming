#include "main.h"

/**
 * swap_int - the function to swap numbers
 *
 * @a: the first parameter to swap
 *
 * @b: the second parameter to swap
 *
 */
void swap_int(int *a, int *b)
{
	int temp = *a;

	*a = *b;
	*b = temp;
}
