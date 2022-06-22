#include "main.h"

/**
 * factorial - calculates a factorial of an integer.
 * @n: The integer.
 *
 * Return: 0 or the factorial.
 */
int factorial(int n)
{
	int fact = n;

	if (n < 0)
		return (-1);

	else if (n >= 0 && n <= 1)
		return (1);

	fact *= factorial(n - 1);

	return (fact);
}
