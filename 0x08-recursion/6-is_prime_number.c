#include "main.h"

int check_div(int num, int div);
int is_prime_number(int n);

/**
 * check_div - Checks if a number is divisible.
 * @num: The number to be checked.
 * @div: The divisor.
 *
 * Return: 1 if div is divisibble othrewise 0
 */
int check_div(int num, int div)
{
	if (num % div == 0)
		return (0);

	if (div == num / 2)
		return (1);

	return (check_div(num, div + 1));
}

/**
 * is_prime_number - Checks if a number is prime.
 * @n: The number to be checked.
 *
 * Return: 1 if @n is prime otherwise 0.
 */
int is_prime_number(int n)
{
	int div = 2;

	if (n <= 1)
		return (0);

	if (n >= 2 && n <= 3)
		return (1);

	return (check_div(n, div));
}
