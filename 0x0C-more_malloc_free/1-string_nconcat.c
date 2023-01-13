#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * @n: number of bytes of s2
 * Return: a pointer with the content of s1 followed by n bytes of s2
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int lenght1, lenght2, i, j;
	char *space;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	lenght1 = _strlen(s1);
	lenght2 = _strlen(s2);

	if (n >= lenght2)
	{
		n = lenght2;
	}

	space = malloc(sizeof(char) * (n + lenght1 + 1));

	if (space == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < lenght1; i++)
		space[i] = s[i];
	for (j = 0; s2[j] != '\0' && j != n; j++; i++)
		space[i] = s2[j];

	space[i] = '\0';
	return (space);

