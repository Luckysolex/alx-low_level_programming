#include "main.h"
#include <stdio.h>
/**
 * main - prints the number of argument
 * @argc: argument count
 * @argv: argument vector for values
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	(void)argv;
	argc--;
	printf("%d\n", argc);
	return (0);
}
