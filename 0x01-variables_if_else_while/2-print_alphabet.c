#include <stdio.h>
/*
 * this is a c file
 *
 *it prints alphabet a to z
 */
int main(void)
{
	int i;
	for ( i = 97 ; i <= 122 ; i++ )
	{
		putchar( i );
	}
	putchar('\n');
	return (0);
}
