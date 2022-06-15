/*
 * File: 4-rev_array.c
 * Auth: Kelemu L.
 */

#include "main.h"

/**
 * reverse_array - Put the array in reverse order.
 * @a: The array to be reversed
 * @n: The size of array
 */
void reverse_array(int *a, int n)
{
	int tmp, index;

	for (index = n - 1; index >= n / 2; index--)
	{
		tmp = a[n - 1 - index];
		a[n - 1 - index] = a[index];
		a[index] = tmp;
	}
}
