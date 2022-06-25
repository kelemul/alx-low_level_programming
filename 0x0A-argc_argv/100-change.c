#include <stdio.h>
#include <stdlib.h>

/**
 * main - minimum coin
 * @arrgc: number of arguments
 * @argv: arrguments
 *
 * Return: 0, 1 or TotalCents
 */
int main(int argc, char *argv[])
{
	int TotalCents, ReturnedCoin = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	TotalCents = atoi(argv[1]);

	while (TotalCents > 0)
	{
		ReturnedCoin++;
		if ((TotalCents - 25) >= 0)
		{
			TotalCents -= 25;
			continue;
		}
		if ((TotalCents - 10) >= 0)
		{
			TotalCents -= 10;
			continue;
		}
		if ((TotalCents - 5) >= 0)
		{
			TotalCents -= 5;
			continue;
		}
		if ((TotalCents - 2) >= 0)
		{
			TotalCents -= 2;
			continue;
		}
		TotalCents--;
	}

	printf("%d\n", ReturnedCoin);

	return (0);
}
