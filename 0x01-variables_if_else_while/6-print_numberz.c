#include <stdio.h>
/**
 * main - print all single digits
 *
 * Description: print all single digits
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
