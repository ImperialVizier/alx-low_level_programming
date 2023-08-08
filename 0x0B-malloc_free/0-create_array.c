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
	for (i = 0; i < size; i++)
	{
		s[i] = _putchar(c);
	}
	s[i] = _putchar('\0');
	
	if (s == NULL)
		return (NULL);
	return (s);
}
