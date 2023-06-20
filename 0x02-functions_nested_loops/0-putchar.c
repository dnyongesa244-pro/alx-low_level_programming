#include "main.h"
/**
 * msg - Prints a string character by character.
 *
 * @lett: The string to print.
 */
void msg(const char *lett)
{
	int i = 0;

	while (lett[i] != ('\0'))
	{
		_putchar(lett[i]);
		i++;
	}
	_putchar('\n');
}
/**
 * main - Entry point of the program.
 *
 * Return: Always 0 (Success).
 */
int main(void)
{
	const char *word = "_putchar";

	msg(word);
	return (0);
}
