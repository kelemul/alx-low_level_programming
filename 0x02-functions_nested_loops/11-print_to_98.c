/*
 * File: 11-print_to_98.c
 * Author: KELEMU L
 */

#include <stdio.h>

/**
 * print_to_98 - Print numbers from n to 98
 * @n: The initial number.
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
