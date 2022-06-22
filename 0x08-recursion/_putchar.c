#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes a characterr c
 * @c: The char to be printed
 *
 * Return: 1 for success 0 otherwise
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
