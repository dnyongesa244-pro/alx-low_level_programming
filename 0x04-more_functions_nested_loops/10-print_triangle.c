#include <stdio.h>
/**
 *  print_square - function name
 *
 *  @num: parameter name
 */
void print_square(int num)
{
	for (int i = 0; i < num ; i++)
	{
		for (int j = 0 ; j <= num ; j++)
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

