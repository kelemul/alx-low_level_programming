#include "main.h"
#include <limits.h>
#include <stdio.h>

/**
 * get_bit - returns bit value at index @index
 * @n: the bit number
 * @index: the index bit
 *
 * Return: bit value
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = ((n >> index) & 1);
	if (index > 64)
		return (-1);
	return (bit);
}

