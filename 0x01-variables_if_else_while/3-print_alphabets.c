#include <stdio.h>
#include <stdlib.h>

/**
* main - Entry point
*
*Return: Always 0
*/
int main(void)
{
	char alph, Alph;

	for (alph = 'a'; alph <= 'z'; alph++)
		putchar(alph);
	for (Alph = 'A'; Alph <= 'Z'; Alph++)
		putchar(Alph);
	putchar('\n');
	return (0);
}
