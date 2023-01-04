#include "main.h"
/**
 * square_root - prints the natural square root of a number
 * @i: number
 * @j: incrementor
 *
 * Return: the number found
 */
int square_root(int i, int j)
{
	if (i * i == j)
	{
		return (i);
	}
	else if (i * i > j)
	{
		return (-1);
	}
	else
	{
		return (square_root(i + 1, j));
	}
}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number
 * Return: the number found
 */
int _sqrt_recursion(int n)
{
	int a = 1;

	return (square_root(a, n));
}
