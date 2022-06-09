/*
 * File: print nums
 * Author: kelemu l
 */

#include "main.h"

/**
 * print_numbers - prints 0-9 nums
 */
void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
		_putchar((num % 10) + '0');

	_putchar('\n');
}
