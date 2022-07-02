#include "main.h"
#include <stdlib.h>
#include <stdio.h>

int get_size(char *str);
char *array_char(int size);
char *find_zero(char *str);
void multiply(char *prod, char *mult, int digit, int zeroes);
void find_sum(char *results, char *n_result, int length_n);

/**
 * get_size - gets string length
 * @str: is the string
 *
 * Return: length
 */
int get_size(char *str)
{
	int len = 0;

	while (*str++)
		len++;

	return (len);
}

/**
 * array_char - creates an array of chars
 * @size: array size
 *
 * Return: the array
 */
char *array_char(int size)
{
	char *array;
	int index;

	array = malloc(sizeof(char) * size);

	if (array == NULL)
		exit(98);

	for (index = 0; index < (size - 1); index++)
		array[index] = 'x';

	array[index] = '\0';

	return (array);
}

/**
 * find_zero - iterates through the string
 * @str: string
 *
 * Return: non-zero element
 */
char *find_zero(char *str)
{
	while (*str && *str == '0')
		str++;

	return (str);
}

/**
 * get_digit - char to digit converter
 * @c: the target character
 *
 * Return: in of char
 */
int get_digit(char c)
{
	int digit = c - '0';

	if (digit < 0 || digit > 9)
	{
		printf("Error\n");
		exit(98);
	}

	return (digit);
}

/**
 * multiply - a product of two nums
 * @prod: result
 * @mult: numbers
 * @digit: a single digit
 * @zeroes: prefixs
 */
void multiply(char *prod, char *mult, int digit, int zeroes)
{
	int mult_len, num, tens = 0;

	mult_len = get_size(mult) - 1;
	mult += mult_len;

	while (*prod)
	{
		*prod = 'x';
		prod++;
	}

	prod--;

	while (zeroes--)
	{
		*prod = '0';
		prod--;
	}

	for (; mult_len >= 0; mult_len--, mult--, prod--)
	{
		if (*mult < '0' || *mult > '9')
		{
			printf("Error\n");
			exit(98);
		}

		num = (*mult - '0') * digit;
		num += tens;
		*prod = (num % 10) + '0';
		tens = num / 10;
	}

	if (tens)
		*prod = (tens % 10) + '0';
}

/**
 * find_sum - add two numbers
 * @results: result
 * @n_result: next product
 * @length_n: length
 */
void find_sum(char *results, char *n_result, int length_n)
{
	int num, tens = 0;

	while (*(results + 1))
		results++;

	while (*(n_result + 1))
		n_result++;

	for (; *results != 'x'; results--)
	{
		num = (*results - '0') + (*n_result - '0');
		num += tens;
		*results = (num % 10) + '0';
		tens = num / 10;

		n_result--;
		length_n--;
	}

	for (; length_n >= 0 && *n_result != 'x'; length_n--)
	{
		num = (*n_result - '0');
		num += tens;
		*results = (num % 10) + '0';
		tens = num / 10;

		results--;
		n_result--;
	}

	if (tens)
		*results = (tens % 10) + '0';
}

/**
 * main - number multiplier
 * @argv: number of args
 * @argc: the arguments
 *
 * Return: is 0
 */
int main(int argc, char *argv[])
{
	char *results, *n_result;
	int size, index, digit, zeroes = 0;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	if (*(argv[1]) == '0')
		argv[1] = find_zero(argv[1]);
	if (*(argv[2]) == '0')
		argv[2] = find_zero(argv[2]);
	if (*(argv[1]) == '\0' || *(argv[2]) == '\0')
	{
		printf("0\n");
		return (0);
	}

	size = get_size(argv[1]) + get_size(argv[2]);
	results = array_char(size + 1);
	n_result = array_char(size + 1);

	for (index = get_size(argv[2]) - 1; index >= 0; index--)
	{
		digit = get_digit(*(argv[2] + index));
		multiply(n_result, argv[1], digit, zeroes++);
		find_sum(results, n_result, size - 1);
	}
	for (index = 0; results[index]; index++)
	{
		if (results[index] != 'x')
			putchar(results[index]);
	}
	putchar('\n');

	free(n_result);
	free(results);

	return (0);
}
