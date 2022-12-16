#include "main.h"

/**
 * print_line - will print a line _n long
 * @n: length of the line
 *
 * Return: void
 */
void print_line(int n)
{
	int line = 0;

	while (line < n)
	{
		_putchar('_');
		line++;
	}
	_putchar('\n');
}
