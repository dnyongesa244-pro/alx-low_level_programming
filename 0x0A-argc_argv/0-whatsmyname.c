#include <string.h>
#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

int main(__attribute__((unused)) int argc,char *argv[])
{
        int i, x;

        char s[100];

        x = strlen(argv[0]);

        strcpy(s,argv[0]);
        for(i = 0; i < x ; i ++)
        {
                _putchar(s[i]);
        }
        _putchar('\n');
        return 0;
}
