#include <stdio.h>

/**
 * main - gets the umber of arguments
 * @argc: number of arguments
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
