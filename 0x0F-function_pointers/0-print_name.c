#include "function_pointers.h"
/**
 * print_name - function to pass the name
 *
 * @name: name
 *
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
