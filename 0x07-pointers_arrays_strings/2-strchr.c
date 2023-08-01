#include "main.h"

/**
* _strchr - Locates character in a string
* @s: String to be searched from
* @c: character to search
*
* Return: Pointer to first found
*/

char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == '\0'}
		return (s);
	return (NULL);
}
