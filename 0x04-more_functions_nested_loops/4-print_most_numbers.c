/*
 * File: print nums
 * Author: kelemu l
 */

#include "main.c"

/**
 * main - checks the code
 * print_most_numbers - print 0-9 except 2 and 4
 *
 * Return: always 0
 */
void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num != 2 && num != 4)
			_putchar((num % 10) + '0');
	}

	_putchar('\n');
}
