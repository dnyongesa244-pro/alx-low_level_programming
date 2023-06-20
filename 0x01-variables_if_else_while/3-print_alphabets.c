#include <stdio.h>
/**
* main - This is a c program
*
*It print s lowew and uppert alpha
*
* Return: 0 Always (Success)
*/
int main(void)
{
	int i;

	for (i = 97 ; i <= 122 ; i++)
	{
		putchar (i);
	}
	for (i = 65 ; i <= 90 ; i++)
	{
		putchar (i);
	}
	putchar ('\n');
	return (0);
}
