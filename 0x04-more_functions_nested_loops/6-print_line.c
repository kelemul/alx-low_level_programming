/*
 * File: line-print
 * Author: kelemu leykun
 */

#include "main.h"

/**
 * print_line - will show a straight line
 * @n: is the characters
 */
void print_line(int n)
{
	int len;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
			_putchar('_');
	}

	_putchar('\n');
}
