#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
*Return: Always 0
*/

int main(void)
{
	int f, m, l;

	for (f = '0'; f < '8'; f++)
	{
		for (m = f + 1; m < '9'; m++)
		{
			for (l = m + 1; l <= '9'; l++)
			{
				if ((f != m) != l)
				{
					putchar(f);
					putchar(m);
					putchar(l);

					if (f == '7' && m == '8')
						continue;
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
