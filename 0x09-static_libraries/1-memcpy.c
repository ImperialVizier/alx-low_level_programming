#include "main.h"

/**
* _memcpy - copies memory area
* @dest: destination
* @src: source
* @n: number of bytes to copy
*
* Return: Pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;

	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (ptr);
}
