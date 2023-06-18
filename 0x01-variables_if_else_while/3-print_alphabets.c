#include <stdio.h>
/*
 * This is a c program 
 *
 * it print s lowew and uppert alpha
 *
 */
int main()
{
	int i;
	for(i = 97 ; i <=122 ; i++)
	{
		putchar(i);
	}
	for(i = 65 ; i <=90 ; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return 0;
}
