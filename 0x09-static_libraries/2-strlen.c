#include "main.h"

/**
* _strlen - Returns lenght of string
* @s: string parameter
*
* Return: Integer
*/

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
		len++;
	return (len);


}
