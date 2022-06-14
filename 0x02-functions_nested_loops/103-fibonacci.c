/*
 * File: 103-fibonacci.c
 * Author: Kelemu L.
 */

#include <stdio.h>

/**
 * main - even fibonacci
 *
 * Return: Always 0.
 */
int main(void)
{
	unsigned long r1 = 0, r2 = 1, r1r2;
	float sum;

	while (1)
	{
		r1r2 = r1 + r2;
		if (r1r2 > 4000000)
			break;

		if ((r1r2 % 2) == 0)
			sum += r1r2;

		r1 = r2;
		r2 = r1r2;
	}
	printf("%.0f\n", sum);

	return (0);
}
