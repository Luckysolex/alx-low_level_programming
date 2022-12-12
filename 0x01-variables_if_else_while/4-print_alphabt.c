#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 *
 * description: print alphabet except q and e
 *
 * return: always 0 (success)
 */
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

	return (0);
}
