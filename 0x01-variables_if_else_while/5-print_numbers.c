#include <stdio.h>
/**
 * main - print single digit numbers
 *
 * Description: print all single digit numbers from 0
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		i++;
	}

	putchar(10);

	return (0);
}
