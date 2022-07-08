#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints all nuumbers
 * @sep: number sep char
 * @n: number of numbers passed as an argument
 * @...: unknown number of arguments
 */
void print_numbers(const char *sep, const unsigned int n, ...)
{
	va_list ns;
	unsigned int i;

	va_start(ns, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ns, int));

		if (i != (n - 1) && sep != NULL)
			printf("%s", sep);
	}

	printf("\n");

	va_end(ns);
}
