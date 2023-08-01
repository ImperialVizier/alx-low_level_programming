#include "main.h"

/**
* _strpbrk - Searches a string for any set of bytes
* @s: input string
* @accept: input string to locate in s
*
* Return: a pointer to the byte in s that matches one of the bytes
* in accept, or NULL if no such byte is found
*/

char *_strpbrk(char *s, char *accept)
{
	char *ptr = accept;

	while (*s)
	{
		while (*accept)
		{
			if (*accept == *s)
				return (s);
			accept++;
		}

		accept = ptr;
		s++;
	}
	return (NULL);
}
