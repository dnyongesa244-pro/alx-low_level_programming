#include <stdio.h>
#include "main.h"
#include <ctype.h>
#include <string.h>

/**
 * cap_string - the string to convert
 *
 * @lett: Parameter
 *
 * Return: lett (Suceess)
 */

char *cap_string(char *lett)
{
	int i = 0;
	
	while(lett[i] != '\n')
	{
		if(lett[i]=='.')
		{
			putchar('\n');
		}
		if(isalpha(lett[i]))
		{
			lett[i]=toupper(lett[i]);
			break;
		}
		i++;
	}
	return (lett);
}

