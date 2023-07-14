#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * _realloc - function to reallocate memory address
 *
 * @ptr: memory addres
 *
 * @old_size: prevoius memory address
 *
 * @new_size: new memory address
 *
 * Return: ptr (Success)
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int copy_size;

	void *new_ptr;

	if (new_size == old_size)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size);
		return (ptr);
	}
	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	copy_size = (old_size > new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copy_size);

	free(ptr);
	return (ptr);
}

