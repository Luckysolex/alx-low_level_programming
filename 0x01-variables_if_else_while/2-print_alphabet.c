#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 *
 * description: Print the alphabets in lowercase
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int i = 97;

	while (i < 123)
	{	
		putchar(i);
		i++;
	}
	putchar(10);

	return (0);
}	
