#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - Entry point

Description: the alphabets in lowercase, followed by a new line

Return: Always 0 (success)
/
int main(void)
{
	int i = 97;
	while (i < 123)
	{
		if (i != 101 && i != 113)
		{
			putchar(i);
		}
		i++;
	}
	putchar(10);
	return(0);
}
