/*
 * File: 100-set_string.c
 * Auth: kelemu L.
 */

#include "main.h"

/**
 * set_string - Sets pointer to a char.
 * @s: The pointer.
 * @to: The char.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
