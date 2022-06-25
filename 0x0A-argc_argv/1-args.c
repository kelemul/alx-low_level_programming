#include <stdio.h>

/**
 * main - gets the umber of arguments
 * @argc: number of arguments
 * @argv: list of arguments
 *
 * Return: is 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
