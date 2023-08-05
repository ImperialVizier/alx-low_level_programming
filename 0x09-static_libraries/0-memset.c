#include "main.h"

/**
* _memset - function that fills memory constant bytes
* @s: memory location
* @b: character to fill memory with
* @n: number of bytes to fill to memory
*
* Return: Pointer to memory location
*/

char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*s = b;
		s++;
	}
	return (ptr);
}
