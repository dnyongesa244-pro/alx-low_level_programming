#include <stdio.h>
#include "mai.h"
/**
 *  print_square - function name
 *
 *  @num: parameter name
 */
void print_square(int num)
{
	int i;
	for (i = 0; i < num ; i++)
	{
		int j;
		for (j = 0 ; j <= num ; j++)
		{
			int k = num-i;
			if(k <= j)
			{
				putchar('#');
			}
			else
			{
				putchar(' ');
			}
		}
		putchar('\n');
	}
}

