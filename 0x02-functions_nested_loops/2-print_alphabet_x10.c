#include"main.h"
/**
 * print_alphabet_x10 is a function name
 */
void print_alphabet_x10(void)
{
	
	int cout = 1;

	while (cout <= 10)
	{
		int i;

		for (i = 97 ; i <= 122 ; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		cout++;
   }
}
