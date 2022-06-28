#include "main.h"
#include <stdlib.h>

/**
 * argstostr - argument concatenator
 * @ac: number of argumets
 * @av: an array
 *
 * Return: Null or the string
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int arg, bts, i, size = ac;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (arg = 0; arg < ac; arg++)
	{
		for (bts = 0; av[arg][bts]; bts++)
			size++;
	}

	str = malloc(sizeof(char) * size + 1);

	if (str == NULL)
		return (NULL);

	i = 0;

	for (arg = 0; arg < ac; arg++)
	{
		for (bts = 0; av[arg][bts]; bts++)
			str[i++] = av[arg][bts];

		str[i++] = '\n';
	}

	str[size] = '\0';

	return (str);
}
