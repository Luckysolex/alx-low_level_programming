#include "3-calc.h"
/**
 * op_add - sum of two integers
 * @a: integer 1
 * @b: integer 2
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}
/**
 * op_sub - difference of two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}
/**
 * op_mul - multiply to numbers
 * @a: integer 1
 * @b: integer 2
 * Return: product
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: the answer
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a / b);
	}
}
/**
 * op_mod - modulus of two numbers
 * @a: integer 1
 * @b: integer 2
 * Return: remainder
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}
	else
	{
		return (a % b);
	}
}
