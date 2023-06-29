#include <stdio.h>

/**
 * leet - function to replace
 *
 * @str: parameter 
 *
 * Return: 0 (Success)
 */

char *leet(char *str)
{
	char *original = "aAeEoOtTlL";
	char *replace = "4433007711";
	
	int i = 0;
	while(*str!='\0')
	{
		int i = 0;
		
		while (original[i]!='0')
		{
			if(*str == original[i])
			{
				*str = replace[i];
				break;
			}
			i++;
		}
		str++;
	}
	return (str);
}
