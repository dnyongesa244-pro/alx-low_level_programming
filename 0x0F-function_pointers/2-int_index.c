#include "function_pointers.h"

int int_index(int *array, int size, int (*cmp)(int))
{
	int i,j;
	if(size<0)
		return -1;
	for(i = 0; i < size ; i ++)
	{
		int (**P)(int) = &cmp;
		for(j = 0 ; j < i ; i++)
		{
			if(array[i] == *p[j])
				return i;
		}
	}
	return -1;
}
