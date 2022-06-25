#include <stdio.h>
#include <stdlib.h>

/**
 * main - display the muluct of two arguments
 * @argc: the two numbers as arguments
 * @argv: arguments list
 *
 * Return: the muluct
 */
int main(int argc, char *argv[])
{
	int a1, B1, mul;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	a1 = atoi(argv[1]);
	B1 = atoi(argv[2]);
	mul = a1 * B1;

	printf("%d\n", mul);

	return (0);
}
