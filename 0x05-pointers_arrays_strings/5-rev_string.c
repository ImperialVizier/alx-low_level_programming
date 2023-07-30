#include "main.h"

/**
* rev_string - Reverses string
* @s: String parameter
*
* Return: void
*/

void rev_string(char *s)
{
	int i = 0, len = 0;
	char rev;

	while (s[len]  != '\0')
		len++;

	while (i < len--)
	{
		rev = s[i];
		s[i++] = s[len];
		s[len] = rev;
	}

}
