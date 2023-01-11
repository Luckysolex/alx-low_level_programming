#include "main.h"
#include <stdlib.h>
/**
 * _strlen - gets string lenght
 * @string: string
 * Return: lenght
 */
int _strlen(char *string)
{
	int lenght;

	lenght = 0;
	while (string[lenght] != '\0')
	{
		lenght++;
	}
	return (lenght);
}

/**
 * argstostr - concatenates all the argument to a program
 * @ac: argc - number of arguments
 * @av: argv - array of arguments
 * Return: pointer to new string
 */
char *argstostr(int ac, char **av)
{
	int lenght, i, j, k;
	char *str;

	if (ac == 0 || av == NULL)
		return (NULL);

	lenght = 0;
	for (i = 0, i < ac; i++)
	{
		lenght += _strlen(av[i]) + 1;
	}

	str = malloc(sizeof(char) * lenght + 1);
	if (str == NULL)
		return (NULL);

	k = 0;
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			str[k] = av[i][j];
			k++;
		}
		str[k] = '\n';
		k++;
	}
	str[k] = '\0';
	return (str);
}
