/*
 * File: 104-fibonacci.c
 * Auth: Kelemu L
 */

#include <stdio.h>

/**
 * main - priints fibonacci nuber
 *
 * Return: Always 0.
 */
int main(void)
{
	int counter;
	unsigned long r1 = 0, r2 = 1, sum;
	unsigned long r1_h1, r1_h2, r2_h1, r2_h2;
	unsigned long h1, h2;

	for (counter = 0; counter < 92; counter++)
	{
		sum = r1 + r2;
		printf("%lu, ", sum);

		r1 = r2;
		r2 = sum;
	}

	r1_h1 = r1 / 10000000000;
	r2_h1 = r2 / 10000000000;
	r1_h2 = r1 % 10000000000;
	r2_h2 = r2 % 10000000000;

	for (counter = 93; counter < 99; counter++)
	{
		h1 = r1_h1 + r2_h1;
		h2 = r1_h2 + r2_h2;
		if (r1_h2 + r2_h2 > 9999999999)
		{
			h1 += 1;
			h2 %= 10000000000;
		}

		printf("%lu%lu", h1, h2);
		if (counter != 98)
			printf(", ");

		r1_h1 = r2_h1;
		r1_h2 = r2_h2;
		r2_h1 = h1;
		r2_h2 = h2;
	}
	printf("\n");
	return (0);
}
