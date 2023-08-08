#include "main.h"

/**
* create_array - prints a string of size chars
* @size: number of chars
* @c: char to be printed
*
* Return: pointer to char
*/

char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
		return (NULL);

	s = (char *) malloc((size + 1) * sizeof(char));

	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}
	s[i] = '\0';
	_putchar('\n');

	return (s);
}
