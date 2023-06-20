#include "main.h"
/**
 * main - enry point to the program
 *
 * Return: 0 Always ((Success)
 *
 */
void msg(const char* lett)
{
	int i=0;
	while(lett[i]!=('\0'))
	{
		_putchar(lett[i]);
		i++;
	}
}
int main(void)
{
	const char* word = "_putchar";
	msg(word);
}
