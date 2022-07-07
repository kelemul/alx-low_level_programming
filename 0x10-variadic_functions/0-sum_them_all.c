#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - prints the sum of all arguments
 * @n: number of parms
 * @...: undefined numbert of parametres
 *
 * Return: 0 or the sum
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list argss;
	unsigned int i, sum = 0;

	va_start(argss, n);

	for (i = 0; i < n; i++)
		sum += va_arg(argss, int);

	va_end(argss);

	return (sum);
}
