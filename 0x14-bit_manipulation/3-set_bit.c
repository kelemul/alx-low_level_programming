#include "main.h"

/**
 * set_bit - alter the value of bit at index
 * @n: the number to be altered
 * @index: the index
 *
 * Return: 1 or -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	if (!((*n >> index) & 1))
	{
		*n += 1 << index;
		return (1);
	}
	return (-1);
}
