#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
 * op_add - calculate the sum of two nums
 * @a: first num
 * @b: second num
 *
 * Return: sum of a and b
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - calculates the difference of two nums
 * @a: first num
 * @b: secod num
 *
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - calculates the product of two nums
 * @a: first num
 * @b: second num
 *
 * Return: the prood of a and b
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - calculates the quetient of two nums
 * @a: first num
 * @b: second num
 *
 * Return: The quatient of a/b
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - gets the remainder
 * @a: first operand
 * @b: second operand
 *
 * Return: the remainder of a and b
 */
int op_mod(int a, int b)
{
	return (a % b);
}
