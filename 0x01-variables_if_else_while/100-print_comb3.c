#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	int f, l;

	for (f = '0'; f < '9'; f++)
	{
		for (l = f + 1; l <= '9'; l++)
			if (f != l)
			{
				putchar(f);
				putchar(l);

				if (f == '8' && l == '9')
					continue;
				putchar(',');
				putchar(' ');
			}
	}
	putchar('\n');
	return (0);
}
