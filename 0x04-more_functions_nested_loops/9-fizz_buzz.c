/*
 * File: fiz buzz game
 * Author: kelemu
 */

#include <stdio.h>

/**
 * main - prints a number anfd Fiz for multiples of 3
 * Buzz for multiplies of 5
 * FizzBuzz, for multiplies of three and five.
 *
 * Return: is 0.
 */
int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");
		
		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}
	
	printf("\n");
	
	return (0);
}