#include <stdio.h>
/*
 * this is a c code 
 *
 * it combines three digits without repatition
 */
int main()
{
	int i,j,k;
	
	for (i=0;i<=9;i++)
	{
		for (j=i;j<=9;j++)
		{
			for (k=j;k<=9;k++)
			{
				if((i==j)||(j==k)||(i==k))
				{
					continue;
				}
				
				putchar(i+'0');
				putchar(j+'0');
				putchar(k+'0');
				if (i!=9||j!=9||k!=9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
