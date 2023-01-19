#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - print a name
 * @name: string to print
 * @f: pointer to function
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
	{
		(*f)(name);
	}
}
