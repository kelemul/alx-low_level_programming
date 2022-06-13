/*
 * File: 8-print_array.c
 * Auth: KELEMU L.
 */

#include "main.h"
#include <stdio.h>

/**
 * print_array -gets all the array elements.
 * @a: integer array.
 * @n: size of the array to be printed.
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;

		printf(", ");
	}

	printf("\n");
}
