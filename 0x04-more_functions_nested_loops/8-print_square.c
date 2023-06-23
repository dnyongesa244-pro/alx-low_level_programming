#include <stdio.h>
#include "main.h"
/**
 * print_square - funtion nsme
 *
 * @size: parameter
 */
void print_square(int size)
{
	int i = 1;
	while(i <= size)
	{
		int j = 1;
		while(j <= size)
		{
			_putchar('#');
			j++;
		}
		_putchar('\n');
		i++;
	}
}
