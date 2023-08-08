#include "main.h"

/**
* _strdup - duuplicates string
* @str: string to duplicate
*
* Return: string is successful, and NULL otherwise
*/

char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

	dup = (char *) malloc(sizeof(str));

	if (dup == NULL)
		return (NULL);

	while (*str)
	{
		len++;
		str++;
	}

	i = 0;
	while (i < len)
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';

	free(dup);
	return (dup);
}
