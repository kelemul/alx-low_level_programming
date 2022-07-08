#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - print strings
 * @sep: string sparater
 * @n: a string to be string
 * @...: unknown number of arguments
 */
void print_strings(const char *sep, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int index;

	va_start(strings, n);

	for (index = 0; index < n; index++)
	{
		str = va_arg(strings, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && sep != NULL)
			printf("%s", sep);
	}

	printf("\n");

	va_end(strings);
}
