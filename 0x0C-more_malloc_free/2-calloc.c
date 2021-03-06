/*
 * file-name: 2-calloc.c
 * auth:kelemu L.
 */
#include "main.h"
#include <stdlib.h>

/**
 * calloc - checks the mem allocation
 * @nmeb: is the array
 * @size: is the size of the array
 *
 * Return: the array
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *mem;
	char *filler;
	unsigned int index;

	if (nmemb == 0 || size == 0)
		return (NULL);

	mem = malloc(size * nmemb);

	if (mem == NULL)
		return (NULL);

	filler = mem;

	for (index = 0; index < (size * nmemb); index++)
		filler[index] = '\0';

	return (mem);
}
