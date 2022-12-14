#include "main.h"
/**
 * print_sign - print the sign of a number
 *
 * @n: n is a number
 *
 * Return: +1 if n is positive, 0 for 0, and -1 for negative
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
