#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a 2D array of elements
 * @w: the w of array
 * @h: the hight of an array
 *
 * Return: the 2D array
 */
int **alloc_grid(int w, int h)
{
	int **ptr;
	int hi, wi;

	if (w <= 0 || h <= 0)
		return (NULL);

	ptr = malloc(sizeof(int *) * h);

	if (ptr == NULL)
		return (NULL);

	for (hi = 0; hi < h; hi++)
	{
		ptr[hi] = malloc(sizeof(int) * w);

		if (ptr[hi] == NULL)
		{
			for (; hi >= 0; hi--)
				free(ptr[hi]);

			free(ptr);
			return (NULL);
		}
	}

	for (hi = 0; hi < h; hi++)
	{
		for (wi = 0; wi < w; wi++)
			ptr[hi][wi] = 0;
	}

	return (ptr);
}
