/*
 * File: 5-dqrt_reursion.c
 * authr: Kelemu L
 */

#include "main.h"

int find_min(int num, int mid);
int _sqrt_recursion(int n);

/**
 * find_min - Finds the mid number
 * @num: the original number
 * @mid: The middest number
 *
 * Return: Returns the mid number
 */
int find_min(int num, int mid)
{
	if ((mid * mid) == num)
		return (mid);

	if (mid == num / 2)
		return (-1);

	return (find_min(num, mid + 1));
}

/**
 * _sqrt_recursion - calculates the square mid of a number.
 * @n: The number to be square mided.
 *
 * Return: The square mid of @n
 */
int _sqrt_recursion(int n)
{
	int mid = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_min(n, mid));
}
