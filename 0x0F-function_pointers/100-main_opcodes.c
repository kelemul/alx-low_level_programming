#include <stdio.h>
#include <stdlib.h>

/**
 * main - get its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: is 0
 */
int main(int argc, char *argv[])
{
	int b, i;
	int (*loc)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	b = atoi(argv[1]);

	if (b < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < b; i++)
	{
		opcode = *(unsigned char *)loc;
		printf("%.2x", opcode);

		if (i == b - 1)
			continue;
		printf(" ");

		loc++;
	}

	printf("\n");

	return (0);
}
