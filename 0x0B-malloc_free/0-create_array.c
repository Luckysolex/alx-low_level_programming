#include "main.h"
#include <stdlib.h>
/**
 * create_array - create an array of strings
 * @size: size of the memory to print
 * @c: character to print
 *
 * Return: a pointer of array or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *arr;
	unsigned int i;

	arr = (char *) malloc(size * sizeof(char));
	if (arr == NULL)
		return (NULL);

	if (size != 0)
	{
		for (i = 0; i < size; i++)
		{
			*(arr + i) = c;
		}

		return (arr);
	}
	else
	{
		return (NULL);
	}
}
