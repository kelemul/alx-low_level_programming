#include "function_pointers.h"

/**
 * print_name - print name
 * @name: the name to be printed
 * @f: pointer to func
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
