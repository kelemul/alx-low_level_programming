#include <stdio.h>

/**
 * main - returns all arguments
 * @argc: number of args
 * @argv: list of arguments
 *
 * Return: is 0
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
