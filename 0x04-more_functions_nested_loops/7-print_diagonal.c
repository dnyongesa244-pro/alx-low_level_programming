#include <stdio.h>
/**
 * print_diagonal - name
 *
 * @n: parameter
 */
void print_diagonal(int n)
{
	int i=1;
	if(n<=0)
	{
		putchar('\n');
	}
	else
	{
		while(i<=n)
		{
			int j=1;
			while(j <i)
			{
				putchar(' ');
				j++;
			}
		putchar('\\');
		putchar('\n');
		i++;
		}
	}
}
