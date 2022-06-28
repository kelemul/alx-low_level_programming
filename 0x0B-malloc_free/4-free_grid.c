#include "main.h"
#include <stdlib.h>

/**
 * free_grid - free the allocated mem
 * @twoD: the 2D array mem location
 * @h: the h of twoDe
 */
void free_grid(int **twoD, int h)
{
	int i;

	for (i = 0; i < h; i++)
		free(twoD[i]);

	free(twoD);
}
