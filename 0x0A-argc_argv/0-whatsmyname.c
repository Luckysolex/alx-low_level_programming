#include "main.h"
#include <stdio.h>
/**
 * main - prints it's name
 * @argc: argument count
 * @argv: the argument of the vector
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void) argc;
	printf("%s\n", *argv);
	return (0);
}
