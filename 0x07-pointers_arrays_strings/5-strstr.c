#include "main.h"

/**
 * _strstr - locates a substring
 * @haystack: string
 * @needle: string
 *
 * Return: a pointer to the beginning of a substring
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, start;
	int nlen = 0;

	i = 0;
	j = 0;
	start = 0;

	while (needle[nlen] != '\0')
	{
		nlen++;
	}
	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; j < nlen && haystack[i] == needle[j]; j++; i++)
		{
			if (j == 0)
			{
				start i;
			}
			if (j == nlen - 1)
			{
				return (haystack + start);
			}
		}
	}
	return (0);
}
