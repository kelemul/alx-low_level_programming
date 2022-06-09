#include "main.h"
#include <unistd.h>

/**
 * _putchar -write something
 * @c: the char to get
 *
 * Return: wil be 1
 * */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
