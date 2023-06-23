#include "main.h"
/**
 * more_numbers - function name
 */
void more_numbers(void)
{
	int count=1;
	
	while (count <= 10)
	{
		int j=0;
		
		while (j <= 14)
		{
			if (j < 10)
			{
				_putchar(j+'0');
			}
			else
			{
				_putchar((j / 10)+'0');
				_putchar((j % 10)+'0');
			}
			j++;
		}
		_putchar('\n');
		count++;
	}
	_putchar('\n');
}
