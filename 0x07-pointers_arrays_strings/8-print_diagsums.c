/*
 * File: 8-print_diagsums.c
 * Auth: Kelemu L.
 */

#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - Prints the diagonal sum.
 * @a: An integer matrix.
 * @size: The size of the matrix.
 */
void print_diagsums(int *a, int size)
{
	int i, s = 0, total = 0;

	for (i = 0; i < size; i++)
	{
		s += a[i];
		a += size;
	}

	a -= size;

	for (i = 0; i < size; i++)
	{
		total += a[i];
		a -= size;
	}

	printf("%d, %d\n", s, total);
}
