#include "function_pointers.h"

/**
 * array_iterator - ana array of pointers
 * @array: the array parametres
 * @size: array size
 * @action: pointer to function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (array == NULL || action == NULL)
		return;

	while (size-- > 0)
	{
		action(*array);
		array++;
	}
}
