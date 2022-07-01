/*
 * File-name: arrarange.c
 * Auth: kelemu l.
 */
#include "main.h"
#include <stdlib.h>

/**
 * array_range - prints the range of arrayss
 * @min: minimum number
 * @max: maximum number
 *
 * Return: returns the array
 */
int *array_range(int min, int max)
{
	int *array, index, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	array = malloc(sizeof(int) * size);

	if (array == NULL)
		return (NULL);

	for (index = 0; index < size; index++)
		array[index] = min++;

	return (array);
}
