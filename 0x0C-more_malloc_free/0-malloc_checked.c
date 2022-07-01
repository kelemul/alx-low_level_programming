#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - checks if the malloci of an integer
 * is Null or not
 * @b: the integer to be checked
 *
 * Return: the mem location
 */
void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);

	return (mem);
}
