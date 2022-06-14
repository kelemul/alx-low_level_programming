/*
 * File: 7-print_last_digit.c
 * Author: KELEMU L.
 */

#include "main.h"

/**
 * print_last_digit - finds the last digit.
 * @n: The number.
 *
 * Return: last digit.
 */
int print_last_digit(int n)
{
	int d = n % 10;

	if (d < 0)
		d *= -1;

	_putchar(d + '0');

	return (d);
}
