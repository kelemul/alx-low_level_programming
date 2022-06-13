/*
 * File: 1-swap.c
 * Auth: KELEMU L.
 */

#include "main.h"

/**
 * swap_int - swap two int
 * @a: first num
 * @b: second num
 */
void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
