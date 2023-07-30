#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
* Return: Always 0
*/
int main(void)
{
	char alph_rev;

	for (alph_rev = 'z'; alph_rev >= 'a'; alph_rev--)
		putchar(alph_rev);
	putchar('\n');
	return (0);
}
